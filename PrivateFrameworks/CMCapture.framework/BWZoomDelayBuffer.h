
@interface BWZoomDelayBuffer : NSObject {
    unsigned int  _currentZoomDelay;
    int  _currentZoomDirection;
    unsigned int  _maxZoomDelay;
    int  _operatingMode;
    struct { float x1; int x2; bool x3; } * _zoomRequestBuffer;
    unsigned int  _zoomRequestBufferIndex;
}

- (void)dealloc;

@end
