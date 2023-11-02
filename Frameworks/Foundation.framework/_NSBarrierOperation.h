
@interface _NSBarrierOperation : NSOperation {
    id /* block */  _block;
}

+ (bool)_removesDependenciesAfterFinish;

- (void)dealloc;
- (void)main;
- (long long)queuePriority;

@end
