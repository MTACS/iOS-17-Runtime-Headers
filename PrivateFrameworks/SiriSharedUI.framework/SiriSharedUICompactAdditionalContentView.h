
@interface SiriSharedUICompactAdditionalContentView : SiriSharedUIStandardView <SiriSharedUICompactAdditionalContentViewHosting> {
    UIView * _containerView;
    <SiriSharedUICompactAdditionalContentViewDelegate> * _delegate;
    bool  _isInAmbient;
    long long  _platterCategory;
    PLPlatterView * _platterView;
    NSMutableArray * _prepareForUpdatesPendingCompletionBlocks;
    bool  _requestedAppearanceAnimation;
    bool  _runningAnimatedFadeOut;
    bool  _runningPrepareForUpdates;
    UIView * _snippetContainerView;
    NSArray * _snippetViews;
    SiriSharedUIAnimationContext * animationContextForFrameAndLayoutUpdate;
    long long  attachmentType;
    double  attachmentYOffset;
    SiriSharedUIViewStackConstraints * stackConstraints;
    <SiriSharedUIStackableContentDelegate> * stackContainerDelegate;
}

@property (nonatomic, retain) SiriSharedUIAnimationContext *animationContextForFrameAndLayoutUpdate;
@property (nonatomic) long long attachmentType;
@property (nonatomic) double attachmentYOffset;
@property (nonatomic, retain) NSArray *customAttachmentConstraints;
@property (nonatomic) <SiriSharedUICompactAdditionalContentViewDelegate> *delegate;
@property (nonatomic) bool isInAmbient;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } portraitContentSize;
@property (nonatomic, retain) UIView *snippetContainerView;
@property (nonatomic, copy) NSArray *snippetViews;
@property (nonatomic, retain) SiriSharedUIViewStackConstraints *stackConstraints;
@property (nonatomic) <SiriSharedUIStackableContentDelegate> *stackContainerDelegate;
@property (nonatomic) bool useLowerPriorityHeightConstraint;

- (void).cxx_destruct;
- (void)_adjustCornerRadiusForSnippetView:(id)arg1;
- (long long)_animatedPresentationType;
- (id)_conversationAppearAnimation;
- (id)_conversationDisappearAnimation;
- (struct CGSize { double x1; double x2; })_fittingSize;
- (void)_setupSubviews;
- (struct CGSize { double x1; double x2; })_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forSnippet:(id)arg2;
- (struct CGSize { double x1; double x2; })_sizeThatFitsAllSnippets:(struct CGSize { double x1; double x2; })arg1;
- (void)animateAppearanceIfNeeded;
- (void)animateFadeOutWithCompletion:(id /* block */)arg1;
- (id)animationContextForFrameAndLayoutUpdate;
- (long long)attachmentType;
- (double)attachmentYOffset;
- (id)delegate;
- (void)didCompleteAnimatedFadeOut;
- (id)hostingView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 platterCategory:(long long)arg2;
- (bool)isInAmbient;
- (bool)layerHasOpacity;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })portraitContentSize;
- (id)prepareForUpdatesPendingCompletionBlocks;
- (void)prepareForUpdatesToSnippetViews:(bool)arg1;
- (void)relayout;
- (void)setAnimationContextForFrameAndLayoutUpdate:(id)arg1;
- (void)setAttachmentType:(long long)arg1;
- (void)setAttachmentYOffset:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsInAmbient:(bool)arg1;
- (void)setSnippetContainerView:(id)arg1;
- (void)setSnippetViews:(id)arg1;
- (void)setStackConstraints:(id)arg1;
- (void)setStackContainerDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)snippetContainerView;
- (void)snippetContentDidUpdate;
- (id)snippetViews;
- (id)stackConstraints;
- (id)stackContainerDelegate;
- (void)updateContentSizeWithAnimation:(bool)arg1;

@end
