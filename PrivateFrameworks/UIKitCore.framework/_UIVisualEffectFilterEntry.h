
@interface _UIVisualEffectFilterEntry : NSObject <_UIVisualEffectDiffable> {
    NSDictionary * _configurationValues;
    CAFilter * _filter;
    NSString * _filterName;
    NSString * _filterType;
    double  _identityScaleHint;
    NSDictionary * _identityValues;
    double  _requestedScaleHint;
    NSDictionary * _requestedValues;
    bool  _useRelaxedDiffingRule;
}

@property (nonatomic, copy) NSDictionary *configurationValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CAFilter *filter;
@property (nonatomic, readonly, copy) NSString *filterName;
@property (nonatomic, copy) NSString *filterType;
@property (readonly) unsigned long long hash;
@property (nonatomic) double identityScaleHint;
@property (nonatomic, copy) NSDictionary *identityValues;
@property (nonatomic) double requestedScaleHint;
@property (nonatomic, copy) NSDictionary *requestedValues;
@property (readonly) Class superclass;
@property (nonatomic) bool useRelaxedDiffingRule;

- (void).cxx_destruct;
- (bool)canTransitionToEffect:(id)arg1;
- (id)configurationValues;
- (void)convertToIdentity;
- (id)copyForTransitionOut;
- (id)copyForTransitionToEffect:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)filter;
- (id)filterName;
- (id)filterType;
- (void)forceUniqueName;
- (double)identityScaleHint;
- (id)identityValues;
- (id)initWithFilterType:(id)arg1 configurationValues:(id)arg2 requestedValues:(id)arg3 identityValues:(id)arg4;
- (bool)isSameTypeOfEffect:(id)arg1;
- (double)requestedScaleHint;
- (id)requestedValues;
- (double)scaleHintAsRequested:(bool)arg1;
- (void)setConfigurationValues:(id)arg1;
- (void)setFilterType:(id)arg1;
- (void)setIdentityScaleHint:(double)arg1;
- (void)setIdentityValues:(id)arg1;
- (void)setRequestedScaleHint:(double)arg1;
- (void)setRequestedValues:(id)arg1;
- (void)setUseRelaxedDiffingRule:(bool)arg1;
- (bool)useRelaxedDiffingRule;
- (id)valueAsRequested:(bool)arg1;

@end
