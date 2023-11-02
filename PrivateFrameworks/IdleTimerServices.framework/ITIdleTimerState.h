
@interface ITIdleTimerState : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessLock;
    ITIdleTimerStateModel * _model;
    <ITIdleTimerStateRequestHandling> * _requestHandler;
}

+ (bool)isIdleTimerServiceAvailable;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithModel:(id)arg1;
- (bool)isIdleTimerServiceAvailable;
- (id)newAssertionToDisableIdleTimerForReason:(id)arg1;
- (id)newAssertionToDisableIdleTimerForReason:(id)arg1 error:(id*)arg2;
- (id)newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2;
- (id)newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3;

@end
