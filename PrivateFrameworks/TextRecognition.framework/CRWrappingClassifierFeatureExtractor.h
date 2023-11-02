
@interface CRWrappingClassifierFeatureExtractor : NSObject

+ (void)_extractBagOfTokensFeaturesTo:(void*)arg1 vocabulary:(id)arg2 tokens:(id)arg3 beginIndex:(long long)arg4 endIndex:(long long)arg5;
+ (void)_extractEvaluatedFeaturesTo:(void*)arg1 evaluation:(id)arg2;
+ (void)_extractGeometricFeaturesTo:(void*)arg1 evaluation:(id)arg2;
+ (void)_extractLanguageModelFeaturesTo:(void*)arg1 evaluation:(id)arg2;
+ (void)_extractLexicalFeaturesTo:(void*)arg1 string1:(id)arg2 string2:(id)arg3 configuration:(id)arg4 forCJK:(bool)arg5;
+ (id)_tokenizeString:(id)arg1 usingWordUnits:(bool)arg2 excludeWhitespace:(bool)arg3;
+ (id)extractFeatureMultiArrayForLocale:(id)arg1 textFeature:(id)arg2 lastFeature:(id)arg3 evaluation:(id)arg4 imageSize:(struct CGSize { double x1; double x2; })arg5;
+ (struct vector<double, std::allocator<double>> { double *x1; double *x2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_1_1; } x3; })extractFeatureVectorForLocale:(id)arg1 string1:(id)arg2 string2:(id)arg3 evaluation:(id)arg4 imageSize:(struct CGSize { double x1; double x2; })arg5;
+ (id)extractFeaturesForLocale:(id)arg1 textFeature:(id)arg2 lastFeature:(id)arg3 imageSize:(struct CGSize { double x1; double x2; })arg4 revision:(unsigned long long)arg5;
+ (id)multiArrayFromVector:(const void*)arg1;
+ (id)nsArrayFromVector:(const void*)arg1;

@end
