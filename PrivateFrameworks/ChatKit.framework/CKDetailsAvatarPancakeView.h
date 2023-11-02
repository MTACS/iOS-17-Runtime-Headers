
@interface CKDetailsAvatarPancakeView : UIView {
    CKAvatarView * _bottomAvatar;
    UIView * _bottomAvatarCutOutView;
    CKAvatarView * _middleAvatar;
    CKAvatarView * _topAvatar;
    UIView * _topAvatarCutOutView;
}

@property (nonatomic, retain) CKAvatarView *bottomAvatar;
@property (nonatomic, retain) UIView *bottomAvatarCutOutView;
@property (nonatomic, retain) CKAvatarView *middleAvatar;
@property (nonatomic, retain) CKAvatarView *topAvatar;
@property (nonatomic, retain) UIView *topAvatarCutOutView;

- (void).cxx_destruct;
- (void)addConstraints;
- (id)bottomAvatar;
- (id)bottomAvatarCutOutView;
- (id)createAvatarCutOutView;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 avatarViews:(id)arg2;
- (id)middleAvatar;
- (void)setBottomAvatar:(id)arg1;
- (void)setBottomAvatarCutOutView:(id)arg1;
- (void)setMiddleAvatar:(id)arg1;
- (void)setTopAvatar:(id)arg1;
- (void)setTopAvatarCutOutView:(id)arg1;
- (id)topAvatar;
- (id)topAvatarCutOutView;

@end
