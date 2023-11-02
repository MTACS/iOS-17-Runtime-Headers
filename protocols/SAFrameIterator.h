
@protocol SAFrameIterator <NSObject>

@required

- (bool)hasKernelStack;
- (bool)hasStack;
- (bool)hasSwiftAsyncStack;
- (bool)hasUserStack;
- (void)iterateFramesWithBacktraceStyle:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SAFrame *, void*

@end
