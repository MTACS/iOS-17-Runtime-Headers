
@interface CNKParticipantScreenShareInfoViewInternal : UIView <CNKParticipantScreenShareInfoViewProtocol> {
    void avatarImage;
    void avatarImageView;
    void backgroundBlurView;
    void customCornerRadius;
    void fullScreenConstraints;
    void isFullScreenMode;
    void nameLabel;
    void normalConstraints;
    void stackView;
}

@property (nonatomic, retain) UIImage *avatarImage;
@property (nonatomic) double customCornerRadius;
@property (nonatomic, readonly) double preferredHeight;

- (void).cxx_destruct;
- (id)avatarImage;
- (void)configureWith:(id)arg1 isFullScreenMode:(bool)arg2;
- (double)customCornerRadius;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)preferredHeight;
- (void)setAvatarImage:(id)arg1;
- (void)setCustomCornerRadius:(double)arg1;

@end
