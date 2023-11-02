
@protocol HFCameraImageGeneratorDelegate

@required

- (void)imageGenerator:(id)arg1 didGenerateImage:(UIImage *)arg2 requestedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 actualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 forKey:(NSString *)arg5;
- (void)imageGenerator:(id)arg1 failedToGenerateImageForRequestedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 actualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 forKey:(NSString *)arg4;
- (void)imageGenerator:(id)arg1 finishedGeneratingImagesForKey:(NSString *)arg2;

@end
