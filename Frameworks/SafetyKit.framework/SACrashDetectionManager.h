
@interface SACrashDetectionManager : NSObject <SACrashDetectionClientProtocol> {
    <SACrashDetectionDelegate> * _delegate;
}

@property (nonatomic, readonly) long long authorizationStatus;
@property (nonatomic, readonly) SAClient *client;
@property (nonatomic) <SACrashDetectionDelegate> *delegate;

+ (bool)availableOverrideSetting;
+ (bool)isAvailable;

- (void).cxx_destruct;
- (void)_appDidBecomeActive:(id)arg1;
- (void)_callDelegateWithCrashEvent:(id)arg1;
- (long long)authorizationStatus;
- (id)client;
- (id)delegate;
- (id)init;
- (void)requestAuthorizationWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateMostRecentCrashDetectionEvent:(id)arg1;

@end
