
@interface _HKDatabaseChangesQueryServerConfiguration : HKQueryServerConfiguration {
    HKQueryAnchor * _anchor;
    long long  _anchorStrategyChangeCountLimit;
    long long  _changeDetailsQueryStrategy;
    bool  _includeChangeDetails;
    NSSet * _sampleTypes;
}

@property (nonatomic, copy) HKQueryAnchor *anchor;
@property (nonatomic) long long anchorStrategyChangeCountLimit;
@property (nonatomic) long long changeDetailsQueryStrategy;
@property (nonatomic) bool includeChangeDetails;
@property (nonatomic, copy) NSSet *sampleTypes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchor;
- (long long)anchorStrategyChangeCountLimit;
- (long long)changeDetailsQueryStrategy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeChangeDetails;
- (id)initWithCoder:(id)arg1;
- (id)sampleTypes;
- (void)setAnchor:(id)arg1;
- (void)setAnchorStrategyChangeCountLimit:(long long)arg1;
- (void)setChangeDetailsQueryStrategy:(long long)arg1;
- (void)setIncludeChangeDetails:(bool)arg1;
- (void)setSampleTypes:(id)arg1;

@end
