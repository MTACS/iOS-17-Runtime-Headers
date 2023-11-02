
@interface PKTransactionDetailQuestionCell : UITableViewCell {
    CNContact * _accountUserContact;
    UIImageView * _imageView;
    bool  _isTemplateLayout;
    PKContinuousButton * _leadingButton;
    UILabel * _message;
    <PKTransactionDetailQuestionCellDelegate> * _questionDelegate;
    bool  _smallDevice;
    NSString * _submittingAnswer;
    UILabel * _title;
    PKContinuousButton * _trailingButton;
    PKPaymentTransaction * _transaction;
}

@property (nonatomic) <PKTransactionDetailQuestionCellDelegate> *questionDelegate;

- (void).cxx_destruct;
- (void)_enableButtons:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_leadingButtonTapped:(id)arg1;
- (void)_trailingButtonTapped:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)questionDelegate;
- (void)setQuestionDelegate:(id)arg1;
- (void)setTransaction:(id)arg1 accountUserContact:(id)arg2 submittingAnswer:(id)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
