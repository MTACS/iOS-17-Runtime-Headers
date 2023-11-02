
@interface DBUserAlertSheetView : UIView {
    UIStackView * _buttonStackView;
    id /* block */  _dismissHandler;
    UILabel * _messageLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIStackView *buttonStackView;
@property (nonatomic, readonly) id /* block */ dismissHandler;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_buttonFont;
- (id)_buttonWithAlertAction:(id)arg1;
- (id)_titleFont;
- (id)buttonStackView;
- (id /* block */)dismissHandler;
- (id)initWithAlert:(id)arg1 environmentConfiguration:(id)arg2;
- (id)messageLabel;
- (void)setButtonStackView:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
