
@interface VNTrackLegacyFaceCoreObjectRequest : VNTrackObjectRequest {
    bool  _faceCoreEnhanceEyesAndMouthLocalization;
    bool  _faceCoreExtractBlink;
    bool  _faceCoreExtractSmile;
    float  _faceCoreKalmanFilter;
    NSNumber * _faceCoreMinFaceSize;
    NSNumber * _faceCoreNumberOfDetectionAngles;
}

@property (nonatomic) bool faceCoreEnhanceEyesAndMouthLocalization;
@property (nonatomic) bool faceCoreExtractBlink;
@property (nonatomic) bool faceCoreExtractSmile;
@property (nonatomic) float faceCoreKalmanFilter;
@property (nonatomic, retain) NSNumber *faceCoreMinFaceSize;
@property (nonatomic, retain) NSNumber *faceCoreNumberOfDetectionAngles;

+ (unsigned long long)defaultRevision;
+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)arg1;
+ (id)privateRevisionsSet;
+ (id)publicRevisionsSet;
+ (id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)faceCoreEnhanceEyesAndMouthLocalization;
- (bool)faceCoreExtractBlink;
- (bool)faceCoreExtractSmile;
- (float)faceCoreKalmanFilter;
- (id)faceCoreMinFaceSize;
- (id)faceCoreNumberOfDetectionAngles;
- (id)initWithDetectedObjectObservation:(id)arg1;
- (void)populateDetectorProcessingOptions:(id)arg1 session:(id)arg2;
- (void)setFaceCoreEnhanceEyesAndMouthLocalization:(bool)arg1;
- (void)setFaceCoreExtractBlink:(bool)arg1;
- (void)setFaceCoreExtractSmile:(bool)arg1;
- (void)setFaceCoreKalmanFilter:(float)arg1;
- (void)setFaceCoreMinFaceSize:(id)arg1;
- (void)setFaceCoreNumberOfDetectionAngles:(id)arg1;

@end
