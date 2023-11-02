
@interface CKBrowserDragViewController : UIViewController <UIDynamicAnimatorDelegate, UIGestureRecognizerDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorOffset;
    bool  _canPeel;
    bool  _canRotate;
    bool  _canScale;
    <CKBrowserDragViewControllerDelegate> * _delegate;
    CKAnimatedImage * _dragImage;
    double  _dragViewRotation;
    UILongPressGestureRecognizer * _gestureRecognizer;
    bool  _hasMovedToWindow;
    struct CGPoint { 
        double x; 
        double y; 
    }  _keyboardAnchorOffset;
    CKBrowserDragStickerView * _keyboardDragView;
    UIPanGestureRecognizer * _keyboardPanGestureRecognizer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardSourceRect;
    UIView * _keyboardWindowSourceView;
    CKBrowserDragStickerView * _normalDragView;
    UIPanGestureRecognizer * _panGestureRecognizer;
    bool  _pressed;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousPanLocationInKeyboardView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousPanLocationInView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
}

@property (nonatomic, readonly) double absoluteScale;
@property (nonatomic) struct CGPoint { double x1; double x2; } anchorOffset;
@property (nonatomic) bool canPeel;
@property (nonatomic) bool canRotate;
@property (nonatomic) bool canScale;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKBrowserDragViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKAnimatedImage *dragImage;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } dragViewCenter;
@property (nonatomic, readonly) double dragViewRotation;
@property (nonatomic, readonly) double dragViewScale;
@property (nonatomic, retain) UILongPressGestureRecognizer *gestureRecognizer;
@property (nonatomic) bool hasMovedToWindow;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } keyboardAnchorOffset;
@property (nonatomic, retain) CKBrowserDragStickerView *keyboardDragView;
@property (nonatomic, retain) UIPanGestureRecognizer *keyboardPanGestureRecognizer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardSourceRect;
@property (nonatomic) UIView *keyboardWindowSourceView;
@property (nonatomic, retain) CKBrowserDragStickerView *normalDragView;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;
@property (getter=isPressed, nonatomic) bool pressed;
@property (nonatomic) struct CGPoint { double x1; double x2; } previousPanLocationInKeyboardView;
@property (nonatomic) struct CGPoint { double x1; double x2; } previousPanLocationInView;
@property (nonatomic) double rotationAngle;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (readonly) Class superclass;

+ (bool)supportsForceTouch;

- (void).cxx_destruct;
- (bool)_orbScalingEnabled;
- (void)_reversePeelAnimationToPoint:(struct CGPoint { double x1; double x2; })arg1 keyboardPoint:(struct CGPoint { double x1; double x2; })arg2 forPlacement:(bool)arg3 shouldShrink:(bool)arg4 completionBlock:(id /* block */)arg5;
- (double)absoluteScale;
- (struct CGPoint { double x1; double x2; })anchorOffset;
- (void)animateBackToSourceCompletionBlock:(id /* block */)arg1;
- (void)animatePlacementAtPoint:(struct CGPoint { double x1; double x2; })arg1 shouldShrink:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)applicationDidEnterBackground:(id)arg1;
- (bool)canPeel;
- (bool)canRotate;
- (bool)canScale;
- (void)commitDrag;
- (void)dealloc;
- (id)delegate;
- (id)dragImage;
- (struct CGPoint { double x1; double x2; })dragViewCenter;
- (double)dragViewRotation;
- (double)dragViewScale;
- (id)draggedSticker;
- (void)gestureRecognized:(id)arg1;
- (id)gestureRecognizer;
- (bool)hasMovedToWindow;
- (id)initWithDragImage:(id)arg1 inSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withSourcePoint:(struct CGPoint { double x1; double x2; })arg3 keyboardSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 keyboardSourcePoint:(struct CGPoint { double x1; double x2; })arg5 withGestureRecognizer:(id)arg6;
- (bool)isPressed;
- (struct CGPoint { double x1; double x2; })keyboardAnchorOffset;
- (id)keyboardDragView;
- (struct CGPoint { double x1; double x2; })keyboardDragViewCenter;
- (id)keyboardPanGestureRecognizer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardSourceRect;
- (id)keyboardWindowSourceView;
- (void)manuallyInitializeDragAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)manuallyUpdateDragPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)normalDragView;
- (void)panGestureRecognized:(id)arg1;
- (id)panGestureRecognizer;
- (struct CGPoint { double x1; double x2; })previousPanLocationInKeyboardView;
- (struct CGPoint { double x1; double x2; })previousPanLocationInView;
- (double)rotationAngle;
- (void)setAnchorOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCanPeel:(bool)arg1;
- (void)setCanRotate:(bool)arg1;
- (void)setCanScale:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragImage:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setHasMovedToWindow:(bool)arg1;
- (void)setKeyboardAnchorOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setKeyboardDragView:(id)arg1;
- (void)setKeyboardPanGestureRecognizer:(id)arg1;
- (void)setKeyboardSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setKeyboardWindowSourceView:(id)arg1;
- (void)setNormalDragView:(id)arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setPlusImageViewHidden:(bool)arg1;
- (void)setPressed:(bool)arg1;
- (void)setPreviousPanLocationInKeyboardView:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreviousPanLocationInView:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
