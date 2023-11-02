
@interface PKPassEntitlementsComposerEntry : NSObject <PKIdentifiable, PKPassEntitlementsComposerView> {
    PKDisplayablePassEntitlement * _displayableEntitlement;
    bool  _enabled;
    bool  _isUsingAdvancedScheduling;
    PKPassEntitlementsComposer * _parentEntitlementComposer;
    PKPassSharedEntitlement * _sharedEntitlement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKDisplayablePassEntitlement *displayableEntitlement;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) bool isUsingAdvancedScheduling;
@property (nonatomic) unsigned long long manageability;
@property (nonatomic, readonly) unsigned long long possibleManageability;
@property (nonatomic, readonly) unsigned long long possibleShareability;
@property (nonatomic, readonly) PKPassShareTimeConfiguration *possibleTimeConfiguration;
@property (nonatomic, readonly) unsigned long long possibleVisibility;
@property (nonatomic) unsigned long long shareability;
@property (nonatomic, retain) PKPassSharedEntitlement *sharedEntitlement;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPassShareTimeConfiguration *timeConfiguration;
@property (nonatomic) unsigned long long visibility;

- (void).cxx_destruct;
- (id)displayableEntitlement;
- (bool)enabled;
- (id)identifier;
- (id)init;
- (bool)isUsingAdvancedScheduling;
- (unsigned long long)manageability;
- (unsigned long long)possibleManageability;
- (unsigned long long)possibleShareability;
- (id)possibleTimeConfiguration;
- (unsigned long long)possibleVisibility;
- (void)setDisplayableEntitlement:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIsUsingAdvancedScheduling:(bool)arg1;
- (void)setManageability:(unsigned long long)arg1;
- (void)setShareability:(unsigned long long)arg1;
- (void)setSharedEntitlement:(id)arg1;
- (void)setTimeConfiguration:(id)arg1;
- (void)setVisibility:(unsigned long long)arg1;
- (unsigned long long)shareability;
- (id)sharedEntitlement;
- (id)timeConfiguration;
- (unsigned long long)visibility;

@end
