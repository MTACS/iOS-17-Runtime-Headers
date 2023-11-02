
@interface SUUIRedeemITunesPassLearnMoreView : UIView {
    UIButton * _button;
    UILabel * _explanationLabel;
    UIImageView * _headerImageView;
}

@property (nonatomic, readonly) UIControl *button;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, copy) NSString *explanationString;
@property (nonatomic, retain) UIImage *headerImage;

- (void).cxx_destruct;
- (id)button;
- (id)buttonTitle;
- (id)explanationString;
- (id)headerImage;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setExplanationString:(id)arg1;
- (void)setHeaderImage:(id)arg1;

@end
