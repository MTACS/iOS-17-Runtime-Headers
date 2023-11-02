
@interface DBApplicationInfo : FBSApplicationInfo {
    NSString * _carDisplayName;
    bool  _carInternal;
    CRCarPlayAppDeclaration * _carPlayDeclaration;
    bool  _carPrototype;
    bool  _certificationApp;
    bool  _firstParty;
    bool  _hidden;
    bool  _installed;
    bool  _internal;
    bool  _linkedOnOrAfterYukon;
    bool  _placeholder;
    bool  _presentsFullScreen;
    bool  _presentsUnderStatusBar;
    bool  _requiresBackgroundURLDelivery;
    NSArray * _requiresFeatureFlags;
    bool  _supportsDashboardNavigation;
    bool  _supportsInstrumentClusterNavigation;
    bool  _valid;
}

@property (getter=isCarInternal, nonatomic, readonly) bool carInternal;
@property (nonatomic, readonly) CRCarPlayAppDeclaration *carPlayDeclaration;
@property (getter=isCarPrototype, nonatomic, readonly) bool carPrototype;
@property (getter=isCertificationApp, nonatomic, readonly) bool certificationApp;
@property (getter=isFirstParty, nonatomic, readonly) bool firstParty;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (getter=isInstalled, nonatomic, readonly) bool installed;
@property (getter=isInternal, nonatomic, readonly) bool internal;
@property (getter=isLinkedOnOrAfterYukon, nonatomic, readonly) bool linkedOnOrAfterYukon;
@property (getter=isPlaceholder, nonatomic, readonly) bool placeholder;
@property (nonatomic, readonly) bool presentsFullScreen;
@property (nonatomic, readonly) bool presentsUnderStatusBar;
@property (nonatomic, readonly) bool requiresBackgroundURLDelivery;
@property (nonatomic, readonly) NSArray *requiresFeatureFlags;
@property (nonatomic, readonly) bool supportsDashboardNavigation;
@property (nonatomic, readonly) bool supportsInstrumentClusterNavigation;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)_loadFromProxy:(id)arg1;
- (id)carPlayDeclaration;
- (id)displayName;
- (unsigned long long)hash;
- (bool)isCarInternal;
- (bool)isCarPrototype;
- (bool)isCertificationApp;
- (bool)isEqual:(id)arg1;
- (bool)isFirstParty;
- (bool)isHidden;
- (bool)isInstalled;
- (bool)isInternal;
- (bool)isLinkedOnOrAfterYukon;
- (bool)isPlaceholder;
- (bool)isValid;
- (bool)presentsFullScreen;
- (bool)presentsUnderStatusBar;
- (bool)requiresBackgroundURLDelivery;
- (id)requiresFeatureFlags;
- (bool)supportsDashboardNavigation;
- (bool)supportsInstrumentClusterNavigation;

@end
