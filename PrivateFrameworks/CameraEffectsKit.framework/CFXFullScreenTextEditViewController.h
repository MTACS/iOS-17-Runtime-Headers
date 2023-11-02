
@interface CFXFullScreenTextEditViewController : UIViewController <CFXEffectEditorViewDelegate> {
    JFXOverlayEffectDebugViewOptions * _debugOptions;
    UIView * _debugView;
    <CFXFullScreenTextEditViewControllerDelegate> * _delegate;
    UIView * _dimmingView;
    CFXEffectEditorView * _effectEditor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _effectEditorFrameRelativeToScreen;
    bool  _effectWasRemoved;
    bool  _insertingEffect;
    bool  _isRunningAnimation;
    CFXEffect * _textEffect;
    CFXEffect * _workingEffect;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) JFXOverlayEffectDebugViewOptions *debugOptions;
@property (nonatomic, retain) UIView *debugView;
@property (nonatomic, readonly) <CFXFullScreenTextEditViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *dimmingView;
@property (nonatomic, retain) CFXEffectEditorView *effectEditor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } effectEditorFrameRelativeToScreen;
@property (nonatomic) bool effectWasRemoved;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool insertingEffect;
@property (nonatomic) bool isRunningAnimation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CFXEffect *textEffect;
@property (nonatomic, retain) CFXEffect *workingEffect;

+ (id)CFX_fadeTimingParameters;
+ (bool)displayFullScreenTextEditorForEffect:(id)arg1 inViewController:(id)arg2 delegate:(id)arg3 cameraViewWindowFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 insertingEffect:(bool)arg5;
+ (bool)isFullScreenTextEditorPresented;
+ (void)notifyCameraViewWindowFrameChanged:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (void)removeFullScreenTextEditor;
+ (void)resign;

- (void).cxx_destruct;
- (void)CFX_animateWithDuration:(double)arg1 animatingIn:(bool)arg2 completion:(id /* block */)arg3;
- (void)configureWorkingEffect;
- (void)dealloc;
- (id)debugOptions;
- (id)debugView;
- (id)delegate;
- (void)didTappedEmptyDimmedArea:(id)arg1;
- (id)dimmingView;
- (id)effectEditor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectEditorFrameRelativeToScreen;
- (void)effectEditorView:(id)arg1 applyAnimationTransformsToEffect:(id)arg2 transforms:(id)arg3;
- (id)effectEditorView:(id)arg1 beginEditingAnimationFromFrameForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)effectEditorView:(id)arg1 beginEditingAnimationToFrameForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)effectEditorView:(id)arg1 calculateAnimatedFaceTrackingTransformWithCurrentFaceTrackingDataFromTrackingType:(long long)arg2 interpolatedWithFaceTrackingTransform:(id)arg3 toTrackingType:(long long)arg4 atAnimationProgress:(float)arg5;
- (void)effectEditorView:(id)arg1 didBeginEditingTextForEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 didCompleteBeginEditingAnimationForEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 didCompleteEndEditingAnimationForEffect:(id)arg2 completion:(id /* block */)arg3;
- (void)effectEditorView:(id)arg1 didEditTextForEffect:(id)arg2 newText:(id)arg3;
- (void)effectEditorView:(id)arg1 didEndEditingTextForEffect:(id)arg2 wasCancelled:(bool)arg3;
- (void)effectEditorView:(id)arg1 didRemoveEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 didStartBeginEditingAnimationForEffect:(id)arg2 completion:(id /* block */)arg3;
- (void)effectEditorView:(id)arg1 didStartEndEditingAnimationForEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 didTransformEffect:(id)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (double)effectEditorView:(id)arg1 durationForBeginEditingAnimationForEffect:(id)arg2;
- (double)effectEditorView:(id)arg1 durationForEndEditingAnimationForEffect:(id)arg2;
- (id)effectEditorView:(id)arg1 effectAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)effectEditorView:(id)arg1 endEditingAnimationFromFrameForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)effectEditorView:(id)arg1 endEditingAnimationToFrameForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectEditorView:(id)arg1 frameForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectEditorView:(id)arg1 hitAreaBoundingFrameForEffect:(id)arg2 adjustForMinimumSize:(bool)arg3 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)effectEditorView:(id)arg1 isEffectAtPoint:(struct CGPoint { double x1; double x2; })arg2 effect:(id)arg3;
- (bool)effectEditorView:(id)arg1 isFaceTrackingDataAvailableForEffect:(id)arg2;
- (bool)effectEditorView:(id)arg1 isFaceTrackingEffect:(id)arg2;
- (unsigned long long)effectEditorView:(id)arg1 maximumTextLengthForEffect:(id)arg2;
- (id)effectEditorView:(id)arg1 overlayEffectFrameForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGPoint { double x1; double x2; })effectEditorView:(id)arg1 removeButtonPositionForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)effectEditorView:(id)arg1 shouldDisableEditingAnimationForEffect:(id)arg2;
- (bool)effectEditorView:(id)arg1 shouldEditTextForEffect:(id)arg2;
- (struct CGPoint { double x1; double x2; })effectEditorView:(id)arg1 spacingBetweenCenterPointOfEffect:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)effectEditorView:(id)arg1 textEditingPropertiesForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)effectEditorView:(id)arg1 textForEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 willBeginAnimationAfterEditingEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 willBeginAnimationBeforeEditingEffect:(id)arg2;
- (void)effectEditorViewDidBeginEditing:(id)arg1;
- (void)effectEditorViewDidEndEditing:(id)arg1;
- (bool)effectEditorViewShouldPreviewEditEffect:(id)arg1;
- (bool)effectWasRemoved;
- (id)initWithTextEffect:(id)arg1 CGSize:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 insertingEffect:(bool)arg3 delegate:(id)arg4;
- (bool)insertingEffect;
- (bool)isRunningAnimation;
- (void)keyboardDidHide:(id)arg1;
- (void)scaleTextToFitTextEditingBounds:(bool)arg1;
- (void)setDebugOptions:(id)arg1;
- (void)setDebugView:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setEffectEditor:(id)arg1;
- (void)setEffectEditorFrameRelativeToScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEffectWasRemoved:(bool)arg1;
- (void)setInsertingEffect:(bool)arg1;
- (void)setIsRunningAnimation:(bool)arg1;
- (void)setWorkingEffect:(id)arg1;
- (id)textEffect;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (id)workingEffect;

@end
