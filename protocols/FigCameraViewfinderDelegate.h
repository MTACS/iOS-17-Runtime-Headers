
@protocol FigCameraViewfinderDelegate <NSObject>

@required

- (void)cameraViewfinder:(FigCameraViewfinder *)arg1 viewfinderSessionDidBegin:(FigCameraViewfinderSession *)arg2;
- (void)cameraViewfinder:(FigCameraViewfinder *)arg1 viewfinderSessionDidEnd:(FigCameraViewfinderSession *)arg2;

@optional

- (void)cameraViewfinderSessionWillBegin:(FigCameraViewfinder *)arg1;

@end
