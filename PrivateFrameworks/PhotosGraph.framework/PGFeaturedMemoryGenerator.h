
@interface PGFeaturedMemoryGenerator : PGMemoryGenerator {
    bool  _oldMemory;
    NSDate * _upperBoundLocalDate;
    bool  _usesLowRequirements;
}

@property (nonatomic) bool oldMemory;
@property (nonatomic, retain) NSDate *upperBoundLocalDate;
@property (nonatomic) bool usesLowRequirements;

- (void).cxx_destruct;
- (bool)oldMemory;
- (void)setOldMemory:(bool)arg1;
- (void)setUpperBoundLocalDate:(id)arg1;
- (void)setUsesLowRequirements:(bool)arg1;
- (id)upperBoundLocalDate;
- (bool)usesLowRequirements;

@end
