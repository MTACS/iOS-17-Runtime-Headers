
@interface PGOverTheYearsMemoryConfigurationBuilder : PGOverTimeMemoryConfigurationBuilder {
    bool  _allowTwoConsecutiveYears;
    unsigned long long  _minimumNumberOfMomentsForTwoConsecutiveYears;
    unsigned long long  _minimumNumberOfYears;
}

@property (nonatomic, readonly) bool allowTwoConsecutiveYears;
@property (nonatomic, readonly) unsigned long long minimumNumberOfMomentsForTwoConsecutiveYears;
@property (nonatomic, readonly) unsigned long long minimumNumberOfYears;

- (bool)allowTwoConsecutiveYears;
- (unsigned long long)minimumNumberOfMomentsForTwoConsecutiveYears;
- (unsigned long long)minimumNumberOfYears;
- (id)overTheYearsMemoryConfiguration;

@end
