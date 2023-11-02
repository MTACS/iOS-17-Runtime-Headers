
@interface NMBUIContentHeaderView : UIView {
    UIStackView * _contentStackView;
    UILabel * _detailTextLabel;
    UIProgressView * _progressView;
    UILabel * _textLabel;
}

@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic, readonly) UIProgressView *progressView;
@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (id)_contentStackView;
- (id)detailTextLabel;
- (id)progressView;
- (id)textLabel;

@end
