
@interface _DKSyncOperation : NSOperation {
    _Atomic unsigned char  _state;
}

+ (bool)_removesDependenciesAfterFinish;

- (void)dealloc;
- (void)endOperation;
- (id)init;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;
- (void)startOperation;

@end
