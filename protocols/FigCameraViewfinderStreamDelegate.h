
@protocol FigCameraViewfinderStreamDelegate <NSObject>

@optional

- (void)cameraViewfinderStream:(FigCameraViewfinderStream *)arg1 didCloseWithStatus:(int)arg2;
- (void)cameraViewfinderStreamDidOpen:(FigCameraViewfinderStream *)arg1;

@end
