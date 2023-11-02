
@interface PGFeatureExtractorFrequentPeople : PGAssetFeatureExtractor {
    PHFetchResult * _frequencySortedPersons;
    unsigned long long  _numberOfFrequentPeopleToExtract;
}

@property (nonatomic, retain) PHFetchResult *frequencySortedPersons;
@property (nonatomic, readonly) unsigned long long numberOfFrequentPeopleToExtract;

- (void).cxx_destruct;
- (long long)featureLength;
- (id)featureNames;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)frequencySortedPersons;
- (id)initWithNumberOfFrequentPeopleToExtract:(unsigned long long)arg1;
- (id)name;
- (unsigned long long)numberOfFrequentPeopleToExtract;
- (void)setFrequencySortedPersons:(id)arg1;

@end
