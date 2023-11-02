
@interface VGFaceEnrollment : NSObject <VGFaceDetectionDelegate> {
    NSUserDefaults * _defaults;
    VGFaceDetection * _faceDetection;
    unsigned long long  _lastReason;
    unsigned long long  _state;
    NSMutableDictionary * _validImages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long failure;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_croppedImageWithFaceObservation:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2;
- (unsigned long long)_currentStateToFetch;
- (unsigned long long)_orientationForFaceObservation:(id)arg1;
- (bool)_validFaceObservation:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2;
- (bool)_writeImageFileOnDisk;
- (void)faceDetection:(id)arg1 faceObservation:(id)arg2 pixelBuffer:(struct __CVBuffer { }*)arg3;
- (void)faceDetectionFailed:(id)arg1 reason:(unsigned long long)arg2;
- (unsigned long long)failure;
- (id)images;
- (id)init;
- (void)processPixelBuffer:(struct __CVBuffer { }*)arg1 completion:(id /* block */)arg2;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
