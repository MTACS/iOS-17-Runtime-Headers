
@interface PKPassEntitlementsComposer : NSObject <PKPassEntitlementsComposerView> {
    NSArray * _availableEntitlements;
    bool  _editable;
    NSArray * _entitlementEntrys;
    NSArray * _originalSharedEntitlements;
}

@property (nonatomic, readonly) bool canAllowResharing;
@property (nonatomic, readonly) NSArray *composeSharedEntitlements;
@property (nonatomic, readonly) bool editable;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) NSArray *entitlementEntries;
@property (nonatomic) bool isUsingAdvancedScheduling;
@property (nonatomic) unsigned long long manageability;
@property (nonatomic, readonly) unsigned long long possibleManageability;
@property (nonatomic, readonly) unsigned long long possibleShareability;
@property (nonatomic, readonly) PKPassShareTimeConfiguration *possibleTimeConfiguration;
@property (nonatomic, readonly) unsigned long long possibleVisibility;
@property (nonatomic) unsigned long long shareability;
@property (nonatomic, retain) PKPassShareTimeConfiguration *timeConfiguration;
@property (nonatomic) unsigned long long visibility;

- (void).cxx_destruct;
- (void)_updateEntitlementEntry:(id)arg1 capabilityMutationBlock:(id /* block */)arg2;
- (void)_updateEntitlementEntry:(id)arg1 enabled:(bool)arg2;
- (void)_updateEntitlementEntry:(id)arg1 isUsingAdvancedScheduling:(bool)arg2;
- (void)_updateEntitlementEntry:(id)arg1 timeConfiguration:(id)arg2;
- (bool)canAllowResharing;
- (id)composeSharedEntitlements;
- (bool)editable;
- (bool)enabled;
- (id)entitlementEntries;
- (id)globalView;
- (id)init;
- (id)initWithMyEntitlements:(id)arg1;
- (id)initWithSharedEntitlements:(id)arg1 availableEntitlements:(id)arg2 editable:(bool)arg3;
- (bool)isUsingAdvancedScheduling;
- (unsigned long long)manageability;
- (unsigned long long)possibleManageability;
- (unsigned long long)possibleShareability;
- (id)possibleTimeConfiguration;
- (unsigned long long)possibleVisibility;
- (void)setEnabled:(bool)arg1;
- (void)setIsUsingAdvancedScheduling:(bool)arg1;
- (void)setManageability:(unsigned long long)arg1;
- (void)setShareability:(unsigned long long)arg1;
- (void)setTimeConfiguration:(id)arg1;
- (void)setVisibility:(unsigned long long)arg1;
- (unsigned long long)shareability;
- (id)timeConfiguration;
- (id)viewFor:(id)arg1;
- (unsigned long long)visibility;

@end
