
@interface PFStoryRecipeDisplayAssetNormalization : NSObject <NSCopying> {
    <_PFStoryRecipeDisplayAssetNormalizationData> * _normalizationData;
}

@property (nonatomic, readonly) NSData *analysisData;
@property (nonatomic, readonly) NSString *detailedDescription;
@property (nonatomic, readonly) NSDictionary *highKeyProperties;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSDictionary *smartColorProperties;
@property (nonatomic, readonly) NSDictionary *smartToneProperties;
@property (nonatomic, readonly) NSDictionary *tempTintProperties;
@property (nonatomic, readonly) long long version;

- (void).cxx_destruct;
- (id)analysisData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detailedDescription;
- (unsigned long long)hash;
- (id)highKeyProperties;
- (id)init;
- (id)initWithAnalysisData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)score;
- (id)smartColorProperties;
- (id)smartToneProperties;
- (id)tempTintProperties;
- (long long)version;

@end
