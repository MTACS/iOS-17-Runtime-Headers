
@interface PXStatusViewModel : PXObservable {
    id /* block */  _action;
    NSString * _actionConfirmationAlertButtonTitle;
    NSString * _actionConfirmationAlertSubtitle;
    NSString * _actionConfirmationAlertTitle;
    NSString * _actionTitle;
    NSAttributedString * _attributedMessage;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, readonly, copy) id /* block */ action;
@property (nonatomic, readonly, copy) NSString *actionConfirmationAlertButtonTitle;
@property (nonatomic, readonly, copy) NSString *actionConfirmationAlertSubtitle;
@property (nonatomic, readonly, copy) NSString *actionConfirmationAlertTitle;
@property (nonatomic, readonly, copy) NSString *actionTitle;
@property (nonatomic, readonly, copy) NSAttributedString *attributedMessage;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)actionConfirmationAlertButtonTitle;
- (id)actionConfirmationAlertSubtitle;
- (id)actionConfirmationAlertTitle;
- (id)actionTitle;
- (id)attributedMessage;
- (id)description;
- (id)message;
- (void)performChanges:(id /* block */)arg1;
- (void)setAction:(id /* block */)arg1;
- (void)setActionConfirmationAlertButtonTitle:(id)arg1;
- (void)setActionConfirmationAlertSubtitle:(id)arg1;
- (void)setActionConfirmationAlertTitle:(id)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setAttributedMessage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
