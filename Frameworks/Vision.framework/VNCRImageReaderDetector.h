
@interface VNCRImageReaderDetector : VNDetector {
    CRImageReader * _imageReader;
}

+ (id)_imageReaderInitializationOptionsForCreationOptions:(id)arg1 computeDevice:(id)arg2 error:(id*)arg3;
+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)imageReaderRecognitionOptionsForProcessOptions:(id)arg1;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;
+ (id)supportedLanguagesForProcessOptions:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_observationsForImageReaderOutput:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3;
- (id)cachedImageReader;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (bool)isCRImageReaderViableAfterError:(id)arg1;
- (id)newImageReaderAndReturnError:(id*)arg1;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (void)setCachedImageReader:(id)arg1;

@end
