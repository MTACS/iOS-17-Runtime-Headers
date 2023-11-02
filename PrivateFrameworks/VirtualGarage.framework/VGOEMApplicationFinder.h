
@interface VGOEMApplicationFinder : NSObject <GEOConfigChangeListenerDelegate, LSApplicationWorkspaceObserverProtocol, VGOEMApplicationFinding> {
    NSDictionary * _allowlist;
    NSMutableDictionary * _applications;
    <VGOEMApplicationFinderUpdates> * _delegate;
    NSSet * _disabledAppIdentifiers;
    NSObject<OS_dispatch_queue> * _queue;
    NSSet * _requiredIntents;
}

@property (nonatomic, retain) NSDictionary *allowlist;
@property (nonatomic, retain) NSMutableDictionary *applications;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VGOEMApplicationFinderUpdates> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *disabledAppIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_addOEMApplicationForApplicationRecordIfNeeded:(id)arg1;
- (id)_allowlistPayload;
- (id)_applicationRecordForBundleIdentifier:(id)arg1;
- (bool)_removeOEMApplicationForBundleIdentifier:(id)arg1;
- (id)allowlist;
- (id)applications;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)disabledAppIdentifiers;
- (void)findOEMApplications;
- (id)init;
- (void)setAllowlist:(id)arg1;
- (void)setApplications:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabledAppIdentifiers:(id)arg1;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x1; void *x2; })arg1;

@end
