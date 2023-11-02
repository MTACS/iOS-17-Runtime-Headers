
@interface UIApplicationExtensionActivity : UIActivity <UIActivityExtensionItemDataSource, UIActivityExtensionItemDataTarget> {
    NSExtensionItem * __injectedExtensionItem;
    _UIActivityBundleHelper * _activityBundleHelper;
    NSExtension * _applicationExtension;
    id  _extensionContextIdentifier;
    UISUIActivityExtensionItemDataRequest * _extensionItemDataRequest;
    id /* block */  _extensionRequestCleanupCompletion;
    UIViewController * _extensionViewController;
    NSDate * _installationDate;
    NSURL * _originalFileURL;
    id /* block */  _presenterCompletion;
    UIViewController * _presenterViewController;
}

@property (nonatomic, retain) NSExtensionItem *_injectedExtensionItem;
@property (nonatomic, retain) _UIActivityBundleHelper *activityBundleHelper;
@property (nonatomic, retain) NSExtension *applicationExtension;
@property (nonatomic, readonly) NSString *containingAppBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id extensionContextIdentifier;
@property (nonatomic, retain) UISUIActivityExtensionItemDataRequest *extensionItemDataRequest;
@property (nonatomic, copy) id /* block */ extensionRequestCleanupCompletion;
@property (nonatomic, retain) UIViewController *extensionViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *installationDate;
@property (nonatomic, retain) NSURL *originalFileURL;
@property (nonatomic, copy) id /* block */ presenterCompletion;
@property (nonatomic) UIViewController *presenterViewController;
@property (readonly) Class superclass;

+ (id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (id)_applicationExtensionActivitiesForItems:(id)arg1;
+ (long long)activityCategory;
+ (id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;

- (void).cxx_destruct;
- (id)_actionImage;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (bool)_canBeExcludeWhenMatchingWithContext:(id)arg1;
- (void)_cleanup;
- (long long)_defaultSortGroup;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_injectedExtensionItem;
- (void)_injectedJavaScriptResult:(id)arg1;
- (void)_instantiateExtensionViewControllerWithInputItems:(id)arg1;
- (bool)_isServiceExtension;
- (bool)_managesOwnPresentation;
- (void)_prepareWithActivityItems:(id)arg1 completion:(id /* block */)arg2;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_presentExtensionViewControllerIfPossible;
- (id)activityBundleHelper;
- (id)activityTitle;
- (id)activityType;
- (id)applicationExtension;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)containingAppBundleIdentifier;
- (void)dealloc;
- (id)debugDescription;
- (id)extensionContextIdentifier;
- (id)extensionItemDataRequest;
- (id /* block */)extensionRequestCleanupCompletion;
- (id)extensionViewController;
- (id)initWithApplicationExtension:(id)arg1;
- (id)installationDate;
- (id)originalFileURL;
- (void)prepareWithActivityExtensionItemData:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id /* block */)presenterCompletion;
- (id)presenterViewController;
- (void)setActivityBundleHelper:(id)arg1;
- (void)setApplicationExtension:(id)arg1;
- (void)setExtensionContextIdentifier:(id)arg1;
- (void)setExtensionItemDataRequest:(id)arg1;
- (void)setExtensionRequestCleanupCompletion:(id /* block */)arg1;
- (void)setExtensionViewController:(id)arg1;
- (void)setOriginalFileURL:(id)arg1;
- (void)setPresenterCompletion:(id /* block */)arg1;
- (void)setPresenterViewController:(id)arg1;
- (void)set_injectedExtensionItem:(id)arg1;

@end
