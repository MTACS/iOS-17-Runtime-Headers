
@interface GKExtensionHostViewController : _UIRemoteViewController <GKSocialGamingExtensionInterface, GKSocialGamingHostInterface> {
    <GKExtensionHostViewControllerDelegate> * _delegate;
    UIViewController<GKSocialGamingHostInterface> * _hostViewController;
    NSMapTable * _targetForSelector;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GKExtensionHostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController<GKSocialGamingHostInterface> *hostViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMapTable *targetForSelector;

- (void).cxx_destruct;
- (void)addTarget:(id)arg1 forProtocol:(id)arg2 toLookup:(id)arg3;
- (void)buildLookupForHost:(id)arg1;
- (id)delegate;
- (oneway void)extensionWillFinish;
- (oneway void)finishExtension;
- (void)forwardInvocation:(id)arg1;
- (id)hostViewController;
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setTargetForSelector:(id)arg1;
- (id)targetForSelector;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
