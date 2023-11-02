
@interface HKActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration {
    unsigned long long  _limit;
    bool  _orderByDateAscending;
    bool  _shouldIncludeActivitySummaryPrivateProperties;
    bool  _shouldIncludeActivitySummaryStatistics;
}

@property (nonatomic) unsigned long long limit;
@property (nonatomic) bool orderByDateAscending;
@property (nonatomic) bool shouldIncludeActivitySummaryPrivateProperties;
@property (nonatomic) bool shouldIncludeActivitySummaryStatistics;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)limit;
- (bool)orderByDateAscending;
- (void)setLimit:(unsigned long long)arg1;
- (void)setOrderByDateAscending:(bool)arg1;
- (void)setShouldIncludeActivitySummaryPrivateProperties:(bool)arg1;
- (void)setShouldIncludeActivitySummaryStatistics:(bool)arg1;
- (bool)shouldIncludeActivitySummaryPrivateProperties;
- (bool)shouldIncludeActivitySummaryStatistics;

@end
