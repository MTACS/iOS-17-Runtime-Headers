
@interface STStatusItemsManager : NSObject <BSDebugDescriptionProviding, STBundleManagerObserver> {
    bool  _allowAllStatusItems;
    STBundleManager * _bundleManager;
    <BSDefaultObserver> * _internalDefaultsObserver;
    STSystemStatusDefaults * _systemStatusDefaults;
    NSDictionary * _visualDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 forDebug:(bool)arg2;
- (void)_registerForInternalDefaultsChanges;
- (void)_updateSupportedStatusItemsAndVisualDescriptorsFromBundleRecords;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithDefaults:(id)arg1;
- (void)recordBundlesChangedForBundleManager:(id)arg1;
- (id)resolvedStatusItemFromStatusItems:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)validStatusItemsForStatusItems:(id)arg1;
- (id)visualDescriptorForStatusItemWithIdentifier:(id)arg1;

@end
