
@interface AXMFaceDetectorNode : AXMEvaluationNode {
    VNClassifyFaceAttributesRequest * __faceAttributesRequest;
    VNDetectFaceExpressionsRequest * __faceExpressionsRequest;
    VNDetectFaceLandmarksRequest * __faceLandmarksRequest;
    AXMVisionFaceNameHelper * __faceNameHelper;
    VNDetectFacePoseRequest * __facePoseRequest;
    VNDetectFaceRectanglesRequest * __faceRectanglesRequest;
    VNCreateFaceprintRequest * __faceprintRequest;
}

@property (nonatomic, retain) VNClassifyFaceAttributesRequest *_faceAttributesRequest;
@property (nonatomic, retain) VNDetectFaceExpressionsRequest *_faceExpressionsRequest;
@property (nonatomic, retain) VNDetectFaceLandmarksRequest *_faceLandmarksRequest;
@property (nonatomic, retain) AXMVisionFaceNameHelper *_faceNameHelper;
@property (nonatomic, retain) VNDetectFacePoseRequest *_facePoseRequest;
@property (nonatomic, retain) VNDetectFaceRectanglesRequest *_faceRectanglesRequest;
@property (nonatomic, retain) VNCreateFaceprintRequest *_faceprintRequest;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (id)_createRequestsForContext:(id)arg1;
- (id)_faceAttributesRequest;
- (id)_faceDetectionResultsForVisionRequests:(id)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_faceExpressionsRequest;
- (id)_faceLandmarksRequest;
- (id)_faceNameHelper;
- (id)_facePoseRequest;
- (id)_faceRectanglesRequest;
- (id)_faceResultForUUID:(id)arg1 inFaceDictionary:(id)arg2;
- (id)_faceprintRequest;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (bool)requiresVisionFramework;
- (void)set_faceAttributesRequest:(id)arg1;
- (void)set_faceExpressionsRequest:(id)arg1;
- (void)set_faceLandmarksRequest:(id)arg1;
- (void)set_faceNameHelper:(id)arg1;
- (void)set_facePoseRequest:(id)arg1;
- (void)set_faceRectanglesRequest:(id)arg1;
- (void)set_faceprintRequest:(id)arg1;
- (bool)validateVisionKitSoftLinkSymbols;

@end
