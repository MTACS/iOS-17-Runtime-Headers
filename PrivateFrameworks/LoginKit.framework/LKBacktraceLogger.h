
@interface LKBacktraceLogger : NSObject {
    unsigned int  _trackedThread;
}

@property (nonatomic) unsigned int trackedThread;

- (bool)_copyFrameInformation:(unsigned long long)arg1 destination:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (id)_getBacktraceFromThread:(unsigned int)arg1;
- (unsigned long long)_getFPFromThreadState:(struct __darwin_arm_thread_state64 { unsigned long long x1[29]; void *x2; void *x3; void *x4; void *x5; unsigned int x6; unsigned int x7; })arg1;
- (unsigned long long)_getLRFromThreadState:(struct __darwin_arm_thread_state64 { unsigned long long x1[29]; void *x2; void *x3; void *x4; void *x5; unsigned int x6; unsigned int x7; })arg1;
- (unsigned long long)_getPCFromThreadState:(struct __darwin_arm_thread_state64 { unsigned long long x1[29]; void *x2; void *x3; void *x4; void *x5; unsigned int x6; unsigned int x7; })arg1;
- (struct __darwin_arm_thread_state64 { unsigned long long x1[29]; void *x2; void *x3; void *x4; void *x5; unsigned int x6; unsigned int x7; })_getThreadStateForThread:(unsigned int)arg1;
- (id)_logWithSymbol:(struct dl_info { char *x1; void *x2; char *x3; void *x4; }*)arg1 address:(unsigned long long)arg2 index:(int)arg3;
- (void)_symbolicateBuffer:(const unsigned long long*)arg1 symbolsBuffer:(struct dl_info { char *x1; void *x2; char *x3; void *x4; }*)arg2 count:(int)arg3;
- (id)getBacktraceFromTrackedThread;
- (void)setTrackedThread:(unsigned int)arg1;
- (void)trackCurrentThread;
- (unsigned int)trackedThread;

@end
