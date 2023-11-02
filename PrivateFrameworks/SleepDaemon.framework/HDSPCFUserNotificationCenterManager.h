
@interface HDSPCFUserNotificationCenterManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _registrationLock;
    NSMutableArray * _registrations;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } registrationLock;
@property (nonatomic, readonly) NSMutableArray *registrations;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (void)cancelNotification:(id)arg1 fromCenter:(id)arg2;
- (id)init;
- (void)postNotification:(id)arg1 fromCenter:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })registrationLock;
- (id)registrations;

@end
