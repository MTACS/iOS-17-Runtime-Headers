
@interface _ASCABLEPowerLogger : NSObject {
    bool  _didSendFinishedEvent;
    bool  _didSendStartedEvent;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void)dealloc;
- (id)init;
- (void)logAuthenticationFinishedEventIfNeeded;
- (void)logAuthenticationStartedEventIfNeeded;

@end
