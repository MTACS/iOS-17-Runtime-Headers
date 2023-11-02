
@interface BWMetadataTimeMachineRequest : NSObject {
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

- (void)complete;
- (void)dealloc;
- (id)init;
- (void)waitForCompletionWithTimeout:(float)arg1;

@end
