
@interface SKArcadeSubscribeViewController : UIViewController <SKStoreRemoteViewControllerDelegate> {
    NSString * _bundleID;
    <SKArcadeSubscribeViewControllerDelegate> * _delegate;
    NSExtension * _extension;
    <NSCopying> * _extensionRequestIdentifier;
    NSNumber * _itemID;
    SKStoreRemoteViewController * _remoteViewController;
}

@property (nonatomic, retain) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKArcadeSubscribeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) <NSCopying> *extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *itemID;
@property (nonatomic, retain) SKStoreRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadOcelotUpsellExtension;
- (void)_setupRemoteChildViewController;
- (id)bundleID;
- (void)dealloc;
- (id)delegate;
- (id)extension;
- (id)extensionRequestIdentifier;
- (void)finish;
- (void)finishExtension;
- (id)initWithItemID:(id)arg1 bundleID:(id)arg2;
- (id)itemID;
- (bool)prefersStatusBarHidden;
- (id)remoteViewController;
- (void)setBundleID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setItemID:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)storeRemoteViewController:(id)arg1 presentRequestedViewControllerWithIdentifier:(id)arg2;
- (void)storeRemoteViewControllerDidDismiss;
- (void)storeRemoteViewControllerNeedsTabSelection:(id)arg1;
- (void)storeRemoteViewControllerTerminatedWithError:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
