
@interface HMIFaceDetectorVision : HMFObject <HMFLogging, HMIFaceDetector>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)defaultRevision;
+ (id)detectFacesInImageData:(id)arg1 error:(id*)arg2;
+ (id)detectFacesInPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
+ (id)logCategory;
+ (void)releaseCachedResources;

@end
