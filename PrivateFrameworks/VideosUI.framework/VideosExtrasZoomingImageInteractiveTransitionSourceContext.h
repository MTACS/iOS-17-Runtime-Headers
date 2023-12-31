
@interface VideosExtrasZoomingImageInteractiveTransitionSourceContext : NSObject {
    NSString * _identifier;
    unsigned long long  _itemIndex;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    unsigned long long  _supportedZoomingImageTransitionDirections;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long itemIndex;
@property (nonatomic, retain) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic) unsigned long long supportedZoomingImageTransitionDirections;

- (void).cxx_destruct;
- (id)identifier;
- (unsigned long long)itemIndex;
- (id)pinchGestureRecognizer;
- (void)setIdentifier:(id)arg1;
- (void)setItemIndex:(unsigned long long)arg1;
- (void)setPinchGestureRecognizer:(id)arg1;
- (void)setSupportedZoomingImageTransitionDirections:(unsigned long long)arg1;
- (unsigned long long)supportedZoomingImageTransitionDirections;

@end
