
@interface PFCameraMetadata : NSObject <NSSecureCoding> {
    NSString * _captureFolderPath;
    NSArray * _contactIDsInProximity;
    NSArray * _detectedCatBodies;
    NSArray * _detectedDogBodies;
    NSArray * _detectedHumanBodies;
    NSArray * _detectedHumanFaces;
    NSArray * _detectedSalientObjects;
    NSArray * _faceObservations;
    NSArray * _foodAndDrinkObservations;
    float  _horizonLineAngleInDegrees;
    bool  _horizonLinePresent;
    VNImageAestheticsObservation * _imageAestheticsObservation;
    NSArray * _junkImageClassificationObservations;
    VNSaliencyImageObservation * _saliencyObservation;
    VNSceneObservation * _scenePrintObservation;
    NSArray * _semanticDevelopmentGatingObservations;
    long long  _semanticEnhanceScene;
    double  _semanticEnhanceSceneConfidence;
    long long  _sharedLibraryMode;
    NSDictionary * _smartCamInfo;
    unsigned long long  _stitchConfidence;
    NSArray * _torsoprints;
}

@property (readonly) NSData *JSONDebugDescription;
@property (nonatomic, readonly) NSString *captureFolderPath;
@property (nonatomic, readonly) NSArray *contactIDsInProximity;
@property (nonatomic, readonly) NSArray *detectedCatBodies;
@property (nonatomic, readonly) NSArray *detectedDogBodies;
@property (nonatomic, readonly) NSArray *detectedHumanBodies;
@property (nonatomic, readonly) NSArray *detectedHumanFaces;
@property (nonatomic, readonly) NSArray *detectedSalientObjects;
@property (nonatomic, readonly) NSArray *faceObservations;
@property (nonatomic, readonly) NSArray *foodAndDrinkObservations;
@property (nonatomic, readonly) float horizonLineAngleInDegrees;
@property (nonatomic, readonly) bool horizonLinePresent;
@property (nonatomic, readonly) VNImageAestheticsObservation *imageAestheticsObservation;
@property (nonatomic, readonly) NSArray *junkImageClassificationObservations;
@property (nonatomic, readonly) VNSaliencyImageObservation *saliencyObservation;
@property (nonatomic, readonly) VNSceneObservation *scenePrintObservation;
@property (nonatomic, readonly) NSArray *semanticDevelopmentGatingObservations;
@property (nonatomic) long long semanticEnhanceScene;
@property (nonatomic) double semanticEnhanceSceneConfidence;
@property (nonatomic, readonly) long long sharedLibraryMode;
@property (nonatomic, readonly) NSDictionary *smartCamInfo;
@property (nonatomic, readonly) unsigned long long stitchConfidence;
@property (nonatomic, readonly) NSArray *torsoprints;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONDebugDescription;
- (id)captureFolderPath;
- (id)contactIDsInProximity;
- (id)detectedCatBodies;
- (id)detectedDogBodies;
- (id)detectedHumanBodies;
- (id)detectedHumanFaces;
- (id)detectedSalientObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)faceObservations;
- (id)foodAndDrinkObservations;
- (float)horizonLineAngleInDegrees;
- (bool)horizonLinePresent;
- (id)imageAestheticsObservation;
- (id)initWithCoder:(id)arg1;
- (id)initWithJunkImageClassificationObservations:(id)arg1 imageAestheticsObservation:(id)arg2 saliencyObservation:(id)arg3 scenePrintObservation:(id)arg4 detectedObjectsInfoHumanFaces:(id)arg5 detectedObjectsInfoHumanBodies:(id)arg6 detectedObjectsInfoCatBodies:(id)arg7 detectedObjectsInfoDogBodies:(id)arg8 detectedObjectsSalientObjects:(id)arg9 smartCamInfo:(id)arg10 stitchConfidence:(unsigned long long)arg11 horizonLinePresent:(bool)arg12 horizonLineAngleInDegrees:(float)arg13 captureFolderPath:(id)arg14 semanticDevelopmentGatingObservations:(id)arg15 faceObservations:(id)arg16 torsoprints:(id)arg17 foodAndDrinkObservations:(id)arg18 semanticEnhanceScene:(long long)arg19 contactIDsInProximity:(id)arg20 sharedLibraryMode:(long long)arg21;
- (id)initWithSpatialOverCapturePrivateClientMetadata:(id)arg1;
- (id)junkImageClassificationObservations;
- (id)saliencyObservation;
- (id)scenePrintObservation;
- (id)semanticDevelopmentGatingObservations;
- (long long)semanticEnhanceScene;
- (double)semanticEnhanceSceneConfidence;
- (void)setSemanticEnhanceScene:(long long)arg1;
- (void)setSemanticEnhanceSceneConfidence:(double)arg1;
- (long long)sharedLibraryMode;
- (id)smartCamInfo;
- (unsigned long long)stitchConfidence;
- (id)torsoprints;

@end
