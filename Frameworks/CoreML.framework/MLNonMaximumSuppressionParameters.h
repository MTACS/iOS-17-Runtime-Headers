
@interface MLNonMaximumSuppressionParameters : NSObject {
    NSString * _confidenceInputFeatureName;
    NSString * _confidenceOutputFeatureName;
    double  _confidenceThreshold;
    NSString * _confidenceThresholdInputFeatureName;
    NSString * _coordinatesInputFeatureName;
    NSString * _coordinatesOutputFeatureName;
    double  _iouThreshold;
    NSString * _iouThresholdInputFeatureName;
    NSArray * _labelNames;
    long long  _maxBoxes;
    unsigned long long  _minBoxes;
    unsigned long long  _numClasses;
    bool  _perClass;
    int  _suppressionMethod;
}

@property (retain) NSString *confidenceInputFeatureName;
@property (retain) NSString *confidenceOutputFeatureName;
@property double confidenceThreshold;
@property (retain) NSString *confidenceThresholdInputFeatureName;
@property (retain) NSString *coordinatesInputFeatureName;
@property (retain) NSString *coordinatesOutputFeatureName;
@property double iouThreshold;
@property (retain) NSString *iouThresholdInputFeatureName;
@property (retain) NSArray *labelNames;
@property long long maxBoxes;
@property unsigned long long minBoxes;
@property unsigned long long numClasses;
@property bool perClass;
@property int suppressionMethod;

- (void).cxx_destruct;
- (id)confidenceInputFeatureName;
- (id)confidenceOutputFeatureName;
- (double)confidenceThreshold;
- (id)confidenceThresholdInputFeatureName;
- (id)coordinatesInputFeatureName;
- (id)coordinatesOutputFeatureName;
- (double)iouThreshold;
- (id)iouThresholdInputFeatureName;
- (id)labelNames;
- (long long)maxBoxes;
- (unsigned long long)minBoxes;
- (unsigned long long)numClasses;
- (id)objectBoundingBoxOutputDescription;
- (bool)perClass;
- (void)setConfidenceInputFeatureName:(id)arg1;
- (void)setConfidenceOutputFeatureName:(id)arg1;
- (void)setConfidenceThreshold:(double)arg1;
- (void)setConfidenceThresholdInputFeatureName:(id)arg1;
- (void)setCoordinatesInputFeatureName:(id)arg1;
- (void)setCoordinatesOutputFeatureName:(id)arg1;
- (void)setIouThreshold:(double)arg1;
- (void)setIouThresholdInputFeatureName:(id)arg1;
- (void)setLabelNames:(id)arg1;
- (void)setMaxBoxes:(long long)arg1;
- (void)setMinBoxes:(unsigned long long)arg1;
- (void)setNumClasses:(unsigned long long)arg1;
- (void)setPerClass:(bool)arg1;
- (void)setSuppressionMethod:(int)arg1;
- (int)suppressionMethod;

@end
