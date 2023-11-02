
@interface _PGBackgroundPIPServiceConnectionTarget : NSObject <PGBackgroundPIPClientToServerInterface> {
    BSServiceConnection * _connection;
    <_PGBackgroundPIPServiceConnectionTargetDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _lock_activitySessionIdentifier;
    NSString * _lock_bundleIdentifier;
    long long  _lock_state;
}

@property (readonly, copy) NSString *activitySessionIdentifier;
@property (readonly, copy) NSString *bundleIdentifier;
@property (getter=isConnectionActive, nonatomic, readonly) bool connectionActive;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_PGBackgroundPIPServiceConnectionTargetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activitySessionIdentifier;
- (id)bundleIdentifier;
- (id)delegate;
- (id)description;
- (oneway void)grantAuthorizationForActivitySessionWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (bool)isConnectionActive;
- (oneway void)revokeAuthorization;
- (void)setDelegate:(id)arg1;
- (long long)state;
- (void)transitionToStateIfPossible:(long long)arg1;

@end
