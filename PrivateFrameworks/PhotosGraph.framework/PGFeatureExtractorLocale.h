
@interface PGFeatureExtractorLocale : PGFeatureExtractor {
    NSLocale * _currentLocale;
}

@property (nonatomic, retain) NSLocale *currentLocale;

- (void).cxx_destruct;
- (id)currentLocale;
- (long long)featureLength;
- (id)featureNames;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)name;
- (void)setCurrentLocale:(id)arg1;

@end
