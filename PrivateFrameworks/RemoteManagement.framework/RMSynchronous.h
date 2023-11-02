
@interface RMSynchronous : NSObject {
    NSConditionLock * _lock;
}

- (void).cxx_destruct;
- (void)complete;
- (id)init;
- (void)waitForCompletion;

@end
