
@interface GKViewServiceInterface : NSXPCInterface

+ (void)_configureKVOTypes:(id)arg1;
+ (id)challengeIssueHostViewControllerInterface;
+ (id)challengeIssueServiceViewControllerInterface;
+ (id)extensionHostInterface;
+ (id)extensionInterface;
+ (id)gameCenterHostViewControllerInterface;
+ (id)gameCenterServiceViewControllerInterface;
+ (id)matchmakerHostViewControllerInterface;
+ (id)matchmakerServiceViewControllerInterface;
+ (id)remoteFriendRequestViewControllerInterface;
+ (id)remoteSignInViewControllerInterface;
+ (id)serviceFriendRequestViewControllerInterface;
+ (void)setClassesForExtensionInterface:(id)arg1;
+ (void)setClassesForHostInterface:(id)arg1;
+ (id)signInServiceViewControllerInterface;
+ (id)turnBasedHostViewControllerInterface;
+ (id)turnBasedServiceViewControllerInterface;

@end
