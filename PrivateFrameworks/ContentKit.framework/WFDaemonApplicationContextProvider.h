
@interface WFDaemonApplicationContextProvider : NSObject <WFApplicationContextProvider> {
    NSString * _userInterfaceType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) NSString *userInterfaceType;
@property (nonatomic) bool wfIdleTimerDisabled;

- (void).cxx_destruct;
- (id)applicationForWFApplicationContext:(id)arg1;
- (id)bundleForWFApplicationContext:(id)arg1;
- (long long)currentApplicationStateForWFApplicationContext:(id)arg1;
- (id)currentUserInterfaceTypeForWFApplicationContext:(id)arg1;
- (id)init;
- (id)initWithUserInterfaceType:(id)arg1;
- (id)keyWindowForWFApplicationContext:(id)arg1;
- (id)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(id)arg2;
- (bool)shouldReverseLayoutDirection;
- (id)userInterfaceType;

@end
