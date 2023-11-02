
@interface CKAvatarView : CNAvatarView {
    NSString * _preferredHandle;
    UIViewController * _presentingViewController;
}

@property (setter=_ck_setContextToken:, nonatomic, retain) NSString *_ck_contextToken;
@property (nonatomic) NSString *preferredHandle;
@property (nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)_ck_contextToken;
- (void)_ck_setContextToken:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)preferredHandle;
- (id)presentingViewController;
- (void)setHighlighted:(bool)arg1;
- (void)setPreferredHandle:(id)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
