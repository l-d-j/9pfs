int	_9perrno;

int	_9pversion(int, uint32_t);
FFid	*_9pattach(int, uint32_t, uint32_t);
FFid	*_9pwalk(char*);
int	_9pstat(FFid*, struct stat*);
int	_9pclunk(FFid*);
void	init9p(int);