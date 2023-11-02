
@interface NMBUIAlertHeaderView : UIView {
    UIView * _backgroundView;
    UIStackView * _contentStackView;
    UILabel * _detailTextLabel;
    UILabel * _textLabel;
}

@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (id)_backgroundView;
- (id)_contentStackView;
- (id)detailTextLabel;
- (id)textLabel;
- (void)tintColorDidChange;

@end
