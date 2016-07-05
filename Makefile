all: 
	make --directory=function_pointer
	make --directory=task_1
	make --directory=task_2
	make --directory=task_2_prior
	make --directory=thread_check_stack
	make --directory=thread_with_join
	make --directory=thread_with_sleep
clean:
	make clean --directory=function_pointer
	make clean --directory=task_1
	make clean --directory=task_2
	make clean --directory=task_2_prior
	make clean --directory=thread_check_stack
	make clean --directory=thread_with_join
	make clean --directory=thread_with_sleep

