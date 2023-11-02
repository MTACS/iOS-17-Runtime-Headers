
@interface PKAuthenticatorSharedRootContext : NSObject {
    LAContext * _LAContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _userIntentAvailabilityState;
}

@property (nonatomic) long long userIntentAvailabilityState;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)_initialUserIntentAvailabilityState;
- (void)dealloc;
- (id)externalizedContext;
- (id)init;
- (void)resetWithCompletion:(id /* block */)arg1;
- (void)setUserIntentAvailabilityState:(long long)arg1;
- (long long)userIntentAvailabilityState;

@end
