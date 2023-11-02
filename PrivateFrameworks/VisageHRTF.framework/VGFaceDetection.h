
@interface VGFaceDetection : NSObject {
    <VGFaceDetectionDelegate> * _delegate;
    VNClassifyFaceAttributesRequest * _faceAttributesRequest;
    VNDetectFaceRectanglesRequest * _faceDetectionRequest;
    VNDetectFaceLandmarksRequest * _faceLandmarksRequest;
    VNFaceObservation * _faceObservation;
    VNDetectFaceCaptureQualityRequest * _faceQualityRequest;
    VNSequenceRequestHandler * _requestHandler;
}

- (void).cxx_destruct;
- (long long)_compareFaceObservations:(id)arg1 observation:(id)arg2;
- (bool)_isMouthOpen:(id)arg1;
- (void)_performFaceDetectionOnPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)_performFaceRequestsIfNeededOnPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)_updateEnrollementStatePixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)faceAttributesRequest;
- (id)faceDetectionRequest;
- (id)faceLandmarksRequest;
- (id)faceQualityRequest;
- (id)initWithDelegate:(id)arg1;
- (void)processPixelBuffer:(struct __CVBuffer { }*)arg1;

@end
