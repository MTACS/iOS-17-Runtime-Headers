
@interface PGPeopleFeatureExtractor : PGGraphFeatureExtractor

+ (id)_fixLabels:(id)arg1 toLength:(unsigned long long)arg2;
+ (id)_labelFromPersonNode:(id)arg1;

- (id)initWithGraph:(id)arg1 error:(id*)arg2;
- (id)initWithTopNumberOfPeople:(unsigned long long)arg1 graph:(id)arg2 error:(id*)arg3;

@end
