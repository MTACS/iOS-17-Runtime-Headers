
@interface CRRecognizerConfiguration : NSObject {
    double  _angleThresholdForRotatedCrops;
    <CRTextFeaturesFiltering> * _cachedTextFeatureFilter;
    NSObject<CRTextFeatureOrdering> * _cachedTextFeatureOrder;
    int  _colorSpace;
    unsigned long long  _computeDeviceType;
    bool  _falsePositiveFilteringDisabled;
    NSObject<MTLDevice> * _metalDevice;
    long long  _numTopStringCandidates;
    bool  _optimizeGroupsForStability;
    bool  _rectifyPolygons;
    unsigned long long  _revision;
    bool  _scriptDetectionDisabled;
    bool  _skipRecognition;
}

@property (readonly) double angleThresholdForRotatedCrops;
@property (retain) <CRTextFeaturesFiltering> *cachedTextFeatureFilter;
@property (retain) NSObject<CRTextFeatureOrdering> *cachedTextFeatureOrder;
@property (readonly) int colorSpace;
@property (readonly) unsigned long long computeDeviceType;
@property (readonly) bool falsePositiveFilteringDisabled;
@property (readonly) NSObject<MTLDevice> *metalDevice;
@property (readonly) long long numTopStringCandidates;
@property bool optimizeGroupsForStability;
@property (readonly) bool rectifyPolygons;
@property (readonly) unsigned long long revision;
@property (readonly) bool scriptDetectionDisabled;
@property (readonly) bool skipRecognition;
@property (readonly) <CRTextFeaturesFiltering> *textFeatureFilter;
@property (readonly) NSObject<CRTextFeatureOrdering> *textFeatureOrder;

+ (id)languageSetFromInputLanguages:(id)arg1 supportedLanguages:(id)arg2;
+ (id)supportedLanguagesForVersion:(long long)arg1;

- (void).cxx_destruct;
- (double)angleThresholdForRotatedCrops;
- (id)cachedTextFeatureFilter;
- (id)cachedTextFeatureOrder;
- (int)colorSpace;
- (unsigned long long)computeDeviceType;
- (bool)falsePositiveFilteringDisabled;
- (id)initV1DefaultConfigWithOptions:(id)arg1;
- (id)initV2DefaultConfigWithOptions:(id)arg1;
- (id)initV3DefaultConfigWithOptions:(id)arg1;
- (id)initWithImageReaderOptions:(id)arg1 error:(id*)arg2;
- (id)metalDevice;
- (long long)numTopStringCandidates;
- (bool)optimizeGroupsForStability;
- (bool)rectifyPolygons;
- (unsigned long long)revision;
- (bool)scriptDetectionDisabled;
- (void)setCachedTextFeatureFilter:(id)arg1;
- (void)setCachedTextFeatureOrder:(id)arg1;
- (void)setOptimizeGroupsForStability:(bool)arg1;
- (bool)skipRecognition;
- (id)textFeatureFilter;
- (id)textFeatureOrder;

@end
