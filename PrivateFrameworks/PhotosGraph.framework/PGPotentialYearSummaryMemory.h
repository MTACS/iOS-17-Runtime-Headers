
@interface PGPotentialYearSummaryMemory : PGPotentialMemory {
    long long  _year;
}

@property (nonatomic) long long year;

- (id)initWithMomentNodes:(id)arg1;
- (unsigned long long)memoryCategory;
- (id)memoryFeatureNodesInGraph:(id)arg1;
- (void)setYear:(long long)arg1;
- (long long)year;

@end
