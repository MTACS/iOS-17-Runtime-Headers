
@interface _HKAnchoredObjectQueryServerConfiguration : HKQueryServerConfiguration {
    HKQueryAnchor * _anchor;
    double  _collectionInterval;
    bool  _includeAutomaticTimeZones;
    bool  _includeContributorInformation;
    bool  _includeDeletedObjects;
    unsigned long long  _limit;
    NSArray * _queryDescriptors;
}

@property (nonatomic, copy) HKQueryAnchor *anchor;
@property (nonatomic) double collectionInterval;
@property (nonatomic) bool includeAutomaticTimeZones;
@property (nonatomic) bool includeContributorInformation;
@property (nonatomic) bool includeDeletedObjects;
@property (nonatomic) unsigned long long limit;
@property (nonatomic, copy) NSArray *queryDescriptors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchor;
- (double)collectionInterval;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeAutomaticTimeZones;
- (bool)includeContributorInformation;
- (bool)includeDeletedObjects;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)limit;
- (id)queryDescriptors;
- (void)setAnchor:(id)arg1;
- (void)setCollectionInterval:(double)arg1;
- (void)setIncludeAutomaticTimeZones:(bool)arg1;
- (void)setIncludeContributorInformation:(bool)arg1;
- (void)setIncludeDeletedObjects:(bool)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (void)setQueryDescriptors:(id)arg1;

@end
