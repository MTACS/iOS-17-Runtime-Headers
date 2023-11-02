
@interface PKTileController : NSObject {
    double  _contentZoomScale;
    bool  _invertColors;
    NSObject<OS_dispatch_queue> * _previewQueue;
    bool  _previewsSuspended;
    PKMetalRendererController * _rendererController;
    bool  _sixChannelBlending;
}

- (void).cxx_destruct;

@end
