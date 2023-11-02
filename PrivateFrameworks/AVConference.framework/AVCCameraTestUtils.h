
@interface AVCCameraTestUtils : NSObject

+ (id)defaultCameraUID;
+ (bool)expectedGFTResolutionForDevice:(id)arg1 ratio:(struct CGSize { double x1; double x2; }*)arg2;
+ (bool)expectedPreviewResolutionForDevice:(id)arg1 width:(int*)arg2 height:(int*)arg3;
+ (bool)findExpectedFramerate:(float*)arg1 forDevice:(id)arg2;
+ (bool)isCameraAvailable;
+ (bool)isCameraAvailable:(long long)arg1;
+ (bool)isReactionAvailable;
+ (bool)performReaction;

@end
