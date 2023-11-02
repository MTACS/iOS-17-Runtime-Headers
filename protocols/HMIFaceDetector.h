
@protocol HMIFaceDetector

@required

+ (NSArray *)detectFacesInImageData:(NSData *)arg1 error:(id*)arg2;
+ (NSArray *)detectFacesInPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
+ (void)releaseCachedResources;

@end
