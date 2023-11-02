
@interface DMCEnrollmentConfirmationView : UIView {
    id /* block */  _cancelAction;
    UIButton * _cancelButton;
    id /* block */  _confirmationAction;
    OBBoldTrayButton * _confirmationButton;
    bool  _confirmationButtonEnabled;
    NSString * _confirmationText;
    bool  _inProgress;
}

@property (nonatomic, copy) id /* block */ cancelAction;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, copy) id /* block */ confirmationAction;
@property (nonatomic, retain) OBBoldTrayButton *confirmationButton;
@property (getter=isConfirmationButtonEnabled, nonatomic) bool confirmationButtonEnabled;
@property (nonatomic, retain) NSString *confirmationText;
@property (nonatomic) bool inProgress;

- (void).cxx_destruct;
- (id /* block */)cancelAction;
- (id)cancelButton;
- (void)cancelButtonTapped:(id)arg1;
- (id /* block */)confirmationAction;
- (id)confirmationButton;
- (void)confirmationButtonTapped:(id)arg1;
- (id)confirmationText;
- (bool)inProgress;
- (id)initWithConfirmationText:(id)arg1 cancelText:(id)arg2 confirmationAction:(id /* block */)arg3 cancelAction:(id /* block */)arg4;
- (bool)isConfirmationButtonEnabled;
- (void)layoutSubviews;
- (void)setCancelAction:(id /* block */)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setConfirmationAction:(id /* block */)arg1;
- (void)setConfirmationButton:(id)arg1;
- (void)setConfirmationButtonEnabled:(bool)arg1;
- (void)setConfirmationText:(id)arg1;
- (void)setInProgress:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
