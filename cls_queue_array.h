#pragma once
#include "cls_dynamic_array.h"

template <class class_type> class cls_queue_array
{
protected:
	cls_dynamic_array <class_type> queue;

public:
	void push(class_type data)
	{
		queue.insert_at_end(data);
	}

	void print()
	{
		queue.print_array();
	}

	int size()
	{
		return queue.size();
	}

	bool is_empty()
	{
		return queue.is_empty();
	}

	class_type front()
	{
		return queue.at(0);
	}

	class_type back()
	{
		return queue.at(size() - 1);
	}

	void pop()
	{
		queue.delete_first_item();
	}

	class_type at(int index)
	{
		return queue.at(index);
	}

	void reverse()
	{
		queue.reverse();
	}

	void update(int index, class_type update_data)
	{
		queue.set_item(index, update_data);
	}

	void insert_after(int prev_index, class_type update_data)
	{
		queue.insert_after(prev_index, update_data);
	}

	void insert_at_front(class_type inserted_data)
	{
		queue.insert_at_beginning(inserted_data);
	}

	void insert_at_back(class_type inserted_data)
	{
		queue.insert_at_end(inserted_data);
	}

	void clear()
	{
		queue.clear();
	}
};