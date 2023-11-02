
@interface CAMOrientationUtilities : NSObject

+ (long long)captureOrientationFromPanoramaCaptureOrientation:(long long)arg1;
+ (int)exifOrientationForVideoRequest:(id)arg1;
+ (long long)imageOrientationForVideoRequest:(id)arg1;
+ (long long)imageOrientationOfResult:(id)arg1 withCaptureDevice:(long long)arg2 captureOrientation:(long long)arg3;
+ (long long)panoramaCaptureOrientationFromCaptureOrientation:(long long)arg1;
+ (long long)videoTrackOrientationForVideoRequest:(id)arg1;

@end
