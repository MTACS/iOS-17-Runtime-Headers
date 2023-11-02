
@interface SearchUIConfirmationHUDView : UIView {
    SearchUICheckView * _checkView;
    UIVisualEffectView * _effectView;
    UILabel * _textLabel;
}

@property (nonatomic, retain) SearchUICheckView *checkView;
@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (nonatomic, retain) UILabel *textLabel;

- (void).cxx_destruct;
- (void)animateCheckmark;
- (id)checkView;
- (id)effectView;
- (id)init;
- (void)layoutSubviews;
- (void)setCheckView:(id)arg1;
- (void)setEffectView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (id)textLabel;

@end
