
@interface FigCaptureSourceStreamsContainer : NSObject {
    NSDictionary * _baseZoomFactorsByPortType;
    BWFigCaptureDevice * _device;
    int  _deviceType;
    float  _minZoomFactorForDepth;
    BWFigCaptureStream * _primaryStream;
    int  _stillImageDepthDataType;
    NSArray * _streams;
    NSDictionary * _streamsByPortType;
}

- (void)dealloc;

@end
