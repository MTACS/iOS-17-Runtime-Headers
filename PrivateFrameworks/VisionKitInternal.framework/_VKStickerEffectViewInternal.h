
@interface _VKStickerEffectViewInternal : UIView <VKStickerEffectViewInternal> {
    void appliedScale;
    void boundsIncludeStroke;
    void commandQueue;
    void curlPosition;
    void device;
    void deviceOrientation;
    void displayLink;
    void displayLinkActive;
    void effect;
    void image;
    void instanceLabel;
    void instanceNumber;
    void isPaused;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void metalLayer;
    void metalLayerContainer;
    void motionActive;
    void needsRender;
    void reRenderOnMotion;
    void renderInProgress;
    void renderQueue;
    void renderer;
    void requiredScale;
    void screenCenterDuration;
    void scrollViewToObserve;
    void scrollViewToObserveCount;
    void settlingDuration1;
    void settlingDuration2;
    void settlingEndAngle;
    void settlingOrientation;
    void settlingStartAngle;
    void settlingStartTime;
    void strokeScale;
    void unitScreenCenter;
}

@property (nonatomic, retain) <VKStickerEffectInternal> *_effect;
@property (nonatomic) bool boundsIncludeStroke;
@property (nonatomic) float curlPosition;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) _VKStickerEffectInternal *effect;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (nonatomic) bool isPaused;
@property (nonatomic) bool reRenderOnMotion;

+ (double)extraScaleToIncludeStrokeWithEffectType:(long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (void)resetRestingOrientation;

- (void).cxx_destruct;
- (id)_effect;
- (void)_internalUpdateFromDisplayLink:(id)arg1;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (bool)boundsIncludeStroke;
- (float)curlPosition;
- (void)dealloc;
- (id)description;
- (void)didMoveToWindow;
- (id)effect;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPaused;
- (void)layoutSubviews;
- (void)playSettlingAnimation;
- (bool)reRenderOnMotion;
- (void)scrollViewDidChange:(id)arg1;
- (void)scrollViewWillChange:(id)arg1;
- (void)setBoundsIncludeStroke:(bool)arg1;
- (void)setCurlPosition:(float)arg1;
- (void)setEffect:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsPaused:(bool)arg1;
- (void)setReRenderOnMotion:(bool)arg1;
- (void)set_effect:(id)arg1;
- (void)snapshotWithCompletionHandler:(id /* block */)arg1;

@end
