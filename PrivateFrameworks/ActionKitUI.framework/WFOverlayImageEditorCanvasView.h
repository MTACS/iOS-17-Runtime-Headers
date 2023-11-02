
@interface WFOverlayImageEditorCanvasView : UIView <UIGestureRecognizerDelegate> {
    UIImageView * _backgroundImageView;
    WFOverlayImageTransform * _imageTransform;
    UIImageView * _overlayImageView;
    UIRotationGestureRecognizer * _rotateRecognizer;
}

@property (nonatomic, readonly) UIImageView *backgroundImageView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFOverlayImageTransform *imageTransform;
@property (nonatomic, readonly) UIImageView *overlayImageView;
@property (nonatomic, readonly) UIRotationGestureRecognizer *rotateRecognizer;
@property (getter=isRotationEnabled, nonatomic) bool rotationEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backgroundImageView;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (id)imageTransform;
- (id)initWithBackgroundImage:(id)arg1 overlayImage:(id)arg2 transform:(id)arg3;
- (bool)isRotationEnabled;
- (void)layoutSubviews;
- (id)overlayImageView;
- (void)reset;
- (id)rotateRecognizer;
- (void)setOverlayImageOpacity:(double)arg1;
- (void)setRotationEnabled:(bool)arg1;

@end
