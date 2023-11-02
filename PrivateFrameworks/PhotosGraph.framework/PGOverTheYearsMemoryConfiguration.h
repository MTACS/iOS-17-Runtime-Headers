
@interface PGOverTheYearsMemoryConfiguration : PGOverTimeMemoryConfiguration {
    bool  _allowTwoConsecutiveYears;
    unsigned long long  _minimumNumberOfMomentsForTwoConsecutiveYears;
    unsigned long long  _minimumNumberOfYears;
}

@property (nonatomic) bool allowTwoConsecutiveYears;
@property (nonatomic) unsigned long long minimumNumberOfMomentsForTwoConsecutiveYears;
@property (nonatomic) unsigned long long minimumNumberOfYears;

+ (id)defaultFallbackOverTheYearsMemoryConfiguration;
+ (id)defaultOverTheYearsMemoryConfiguration;
+ (id)strictDefaultOverTheYearsMemoryConfiguration;

- (bool)allowTwoConsecutiveYears;
- (unsigned long long)minimumNumberOfMomentsForTwoConsecutiveYears;
- (unsigned long long)minimumNumberOfYears;
- (void)setAllowTwoConsecutiveYears:(bool)arg1;
- (void)setMinimumNumberOfMomentsForTwoConsecutiveYears:(unsigned long long)arg1;
- (void)setMinimumNumberOfYears:(unsigned long long)arg1;

@end
