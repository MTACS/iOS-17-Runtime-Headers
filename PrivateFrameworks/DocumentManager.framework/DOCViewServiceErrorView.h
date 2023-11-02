
@interface DOCViewServiceErrorView : UIView {
    <DOCViewServiceErrorViewDelegate> * _delegate;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    UIButton * _tryAgainButton;
}

@property <DOCViewServiceErrorViewDelegate> *delegate;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIButton *tryAgainButton;

- (void).cxx_destruct;
- (id)delegate;
- (void)didTapTryAgain;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTryAgainButton:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)tryAgainButton;

@end
