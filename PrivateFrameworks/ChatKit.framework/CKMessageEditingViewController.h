
@interface CKMessageEditingViewController : UIViewController <CKMessageEditingViewDelegate, CKTranscriptOverlayViewControllerProtocol> {
    bool  _animatingIn;
    bool  _animatingOut;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _editedMessageAchorPosition;
    double  _entryViewOffset;
    <CKMessageEditingViewControllerInteractionDelegate> * _interactionDelegate;
    bool  _isInitialLoad;
    CKMessageEditingView * _messageEditingView;
    NSDictionary * _proofreadingInfo;
    <CKTranscriptOverlayTransitionDelegate> * _transcriptOverlayTransitionDelegate;
    UIVisualEffectView * _transcriptOverlayView;
    CKTranscriptOverlayTransitionContext * _transitionContext;
    double  _viewHeightForEditedMessageAnchorPosition;
}

@property (nonatomic) bool animatingIn;
@property (nonatomic) bool animatingOut;
@property (nonatomic, readonly) UIView *balloonViewForAlignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } editedMessageAchorPosition;
@property (nonatomic) double entryViewOffset;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CKMessageEditingViewControllerInteractionDelegate> *interactionDelegate;
@property (nonatomic) bool isInitialLoad;
@property (nonatomic, retain) CKMessageEditingView *messageEditingView;
@property (nonatomic, retain) NSDictionary *proofreadingInfo;
@property (readonly) Class superclass;
@property (nonatomic) <CKTranscriptOverlayTransitionDelegate> *transcriptOverlayTransitionDelegate;
@property (nonatomic, retain) UIVisualEffectView *transcriptOverlayView;
@property (nonatomic, retain) CKTranscriptOverlayTransitionContext *transitionContext;
@property (nonatomic) double viewHeightForEditedMessageAnchorPosition;
@property (nonatomic, readonly) bool wantsBackingTranscriptToIgnoreContentOffsetChanges;

- (void).cxx_destruct;
- (void)_animateIn;
- (void)_animateOutWithState:(long long)arg1;
- (void)_applyProofreadingIfNecessary;
- (void)_informDelegateOfUpdatedBalloonViewFrame;
- (void)_requestDismissal;
- (bool)animatingIn;
- (bool)animatingOut;
- (id)balloonViewForAlignment;
- (bool)becomeFirstResponder;
- (void)configureForInitialAppearance;
- (void)dismissAndRejectChanges;
- (void)dismissIfNoChanges;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editedMessageAchorPosition;
- (double)entryViewOffset;
- (id)initWithTransitionContext:(id)arg1;
- (id)interactionDelegate;
- (bool)isInitialLoad;
- (BOOL)messageEditingColor;
- (id)messageEditingView;
- (bool)messageEditingViewBalloonHasTail;
- (void)messageEditingViewConfirmButtonSelected:(id)arg1;
- (void)messageEditingViewDidUpdateBalloonViewContent:(id)arg1;
- (void)messageEditingViewDidUpdateBalloonViewFrame:(id)arg1;
- (double)messageEditingViewDismissAnimationBalloonMaxWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })messageEditingViewDismissAnimationContentInsets;
- (void)messageEditingViewRejectButtonSelected:(id)arg1;
- (id)proofreadingInfo;
- (void)setAnimatingIn:(bool)arg1;
- (void)setAnimatingOut:(bool)arg1;
- (void)setEditedMessageAchorPosition:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEntryViewOffset:(double)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setIsInitialLoad:(bool)arg1;
- (void)setMessageEditingView:(id)arg1;
- (void)setProofreadingInfo:(id)arg1;
- (void)setTranscriptOverlayTransitionDelegate:(id)arg1;
- (void)setTranscriptOverlayView:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setViewHeightForEditedMessageAnchorPosition:(double)arg1;
- (void)transcriptContentInsetsDidChange;
- (void)transcriptOverlayTapGestureRecognized:(id)arg1;
- (id)transcriptOverlayTransitionDelegate;
- (id)transcriptOverlayView;
- (id)transitionContext;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (double)viewHeightForEditedMessageAnchorPosition;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsBackingTranscriptToIgnoreContentOffsetChanges;

@end
