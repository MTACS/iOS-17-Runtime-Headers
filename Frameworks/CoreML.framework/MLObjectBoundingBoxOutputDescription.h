
@interface MLObjectBoundingBoxOutputDescription : NSObject {
    NSString * _confidenceFeatureName;
    NSString * _coordinatesFeatureName;
    int  _format;
    NSArray * _labelNames;
}

@property (retain) NSString *confidenceFeatureName;
@property (retain) NSString *coordinatesFeatureName;
@property int format;
@property (retain) NSArray *labelNames;

- (void).cxx_destruct;
- (id)confidenceFeatureName;
- (id)coordinatesFeatureName;
- (int)format;
- (id)labelNames;
- (void)setConfidenceFeatureName:(id)arg1;
- (void)setCoordinatesFeatureName:(id)arg1;
- (void)setFormat:(int)arg1;
- (void)setLabelNames:(id)arg1;

@end
