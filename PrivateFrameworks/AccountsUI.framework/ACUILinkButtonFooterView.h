
@interface ACUILinkButtonFooterView : UIView <PSHeaderFooterView> {
    long long  _desiredTextAlignment;
    ACUILinkButton * _linkButton;
}

@property (nonatomic) long long alignment;

- (void).cxx_destruct;
- (long long)alignment;
- (id)initWithButton:(id)arg1;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (void)setAlignment:(long long)arg1;

@end
