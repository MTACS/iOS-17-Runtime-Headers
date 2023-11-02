
@interface WFAppInstalledResource : WFResource <ICAppInstallStatusObserver, WFAppSearchViewControllerDelegate> {
    NSString * _appName;
    WFiTunesSessionManager * _currentAppNameLookupSessionManager;
    <WFAppInstalledResourceDelegate> * _delegate;
    INAppDescriptor * _descriptor;
    bool  _intentIsSynced;
    NSMutableArray * _pendingAppLookupCompletions;
    bool  _requiresAppToBeInstalled;
    bool  _skipLookup;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, copy) NSString *appName;
@property (nonatomic, retain) WFiTunesSessionManager *currentAppNameLookupSessionManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFAppInstalledResourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) INAppDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool intentIsSynced;
@property (nonatomic, retain) NSMutableArray *pendingAppLookupCompletions;
@property (nonatomic, copy) id /* block */ recoveryCompletionHandler;
@property (nonatomic) bool requiresAppToBeInstalled;
@property (nonatomic) bool skipLookup;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)mustBeAvailableForDisplay;
+ (bool)refreshesAvailabilityOnApplicationResume;

- (void).cxx_destruct;
- (id)_initWithDescriptor:(id)arg1 requiresAppToBeInstalled:(bool)arg2 isSyncedFromOtherDevice:(bool)arg3;
- (id)appName;
- (id)appNeedsUpdateErrorWithAppName:(id)arg1;
- (id)appNotInstalledError;
- (id)appNotResolvedError;
- (void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)bundleIdentifier;
- (id)currentAppNameLookupSessionManager;
- (void)dealloc;
- (id)delegate;
- (id)descriptor;
- (bool)descriptorIsIntentDescriptor;
- (id)eventDictionary;
- (void)fetchiTunesStoreObjectForAppWithCompletionBlock:(id /* block */)arg1;
- (id)initWithAppDescriptor:(id)arg1 requiresAppToBeInstalled:(bool)arg2;
- (id)initWithIntentDescriptor:(id)arg1 isSyncedFromOtherDevice:(bool)arg2;
- (id)intentDescriptor;
- (bool)intentIsEligibleForRemoteExecution;
- (bool)intentIsLocallyAvailable;
- (bool)intentIsSynced;
- (void)notifyDelegateWithUpdatedDescriptor:(id)arg1;
- (id)pendingAppLookupCompletions;
- (void)refreshAvailability;
- (bool)requiresAppToBeInstalled;
- (void)setAppName:(id)arg1;
- (void)setCurrentAppNameLookupSessionManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setIntentIsSynced:(bool)arg1;
- (void)setPendingAppLookupCompletions:(id)arg1;
- (void)setRequiresAppToBeInstalled:(bool)arg1;
- (void)setSkipLookup:(bool)arg1;
- (bool)skipLookup;
- (id)stateQueue;
- (void)updateDescriptorsWithSelectedApp:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI

- (void)appSearchViewController:(id)arg1 didFinishWithApp:(id)arg2;
- (void)appSearchViewControllerDidCancel:(id)arg1;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(id /* block */)arg4;
- (id /* block */)recoveryCompletionHandler;
- (void)setRecoveryCompletionHandler:(id /* block */)arg1;

@end
