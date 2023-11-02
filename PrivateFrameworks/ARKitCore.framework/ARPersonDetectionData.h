
@interface ARPersonDetectionData : NSObject <ARResultData> {
    NSArray * _detectedObjects;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *detectedObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)description;
- (id)detectedObjects;
- (id)mergeOverlappingDetectionsWithThreshold:(float)arg1;
- (void)setDetectedObjects:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (id)transformToCVPixelBuffer:(struct __CVBuffer { }*)arg1 depthBuffer:(struct __CVBuffer { }*)arg2;

@end
