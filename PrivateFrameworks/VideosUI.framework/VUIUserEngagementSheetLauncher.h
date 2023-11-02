
@interface VUIUserEngagementSheetLauncher : NSObject <AMSUserNotificationAuthorizationDelegate> {
    unsigned long long  _firstPromptLaunchNumberAfterGDPR;
    bool  _hasAppLostConnectivity;
    unsigned long long  _lastPromptLaunchNumberAfterGDPR;
    NSString * _lastTabIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long firstPromptLaunchNumberAfterGDPR;
@property (nonatomic) bool hasAppLostConnectivity;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastPromptLaunchNumberAfterGDPR;
@property (nonatomic, retain) NSString *lastTabIdentifier;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_deleteKeysUsedForSheetPresentation;
- (void)_handleNetworkReachabilityDidChangeNotification:(id)arg1;
- (void)_handleTabBarChange:(id)arg1;
- (void)_handleUserNotificationAction:(long long)arg1;
- (id)_init;
- (void)_showNotificationAuthorizationSheet;
- (void)dealloc;
- (unsigned long long)firstPromptLaunchNumberAfterGDPR;
- (void)handleAMSEngagementPresentationSheet:(bool)arg1 isRepromptSupported:(bool)arg2;
- (void)handleEngagementRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasAppLostConnectivity;
- (id)init;
- (bool)isAnotherSheetShowingToUser;
- (unsigned long long)lastPromptLaunchNumberAfterGDPR;
- (id)lastTabIdentifier;
- (void)setFirstPromptLaunchNumberAfterGDPR:(unsigned long long)arg1;
- (void)setHasAppLostConnectivity:(bool)arg1;
- (void)setLastPromptLaunchNumberAfterGDPR:(unsigned long long)arg1;
- (void)setLastTabIdentifier:(id)arg1;

@end
