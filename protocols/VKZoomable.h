
@protocol VKZoomable <NSObject>

@required

- (double)maxZoomFactor;
- (double)minZoomFactor;
- (void)setZoomFactor:(double)arg1;
- (double)zoomFactor;

@end
