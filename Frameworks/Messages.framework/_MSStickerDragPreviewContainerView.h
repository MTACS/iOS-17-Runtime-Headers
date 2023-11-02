
@interface _MSStickerDragPreviewContainerView : UIView <_UIDragPreviewContainer> {
    id /* block */  _clientDropCompletion;
    UIView * _currentDropPreviewSnapshot;
    bool  _defersFinalDropAnimationCompletion;
    bool  _dropAnimationIsComplete;
    CALayer * _dropShadowLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _dropShadowLayerStartPosition;
    id /* block */  _finalUIKitDropCompletion;
    UIImage * _image;
    bool  _isDropAnimation;
    CALayer * _meshLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _meshLayerStartPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalCenter;
    CALayer * _peelImageLayer;
    CALayer * _peelLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _peelLayerStartPosition;
    CALayer * _peelMaskLayer;
    CALayer * _perspectiveLayer;
    UIView * _previewView;
    CALayer * _shadowLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _shadowLayerStartPosition;
    CALayer * _shineLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _shineLayerStartPosition;
    bool  _useEmojiKeyboardMeshTransform;
}

@property (nonatomic, copy) id /* block */ clientDropCompletion;
@property (nonatomic, retain) UIView *currentDropPreviewSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool defersFinalDropAnimationCompletion;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dropAnimationIsComplete;
@property (nonatomic, retain) CALayer *dropShadowLayer;
@property (nonatomic) struct CGPoint { double x1; double x2; } dropShadowLayerStartPosition;
@property (nonatomic, copy) id /* block */ finalUIKitDropCompletion;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool isDropAnimation;
@property (nonatomic, retain) CALayer *meshLayer;
@property (nonatomic) struct CGPoint { double x1; double x2; } meshLayerStartPosition;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalCenter;
@property (nonatomic, retain) CALayer *peelImageLayer;
@property (nonatomic, retain) CALayer *peelLayer;
@property (nonatomic) struct CGPoint { double x1; double x2; } peelLayerStartPosition;
@property (nonatomic, retain) CALayer *peelMaskLayer;
@property (nonatomic, retain) CALayer *perspectiveLayer;
@property (nonatomic, retain) UIView *previewView;
@property (nonatomic, retain) CALayer *shadowLayer;
@property (nonatomic) struct CGPoint { double x1; double x2; } shadowLayerStartPosition;
@property (nonatomic, retain) CALayer *shineLayer;
@property (nonatomic) struct CGPoint { double x1; double x2; } shineLayerStartPosition;
@property (readonly) Class superclass;
@property (nonatomic) bool useEmojiKeyboardMeshTransform;

+ (id)meshTransformWithContentScale:(double)arg1;
+ (id)shadowPropertiesForDrag;
+ (id)springAnimationWithKeyPath:(id)arg1 speed:(float)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetPreviewTransform;

- (void).cxx_destruct;
- (void)_animateDropAlongsideAnimator:(id)arg1 completion:(id /* block */)arg2;
- (void)_animateLiftAlongsideAnimator:(id)arg1 completion:(id /* block */)arg2;
- (void)_animateLiftCancellationAlongsideAnimator:(id)arg1 completion:(id /* block */)arg2;
- (void)_preparePreviewContainerWithPreview:(id)arg1 source:(id)arg2 initialTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id /* block */)clientDropCompletion;
- (id)currentDropPreviewSnapshot;
- (bool)defersFinalDropAnimationCompletion;
- (double)dragViewScale;
- (double)dragViewScaleUp;
- (bool)dropAnimationIsComplete;
- (id)dropShadowLayer;
- (struct CGPoint { double x1; double x2; })dropShadowLayerStartPosition;
- (id /* block */)finalUIKitDropCompletion;
- (void)finalizeDropIfNecessary;
- (id)image;
- (id)initWithIsDropAnimation:(bool)arg1;
- (struct CGSize { double x1; double x2; })initialSize;
- (bool)isDropAnimation;
- (id)meshLayer;
- (struct CGPoint { double x1; double x2; })meshLayerStartPosition;
- (struct CGPoint { double x1; double x2; })originalCenter;
- (id)peelImageLayer;
- (id)peelLayer;
- (struct CGPoint { double x1; double x2; })peelLayerStartPosition;
- (id)peelMaskImageFromImage:(id)arg1;
- (id)peelMaskLayer;
- (void)performAfterDropAnimation:(id /* block */)arg1;
- (id)perspectiveLayer;
- (id)previewView;
- (struct CGSize { double x1; double x2; })rasterizedImageSize;
- (void)reversePeelAnimationToPoint:(struct CGPoint { double x1; double x2; })arg1 forPlacement:(bool)arg2 shouldShrink:(bool)arg3 completionBlock:(id /* block */)arg4;
- (void)setClientDropCompletion:(id /* block */)arg1;
- (void)setCurrentDropPreviewSnapshot:(id)arg1;
- (void)setDefersFinalDropAnimationCompletion:(bool)arg1;
- (void)setDropAnimationIsComplete:(bool)arg1;
- (void)setDropShadowLayer:(id)arg1;
- (void)setDropShadowLayerStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFinalUIKitDropCompletion:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setIsDropAnimation:(bool)arg1;
- (void)setMeshLayer:(id)arg1;
- (void)setMeshLayerStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPeelImageLayer:(id)arg1;
- (void)setPeelLayer:(id)arg1;
- (void)setPeelLayerStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPeelMaskLayer:(id)arg1;
- (void)setPerspectiveLayer:(id)arg1;
- (void)setPreviewView:(id)arg1;
- (void)setShadowLayer:(id)arg1;
- (void)setShadowLayerStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShineLayer:(id)arg1;
- (void)setShineLayerStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setUseEmojiKeyboardMeshTransform:(bool)arg1;
- (id)shadowLayer;
- (struct CGPoint { double x1; double x2; })shadowLayerStartPosition;
- (id)shineLayer;
- (struct CGPoint { double x1; double x2; })shineLayerStartPosition;
- (bool)showDebugBorders;
- (bool)useEmojiKeyboardMeshTransform;

@end
