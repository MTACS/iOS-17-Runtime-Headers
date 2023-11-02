
@interface VNFaceDetector : VNDetector <VNDetectorKeyProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)calculateTilesForRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 tileSizeInPixels:(unsigned long long)arg4 overlapFraction:(float)arg5 aspectRatioThreshold:(float)arg6 columns:(unsigned long long*)arg7 rows:(unsigned long long*)arg8 tiles:(void*)arg9 error:(id*)arg10;
+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (void)fullyPopulateConfigurationOptions:(id)arg1;
+ (void)printDebugInfo:(id)arg1 facesDataRaw:(void*)arg2 faceDetectorBGRAImage:(struct __CVBuffer { }*)arg3 tempImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg4 session:(id)arg5;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
+ (bool)shouldDumpDebugIntermediates;

- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 warningRecorder:(id)arg4 error:(id*)arg5 progressHandler:(id /* block */)arg6;
- (void)purgeIntermediates;

@end
