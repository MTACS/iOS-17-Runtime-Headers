
@interface FigCaptureSessionActiveCameraCaptureSource : NSObject {
    BWFigVideoCaptureDevice * _device;
    int  _deviceType;
    NSString * _nonLocalizedName;
    struct OpaqueFigCaptureSource { } * _source;
}

- (void)dealloc;

@end
