
@interface CNContactGridClippingView : UIView {
    CAShapeLayer * _actionsMaskLayer;
    CNAvatarView * _avatarView;
}

@property (nonatomic, retain) CAShapeLayer *actionsMaskLayer;
@property (nonatomic) CNAvatarView *avatarView;
@property (nonatomic) bool masksToAvatar;

- (void).cxx_destruct;
- (id)actionsMaskLayer;
- (id)avatarView;
- (void)layoutSubviews;
- (bool)masksToAvatar;
- (void)setActionsMaskLayer:(id)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setMasksToAvatar:(bool)arg1;

@end
