
@interface LPCaptionBarView : LPComponentView <CAAnimationDelegate, LPComponentMediaPlayable> {
    LPComponentView<LPTextStyleable> * _aboveTopCaptionView;
    LPComponentView<LPTextStyleable> * _belowBottomCaptionView;
    LPComponentView<LPTextStyleable><LPSubtitleButtonContainer> * _bottomCaptionView;
    LPCaptionBarButtonView * _buttonView;
    LPCollaborationFooterView * _collaborationFooterView;
    NSRegularExpression * _emphasizedTextExpression;
    bool  _hasEverBuilt;
    LPInlineMediaPlaybackInformation * _inlinePlaybackInformation;
    LPCaptionBarAccessoryView * _leftAccessoryView;
    LPComponentView * _leftIconBadgeView;
    LPComponentView * _leftIconView;
    LPPlayButtonView * _playButton;
    LPCaptionBarPresentationProperties * _presentationProperties;
    LPCaptionBarAccessoryView * _rightAccessoryView;
    LPComponentView * _rightIconBadgeView;
    LPComponentView * _rightIconView;
    LPCaptionBarStyle * _style;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textSafeAreaInset;
    LPVerticalTextStackView * _textStackView;
    LPComponentView<LPTextStyleable> * _topCaptionView;
    bool  _useProgressSpinner;
}

@property (nonatomic, retain) LPCollaborationFooterView *collaborationFooterView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSRegularExpression *emphasizedTextExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textSafeAreaInset;
@property (nonatomic) bool useProgressSpinner;

- (void).cxx_destruct;
- (void)_buildViewsForCaptionBarIfNeeded;
- (struct CGSize { double x1; double x2; })_layoutCaptionBarForSize:(struct CGSize { double x1; double x2; })arg1 applyingLayout:(bool)arg2;
- (void)animateInWithBaseAnimation:(id)arg1 currentTime:(double)arg2;
- (void)animateOut;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)button;
- (id)collaborationFooterView;
- (id)emphasizedTextExpression;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 style:(id)arg2 presentationProperties:(id)arg3;
- (void)layoutComponentView;
- (id)playable;
- (id)primaryIconView;
- (void)setCollaborationFooterView:(id)arg1;
- (void)setEmphasizedTextExpression:(id)arg1;
- (void)setPlaybackInformation:(id)arg1;
- (void)setPresentationProperties:(id)arg1;
- (void)setTextSafeAreaInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUseProgressSpinner:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleButton;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textSafeAreaInset;
- (void)updateTextStack;
- (bool)useProgressSpinner;

@end
