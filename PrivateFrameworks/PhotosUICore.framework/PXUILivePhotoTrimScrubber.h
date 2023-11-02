
@interface PXUILivePhotoTrimScrubber : PXLivePhotoTrimScrubber <UIGestureRecognizerDelegate> {
    UIImpactFeedbackGenerator * _impactGenerator;
    UILongPressGestureRecognizer * _longPressGesture;
    UIPanGestureRecognizer * _panGesture;
    UITapGestureRecognizer * _tapGesture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImpactFeedbackGenerator *impactGenerator;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic, retain) UIPanGestureRecognizer *panGesture;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGesture;

+ (id)_stretchableImageNamed:(id)arg1 withCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
+ (id)createSnappingControllerWithSnappingTarget:(double)arg1;
+ (id)trimEndHighlightedImage;
+ (id)trimEndHighlightedImageMini;
+ (id)trimEndImage;
+ (id)trimEndImageMini;
+ (id)trimStartHighlightedImage;
+ (id)trimStartHighlightedImageMini;
+ (id)trimStartImage;
+ (id)trimStartImageMini;

- (void).cxx_destruct;
- (void)_PXUILivePhotoTrimScrubber_commonInit;
- (void)_handleBeginPanGesture:(id)arg1;
- (void)_handleChangePanGesture:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handleTap:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)impactGenerator;
- (void)impactOccured;
- (id)initWithFilmStripViewClass:(Class)arg1 spec:(id)arg2 traitCollection:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)longPressGesture;
- (id)panGesture;
- (void)prepareForImpact;
- (void)setDisabled:(bool)arg1;
- (void)setImpactGenerator:(id)arg1;
- (void)setLongPressGesture:(id)arg1;
- (void)setPanGesture:(id)arg1;
- (void)setTapGesture:(id)arg1;
- (id)tapGesture;

@end
