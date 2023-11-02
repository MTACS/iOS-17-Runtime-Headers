
@interface _HKSampleQueryConfiguration : HKQueryServerConfiguration {
    bool  _includeAutomaticTimeZones;
    bool  _includeContributorInformation;
    unsigned long long  _limit;
    NSArray * _queryDescriptors;
    NSArray * _sortDescriptors;
}

@property (nonatomic) bool includeAutomaticTimeZones;
@property (nonatomic) bool includeContributorInformation;
@property (nonatomic) unsigned long long limit;
@property (nonatomic, copy) NSArray *queryDescriptors;
@property (nonatomic, copy) NSArray *sortDescriptors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeAutomaticTimeZones;
- (bool)includeContributorInformation;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)limit;
- (id)queryDescriptors;
- (void)setIncludeAutomaticTimeZones:(bool)arg1;
- (void)setIncludeContributorInformation:(bool)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (void)setQueryDescriptors:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end
