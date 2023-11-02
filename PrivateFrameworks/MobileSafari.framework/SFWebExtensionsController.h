
@interface SFWebExtensionsController : WBSWebExtensionsController {
    NSString * _applicationNameForUserAgent;
    NSObject<OS_dispatch_queue> * _blocklistQueue;
    WKContentRuleListStore * _contentBlockerStore;
    SFDialogController * _dialogController;
    <_SFNavigationIntentHandling> * _navigationIntentHandler;
    WKProcessPool * _processPool;
    <SFWebExtensionControllerProfileDelegate> * _profileDelegate;
    NSMutableOrderedSet * _queueOfExtensionsToShowInPermissionBanner;
    <WBSUserDefaultObservation> * _stubUnsupportedAPIsUserDefaultObserver;
    NSMutableDictionary * _tabIDToTabPositionForTabsInTransit;
    UIViewController * _viewControllerToPresentDialogsFrom;
}

@property (nonatomic, readonly) NSArray *allContentBlockerManagers;
@property (nonatomic, readonly) NSArray *allWebExtensionControllers;
@property (nonatomic, retain) NSString *applicationNameForUserAgent;
@property (nonatomic, readonly) WKContentRuleListStore *contentBlockerStore;
@property (nonatomic, readonly) SFWebExtension *currentExtensionForPermissionBanner;
@property (nonatomic) <SFWebExtensionsControllerDelegate> *delegate;
@property (nonatomic) <_SFNavigationIntentHandling> *navigationIntentHandler;
@property (nonatomic, readonly) bool parentalControlsAreEnabledForExtensions;
@property (nonatomic, retain) WKProcessPool *processPool;
@property (nonatomic) <SFWebExtensionControllerProfileDelegate> *profileDelegate;
@property (nonatomic, readonly) unsigned long long recentlyInstalledExtensionCount;
@property (nonatomic, retain) NSMutableDictionary *tabIDToTabPositionForTabsInTransit;
@property (nonatomic) UIViewController *viewControllerToPresentDialogsFrom;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (void)_createWebExtensionContentBlockerDirectoryWithURL:(id)arg1;
+ (void)_didDiscoverExtensions:(bool)arg1;
+ (Class)_extensionDataClass;
+ (id)_extensionDefaults;
+ (id)_skipLoadingEnabledExtensionsAtLaunchPreferenceKey;
+ (id)extensionIdentifierToBaseURIMapBundleParameterKey;

- (void).cxx_destruct;
- (id)_allWindowsForWebExtension:(id)arg1;
- (bool)_canSendMessageFromWebView:(id)arg1;
- (void)_captureVisibleTab:(id)arg1 format:(id)arg2 quality:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)_clearNewTabPreferenceIfNecessaryForRemovedExtensionWithComposedIdentifier:(id)arg1;
- (id)_commandShortcutConflictAlertForExtension:(id)arg1 conflict:(id)arg2 okAction:(id /* block */)arg3;
- (void)_createNewTabInWindow:(id)arg1 tabIndex:(id)arg2 url:(id)arg3 makeActive:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)_developerIdentifierForExtension:(id)arg1 untrustedCodeSigningDictionary:(id)arg2;
- (id)_deviceName;
- (id)_deviceUUIDString;
- (id)_domainForDefaultSearchProvider;
- (id)_duplicateTab:(id)arg1;
- (void)_extensionWithComposedIdentifier:(id)arg1 wasEnabledOrDisabledByExtensionSettings:(bool)arg2;
- (id)_findTabInAnyWindowWithID:(double)arg1;
- (id)_findWindowWithID:(double)arg1;
- (bool)_isExtensionBlockedByBlocklist:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_isExtensionBlockedByBlocklist:(id)arg1 developerIdentifier:(id)arg2;
- (void)_notifyObserversContentBlockerListDidChange;
- (void)_pinTab:(id)arg1;
- (void)_relateParentTab:(id)arg1 toTab:(id)arg2;
- (void)_reportCommandShortcutConflictsForExtension:(id)arg1 conflicts:(id)arg2 presentingViewController:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_safariShortVersion;
- (void)_showAccessRequestAlertForExtension:(id)arg1 domains:(id)arg2 callingAPIName:(id)arg3 responseBlock:(id /* block */)arg4;
- (void)_showPromptForExtensionDisabledBecauseItDoesNotSupportThisVersionOfSafariWithMessage:(id)arg1 extensionIdentifier:(id)arg2;
- (id)_tabForTabID:(id)arg1 webView:(id)arg2 extension:(id)arg3;
- (id)_tabForWebView:(id)arg1;
- (void)_unpinTab:(id)arg1;
- (void)_updateExtensionsStateAfterExtensionSettingsWereUpdatedExternally:(id)arg1 shouldUpdateExtensionPermissionsAndEnabledState:(bool)arg2;
- (void)_updateWebExtensionDataMapForExtension:(id)arg1;
- (void)_updateWindow:(id)arg1 updateInfo:(id)arg2;
- (id)_windowForWindowID:(id)arg1 webView:(id)arg2 extension:(id)arg3;
- (id)allContentBlockerManagers;
- (id)allProfileExtensionsControllers;
- (id)allWebExtensionControllers;
- (id)applicationNameForUserAgent;
- (void)applyContentBlockerInPrivateBrowsing:(id)arg1;
- (void)compileDeclarativeNetRequestExtension:(id)arg1 rules:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)contentBlockerManagerForProfileServerID:(id)arg1;
- (id)contentBlockerStore;
- (id)currentExtensionForPermissionBanner;
- (void)didDeactivateWindow;
- (void)didViewToolbarItemBadgesInTabWithIdentifier:(id)arg1;
- (void)extensionSettingsWereUpdatedExternallyFromSettingsApp:(bool)arg1;
- (bool)extensionsEnabled;
- (void)fireAppropriateTabMovementEventForTabState:(id)arg1;
- (void)fireAttachmentEventsForTabsWithPreviousTabPositions:(id)arg1;
- (void)fireOnMovedEventForTabsWithPreviousTabPositions:(id)arg1 currentTabsPositions:(id)arg2;
- (bool)hasNamedProfiles;
- (bool)hasUpdatedToolbarItemBadgeTextInTabWithIdentifier:(id)arg1;
- (void)hidePermissionBannerForExtension:(id)arg1;
- (id)lastFocusedWindow;
- (id)navigationIntentHandler;
- (void)openPopupForWindow:(id)arg1 extensionIdentifier:(id)arg2 webView:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)parentalControlsAreEnabledForExtensions;
- (id)processPool;
- (id)profile;
- (id)profileDelegate;
- (unsigned long long)recentlyInstalledExtensionCount;
- (void)removeContentBlockerForExtension:(id)arg1;
- (void)reportCommandShortcutConflictsIfNecessaryForExtension:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setApplicationNameForUserAgent:(id)arg1;
- (void)setNavigationIntentHandler:(id)arg1;
- (void)setProcessPool:(id)arg1;
- (void)setProfileDelegate:(id)arg1;
- (void)setTabIDToTabPositionForTabsInTransit:(id)arg1;
- (void)setViewControllerToPresentDialogsFrom:(id)arg1;
- (void)showPermissionBannerForExtension:(id)arg1;
- (id)tabGroupManager;
- (id)tabIDToTabPositionForTabsInTransit;
- (unsigned long long)toolbarItemIdealPointSize;
- (id)viewControllerToPresentDialogsFrom;
- (id)webExtensionsControllerForProfileServerID:(id)arg1;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (bool)_createTabWithURL:(id)arg1 inWindow:(id)arg2;
- (id)_dialogController;
- (void)_showPromptForExtensionDisabledBecauseItHasRequestedAdditionalPermissions:(id)arg1 extensionIdentifier:(id)arg2;
- (void)cancelPresentedDialogIfNecessaryAndUnqueuePendingWebExtensionDialogs;
- (void)createNewTabFromBackgroundPageWithURL:(id)arg1;
- (void)dialogController:(id)arg1 dismissViewController:(id)arg2 withAdditionalAnimations:(id /* block */)arg3;
- (void)dialogController:(id)arg1 presentViewController:(id)arg2 withAdditionalAnimations:(id /* block */)arg3;
- (long long)dialogController:(id)arg1 presentationPolicyForDialog:(id)arg2;
- (void)dismissDialogView:(id)arg1 withAdditionalAnimations:(id /* block */)arg2 forDialogController:(id)arg3;
- (void)presentDialogView:(id)arg1 withAdditionalAnimations:(id /* block */)arg2 forDialogController:(id)arg3;
- (void)showAccessRequestDialogForExtension:(id)arg1 URLs:(id)arg2 callingAPIName:(id)arg3 showMoreOptionsForAlwaysAllow:(bool)arg4 includeDenyButton:(bool)arg5 responseBlock:(id /* block */)arg6;
- (void)showAccessRequestDialogForExtension:(id)arg1 domains:(id)arg2 callingAPIName:(id)arg3 showMoreOptionsForAlwaysAllow:(bool)arg4 includeDenyButton:(bool)arg5 responseBlock:(id /* block */)arg6;
- (void)showAlwaysAllowConfirmationDialogForExtension:(id)arg1 domains:(id)arg2 includeDenyButton:(bool)arg3 responseBlock:(id /* block */)arg4;
- (bool)showOptionsForExtension:(id)arg1 requestingWebView:(id)arg2;
- (void)showPromptForBlocklistedExtension:(id)arg1 extensionName:(id)arg2;
- (void)showPromptForExpiredExtension:(id)arg1 extensionName:(id)arg2;
- (void)showPromptForExtensionDisabledBecauseItDoesNotSupportThisVersionOfSafariWithMessage:(id)arg1 extensionIdentifier:(id)arg2;
- (int)webProcessIDForDialogController:(id)arg1;

@end
