
@interface HMIVideoAnalyzerMutableReport : HMFObject <HMFLogging, NSSecureCoding> {
    NSDictionary * _deviceInformation;
    NSString * _name;
    NSMutableDictionary * _sessions;
    long long  _version;
}

@property (readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *deviceInformation;
@property (readonly) NSSet *eventClasses;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) NSMutableDictionary *sessions;
@property (readonly) Class superclass;
@property (readonly) long long version;

+ (id)chartSpecWithRange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 colors:(id)arg2 labels:(id)arg3;
+ (id)greedyMatchBetweenPredictionEvents:(id)arg1 truthEvents:(id)arg2 falsePositiveIndices:(id)arg3 falseNegativeIndices:(id)arg4 eventClass:(Class)arg5 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 confidenceThreshold:(float)arg7 scoreThreshold:(float)arg8 scoreFunction:(id /* block */)arg9;
+ (id)logCategory;
+ (void)sihouetteScoreForMatches:(id)arg1 previousMatches:(id)arg2 truePositiveScores:(id)arg3 falsePositiveScores:(id)arg4 falseNegativeScores:(id)arg5;
+ (bool)supportsSecureCoding;
+ (id)systemDeviceInformation;
+ (void)writeImageCropFromFrame:(id)arg1 events:(id)arg2 outputPath:(id)arg3 source:(id)arg4;
+ (void)writeJSONChartData:(id)arg1 outputPath:(id)arg2;

- (void).cxx_destruct;
- (void)appendFragmentResult:(id)arg1 forKey:(id)arg2 source:(id)arg3 redactFrames:(bool)arg4;
- (void)appendFragmentResultsFromReport:(id)arg1;
- (id)averagePrecisionForMinPrecision:(float)arg1 comparator:(id /* block */)arg2;
- (id)averagePrecisionWithClassificationTruth:(id)arg1 minPrecision:(float)arg2;
- (id)averagePrecisionWithDetectionTruth:(id)arg1 minPrecision:(float)arg2 iouThreshold:(float)arg3 videoMetric:(bool)arg4;
- (id)chartDataWithBaseline:(bool)arg1 comparator:(id /* block */)arg2;
- (id)chartDataWithClassificationTruth:(id)arg1 isBaseline:(bool)arg2;
- (id)chartDataWithDetectionTruth:(id)arg1 isBaseline:(bool)arg2 iouThreshold:(float)arg3 videoMetric:(bool)arg4;
- (id)compareWithClassificationTruth:(id)arg1 eventClass:(Class)arg2 confidenceThreshold:(float)arg3;
- (id)compareWithDetectionTruth:(id)arg1 eventClass:(Class)arg2 confidenceThreshold:(float)arg3 iouThreshold:(float)arg4 videoMetric:(bool)arg5;
- (id)compareWithTrackingTruth:(id)arg1 eventClass:(Class)arg2 confidenceThreshold:(float)arg3 ioaThreshold:(float)arg4;
- (id)data;
- (id)deviceInformation;
- (void)encodeWithCoder:(id)arg1;
- (id)eventClasses;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1;
- (id)name;
- (id)selectFramesWithRecord:(id)arg1 truth:(id)arg2 frameResults:(id)arg3;
- (id)sessions;
- (id)truthReportFromLegacyClassificationFormat:(id)arg1;
- (id)truthReportFromLegacyDetectionFormat:(id)arg1;
- (long long)version;
- (void)writeFragmentFileComparison:(id)arg1 eventClass:(Class)arg2 outputPath:(id)arg3;
- (void)writeHTMLReportComparison:(id)arg1 truth:(id)arg2 eventClass:(Class)arg3 comparisonType:(id)arg4 assetPath:(id)arg5 outputPath:(id)arg6 limit:(unsigned long long)arg7 shuffle:(bool)arg8;
- (void)writeImageCropForEventClass:(Class)arg1 outputPath:(id)arg2 assetPath:(id)arg3;

@end
