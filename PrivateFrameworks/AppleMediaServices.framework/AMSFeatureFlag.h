
@interface AMSFeatureFlag : NSObject {
    NSString * _associatedGroup;
    bool  _defaultEnabled;
    long long  _developmentPhase;
    NSString * _displayName;
    NSString * _domain;
    bool  _enabled;
    NSString * _feature;
    NSString * _featureDescription;
    NSDictionary * _flagData;
    NSString * _flagGroup;
    bool  _hidden;
    NSArray * _itfes;
    bool  _userEnabled;
}

@property (nonatomic, copy) NSString *ITFE;
@property (nonatomic, copy) NSString *associatedGroup;
@property (getter=isCodeComplete, nonatomic) bool codeComplete;
@property (getter=isDefaultEnabled, nonatomic) bool defaultEnabled;
@property (nonatomic) long long developmentPhase;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *domain;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) NSString *feature;
@property (nonatomic, copy) NSString *featureDescription;
@property (nonatomic, retain) NSDictionary *flagData;
@property (nonatomic, copy) NSString *flagGroup;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) NSArray *itfes;
@property (getter=isRemote, nonatomic, readonly) bool remote;
@property (getter=isTestable, nonatomic) bool testable;
@property (getter=isUserEnabled, nonatomic) bool userEnabled;

+ (id)allFlagGroups;
+ (bool)disableFlagForFeature:(id)arg1 domain:(id)arg2 error:(id*)arg3;
+ (bool)disableFlagGroup:(id)arg1 error:(id*)arg2;
+ (bool)enableFlagForFeature:(id)arg1 domain:(id)arg2 error:(id*)arg3;
+ (bool)enableFlagGroup:(id)arg1 error:(id*)arg2;
+ (id)flagForFeature:(id)arg1 domain:(id)arg2;
+ (id)flagForFeature:(id)arg1 domain:(id)arg2 searchDirectory:(id)arg3;
+ (id)flagGroupWithName:(id)arg1;

- (void).cxx_destruct;
- (id)ITFE;
- (void)_activateFlag;
- (long long)_developmentPhaseFromGroupType:(long long)arg1;
- (void)_disableITFEs;
- (void)_enableITFEs;
- (void)_updateDevelopmentPhase;
- (void)_updateInternalEnabledState;
- (void)_updateUserEnabled:(bool)arg1;
- (void)activateITFEs;
- (id)associatedGroup;
- (long long)developmentPhase;
- (id)displayName;
- (id)domain;
- (id)feature;
- (id)featureDescription;
- (id)flagData;
- (id)flagGroup;
- (long long)groupType;
- (bool)hasITFEWithName:(id)arg1;
- (bool)hasITFEs;
- (id)initWithFlagData:(id)arg1 mutableFeatures:(id)arg2 profileFeatures:(id)arg3 feature:(id)arg4 domain:(id)arg5;
- (bool)isCodeComplete;
- (bool)isDefaultEnabled;
- (bool)isEnabled;
- (bool)isHidden;
- (bool)isRemote;
- (bool)isTestable;
- (bool)isUserEnabled;
- (id)itfes;
- (id)itfesFromString:(id)arg1 mutableFeatures:(id)arg2 profileFeatures:(id)arg3;
- (void)setAssociatedGroup:(id)arg1;
- (void)setCodeComplete:(bool)arg1;
- (void)setDefaultEnabled:(bool)arg1;
- (void)setDevelopmentPhase:(long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFeature:(id)arg1;
- (void)setFeatureDescription:(id)arg1;
- (void)setFlagData:(id)arg1;
- (void)setFlagGroup:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setITFE:(id)arg1;
- (void)setItfes:(id)arg1;
- (void)setTestable:(bool)arg1;
- (void)setUserEnabled:(bool)arg1;

@end