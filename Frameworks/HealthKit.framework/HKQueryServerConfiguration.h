
@interface HKQueryServerConfiguration : HKTaskConfiguration {
    double  _activationTime;
    NSString * _debugIdentifier;
    _HKFilter * _filter;
    HKObjectType * _objectType;
    long long  _qualityOfService;
    bool  _shouldDeactivateAfterInitialResults;
    bool  _shouldSuppressDataCollection;
}

@property (nonatomic) double activationTime;
@property (nonatomic, copy) NSString *debugIdentifier;
@property (nonatomic, retain) _HKFilter *filter;
@property (nonatomic, copy) HKObjectType *objectType;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) bool shouldDeactivateAfterInitialResults;
@property (nonatomic) bool shouldSuppressDataCollection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)activationTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)filter;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)objectType;
- (long long)qualityOfService;
- (void)setActivationTime:(double)arg1;
- (void)setDebugIdentifier:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setObjectType:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setShouldDeactivateAfterInitialResults:(bool)arg1;
- (void)setShouldSuppressDataCollection:(bool)arg1;
- (bool)shouldDeactivateAfterInitialResults;
- (bool)shouldSuppressDataCollection;

@end
