
@interface ABPK2DDetectionResults : NSObject <AREspressoTensorResultData, NSCopying> {
    ABPK2DDetectionResult * _alignedDetectionResult;
    NSArray * _detectedSkeletons;
    ABPK2DDetectionResult * _rawDetectionResult;
    double  _timestamp;
    ABPK2DDetectionResult * _trackedDetectionResult;
}

@property (nonatomic, retain) ABPK2DDetectionResult *alignedDetectionResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *detectedSkeletons;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ABPK2DDetectionResult *rawDetectionResult;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) ABPK2DDetectionResult *trackedDetectionResult;

- (void).cxx_destruct;
- (id)alignedDetectionResult;
- (id)detectedSkeletons;
- (id)rawDetectionResult;
- (void)setAlignedDetectionResult:(id)arg1;
- (void)setDetectedSkeletons:(id)arg1;
- (void)setRawDetectionResult:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTrackedDetectionResult:(id)arg1;
- (double)timestamp;
- (id)trackedDetectionResult;

@end
