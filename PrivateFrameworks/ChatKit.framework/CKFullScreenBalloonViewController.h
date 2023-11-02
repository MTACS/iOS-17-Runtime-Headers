
@interface CKFullScreenBalloonViewController : UIViewController <CKAdaptivePresentedControllerProtocol, CKMessageAcknowledgmentPickerBarDelegate, UIGestureRecognizerDelegate> {
    CKMessagePartChatItem * _chatItem;
    <CKFullScreenBalloonViewControllerDelegate> * _delegate;
    BOOL  _forcedOrientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _gradientFrame;
    bool  _isGroupConversation;
    UIView * _keyboardSnapshotView;
    CKMessageAcknowledgmentPickerBarViewController * _pickerBar;
    bool  _preserveModalPresentationStyle;
    UIButton * _replyButton;
    CKMessagePartChatItem * _supplementaryLayoutChatItem;
    id  _supplementaryLayoutContext;
    UIGestureRecognizer * _tapRecognizer;
    UIView * _tintView;
    bool  _useForcedOrientation;
    bool  _wantsWindowedPresentation;
}

@property (nonatomic, readonly) UIView *balloonWrapperView;
@property (nonatomic, readonly) CKMessagePartChatItem *chatItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CKFullScreenBalloonViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forcedOrientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } gradientFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isGroupConversation;
@property (nonatomic, retain) UIView *keyboardSnapshotView;
@property (nonatomic, readonly) CKMessageAcknowledgmentPickerBarViewController *pickerBar;
@property (nonatomic) bool preserveModalPresentationStyle;
@property (nonatomic, retain) UIButton *replyButton;
@property (nonatomic) bool shouldHidePresentingWindow;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKMessagePartChatItem *supplementaryLayoutChatItem;
@property (nonatomic, retain) id supplementaryLayoutContext;
@property (nonatomic, retain) UIGestureRecognizer *tapRecognizer;
@property (nonatomic, readonly) UIView *tintView;
@property (nonatomic) bool useForcedOrientation;
@property (nonatomic) bool wantsWindowedPresentation;

- (void).cxx_destruct;
- (void)_performClosingAnimationsAnimated:(bool)arg1 withSendAnimation:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)addTapRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (id)balloonWrapperView;
- (id)chatItem;
- (bool)constrainToPresentingVCBounds;
- (void)dealloc;
- (id)delegate;
- (void)dismissImmediatelyWithNoAnimations;
- (void)dismissTapGestureRecognized:(id)arg1;
- (bool)forceWindowedPresentation;
- (BOOL)forcedOrientation;
- (bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })gradientFrame;
- (id)initWithChatItem:(id)arg1 gradientReferenceView:(id)arg2 isGroupConversation:(bool)arg3 delegate:(id)arg4;
- (bool)isGroupConversation;
- (id)keyboardSnapshotView;
- (void)loadView;
- (void)messageAcknowledgmentPickerViewController:(id)arg1 didPickAcknowledgment:(long long)arg2;
- (void)performCancelAnimationWithCompletion:(id /* block */)arg1;
- (void)performClosingAnimationsAnimated:(bool)arg1 withSendAnimation:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)performInitialAnimations;
- (void)performSendAndCloseAnimationWithCompletion:(id /* block */)arg1;
- (id)pickerBar;
- (bool)preserveModalPresentationStyle;
- (void)removeTapRecogonizer;
- (id)replyButton;
- (void)replyButtonPressed:(id)arg1;
- (void)setForcedOrientation:(BOOL)arg1;
- (void)setKeyboardSnapshotView:(id)arg1;
- (void)setPreserveModalPresentationStyle:(bool)arg1;
- (void)setReplyButton:(id)arg1;
- (void)setSupplementaryLayoutChatItem:(id)arg1;
- (void)setSupplementaryLayoutContext:(id)arg1;
- (void)setTapRecognizer:(id)arg1;
- (void)setUseForcedOrientation:(bool)arg1;
- (void)setWantsWindowedPresentation:(bool)arg1;
- (void)setupReplyButton;
- (bool)shouldAutorotate;
- (id)supplementaryLayoutChatItem;
- (id)supplementaryLayoutContext;
- (id)tapRecognizer;
- (id)tintView;
- (bool)useForcedOrientation;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (bool)wantsWindowedPresentation;

@end
