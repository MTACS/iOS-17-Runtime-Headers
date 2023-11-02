
@interface MatchedPhotoAttribute : NSObject {
    NSArray * _boundingBox;
    double  _confidence;
    SSTokenizedString * _feature;
    unsigned long long  _tokenLength;
    unsigned long long  _tokenNum;
    NSMutableArray * _totalFeaturesNum;
    NSMutableArray * _types;
}

@property (nonatomic, retain) NSArray *boundingBox;
@property double confidence;
@property (nonatomic, retain) SSTokenizedString *feature;
@property unsigned long long tokenLength;
@property unsigned long long tokenNum;
@property (nonatomic, retain) NSMutableArray *totalFeaturesNum;
@property (nonatomic, retain) NSMutableArray *types;

- (void).cxx_destruct;
- (id)boundingBox;
- (double)confidence;
- (id)feature;
- (id)initPhotoFeature:(id)arg1 matchedType:(unsigned long long)arg2 totalFeaturesNum:(id)arg3 confidence:(double)arg4 boundingBox:(id)arg5;
- (void)setBoundingBox:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setFeature:(id)arg1;
- (void)setTokenLength:(unsigned long long)arg1;
- (void)setTokenNum:(unsigned long long)arg1;
- (void)setTotalFeaturesNum:(id)arg1;
- (void)setTypes:(id)arg1;
- (unsigned long long)tokenLength;
- (unsigned long long)tokenNum;
- (id)totalFeaturesNum;
- (id)types;

@end
