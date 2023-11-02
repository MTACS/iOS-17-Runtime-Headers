
@interface SKSyncCommand : NSObject {
    NSError * _error;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *semaphore;

- (void).cxx_destruct;
- (id)error;
- (id)init;
- (void)onCallbackWithError:(id)arg1;
- (id)semaphore;
- (void)setError:(id)arg1;
- (void)setSemaphore:(id)arg1;
- (bool)waitAndReturnWithError:(id*)arg1;

@end
