
@interface HMITorsoQuality : HMFObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (float)entropy:(const void*)arg1 numPixels:(int)arg2;
+ (float)entropyOfLaplacianForBGRAPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (float)entropyOfSaturationForBGRAPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (id)logCategory;

@end
