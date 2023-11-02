
@interface LCFELChangepointDetectionAnalysisResult : NSObject {
    NSArray * _changepointTimestamps;
    NSNumber * _detectedChangePointCount;
    NSNumber * _featureCount;
    NSString * _featureName;
}

@property (nonatomic, readonly) NSArray *changepointTimestamps;
@property (nonatomic, readonly) NSNumber *detectedChangePointCount;
@property (nonatomic, readonly) NSNumber *featureCount;
@property (nonatomic, readonly) NSString *featureName;

- (void).cxx_destruct;
- (id)changepointTimestamps;
- (id)detectedChangePointCount;
- (id)featureCount;
- (id)featureName;
- (id)init:(id)arg1 featureCount:(id)arg2 detectedChangePointCount:(id)arg3 changepointTimestamps:(id)arg4;

@end
