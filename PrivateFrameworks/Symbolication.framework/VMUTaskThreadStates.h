
@interface VMUTaskThreadStates : NSObject {
    unsigned long long * _stackPointers;
    unsigned int  _threadCount;
    unsigned int  _threadStateSize;
    void * _threadStates;
}

@property (nonatomic, readonly) unsigned int threadCount;
@property (nonatomic, readonly) unsigned int threadStateSize;

- (void)dealloc;
- (id)initWithPid:(int)arg1 task:(unsigned int)arg2;
- (id)initWithVMUTask:(id)arg1;
- (unsigned long long)stackPointerForThreadNum:(unsigned int)arg1;
- (unsigned int)threadCount;
- (void*)threadStateForThreadNum:(unsigned int)arg1;
- (unsigned int)threadStateSize;

@end
