
@interface SAStackIterator : NSObject <SAFrameIterator> {
    NSArray * _stack;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)hasKernelStack;
- (bool)hasStack;
- (bool)hasSwiftAsyncStack;
- (bool)hasUserStack;
- (void)iterateFramesWithBacktraceStyle:(unsigned long long)arg1 block:(id /* block */)arg2;

@end
