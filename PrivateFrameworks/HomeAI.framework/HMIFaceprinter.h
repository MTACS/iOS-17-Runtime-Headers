
@interface HMIFaceprinter : HMFObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)_minorVersionFromVisionVersion:(int)arg1;
+ (struct __CVBuffer { }*)createFacePixelBufferForFaceDetection:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 roll:(id)arg3 error:(id*)arg4;
+ (struct __CVBuffer { }*)createFacePixelBufferForFaceEvent:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 roll:(id)arg3 error:(id*)arg4;
+ (id)currentModelUUID;
+ (id)logCategory;

- (struct __CVBuffer { }*)createFacePixelBufferFromFaceCrop:(id)arg1 error:(id*)arg2;
- (id)createFaceprintForFacePixelBuffer:(struct __CVBuffer { }*)arg1 fastMode:(bool)arg2 error:(id*)arg3;
- (id)generateFaceprintForFaceCrop:(id)arg1 error:(id*)arg2;
- (id)updatedFaceprintsForFaceCrops:(id)arg1 withExistingFaceprints:(id)arg2 error:(id*)arg3;
- (void)warmStart;

@end
