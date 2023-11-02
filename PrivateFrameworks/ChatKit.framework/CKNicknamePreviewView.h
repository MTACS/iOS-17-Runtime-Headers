
@interface CKNicknamePreviewView : UIView {
    CKCNSharingProfileAvatarItemProvider * _avatarItemProvider;
    NSArray * _avatarViews;
    CKTextBalloonView * _balloonView;
    CNContact * _contact;
    UILabel * _senderLabel;
    NSArray * _senderStrings;
    bool  _shouldStopAnimation;
}

@property (nonatomic, retain) CKCNSharingProfileAvatarItemProvider *avatarItemProvider;
@property (nonatomic, readonly) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration;
@property (nonatomic, retain) NSArray *avatarViews;
@property (nonatomic, retain) CKTextBalloonView *balloonView;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) UILabel *senderLabel;
@property (nonatomic, retain) NSArray *senderStrings;
@property (nonatomic) bool shouldStopAnimation;

- (void).cxx_destruct;
- (void)avatarDidFinishTransitionToAvatarAtIndex:(unsigned long long)arg1;
- (id)avatarItemProvider;
- (id)avatarItemProviderConfiguration;
- (id)avatarViews;
- (id)balloonImageFromMask:(id)arg1 withColor:(id)arg2;
- (id)balloonText;
- (id)balloonView;
- (void)beginAnimation;
- (id)contact;
- (void)didMoveToWindow;
- (id)flipAnimation;
- (id)imageForAvatarType:(long long)arg1;
- (id)initWithContact:(id)arg1 avatarRecord:(id)arg2;
- (void)layoutSubviews;
- (void)runFlipAnimationOnAvatarView:(id)arg1 completion:(id /* block */)arg2;
- (id)senderLabel;
- (id)senderStringForAvatarType:(long long)arg1;
- (id)senderStrings;
- (void)setAvatarItemProvider:(id)arg1;
- (void)setAvatarViews:(id)arg1;
- (void)setBalloonView:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setSenderLabel:(id)arg1;
- (void)setSenderLabelVisible:(bool)arg1 completion:(id /* block */)arg2;
- (void)setSenderStrings:(id)arg1;
- (void)setShouldStopAnimation:(bool)arg1;
- (bool)shouldStopAnimation;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBalloonTraitCollection;

@end
