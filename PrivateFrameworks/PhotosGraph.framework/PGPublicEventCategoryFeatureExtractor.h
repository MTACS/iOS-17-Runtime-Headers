
@interface PGPublicEventCategoryFeatureExtractor : PGGraphFeatureExtractor

+ (id)_labelProcessingForVersion:(long long)arg1 label:(id)arg2;
+ (id)_processedLabelsForVersion:(long long)arg1;
+ (id)_rawLabelsForVersion:(long long)arg1;
+ (id)prefix;

- (id)initWithError:(id*)arg1;
- (id)initWithVersion:(long long)arg1 error:(id*)arg2;

@end
