
@interface PLRoutineServiceResult : NSObject {
    NSError * _error;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _result;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (readonly, copy) NSError *error;
@property (readonly) id result;

- (void).cxx_destruct;
- (id)error;
- (id)init;
- (void)receivedReplyWithResult:(id)arg1 error:(id)arg2;
- (id)result;
- (bool)waitForReplyWithTimeout:(unsigned long long)arg1;

@end
