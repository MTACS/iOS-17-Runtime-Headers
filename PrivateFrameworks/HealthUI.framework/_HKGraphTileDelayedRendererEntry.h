
@interface _HKGraphTileDelayedRendererEntry : NSObject {
    _HKGraphTileRenderToImage * _imageRenderer;
    double  _lastAssignmentTime;
}

@property (nonatomic, readonly) _HKGraphTileRenderToImage *imageRenderer;
@property (nonatomic, readonly) double lastAssignmentTime;

- (void).cxx_destruct;
- (bool)expiredAtTime:(double)arg1;
- (id)imageRenderer;
- (id)initWithImageRenderer:(id)arg1 lastAssignmentTime:(double)arg2;
- (double)lastAssignmentTime;

@end
