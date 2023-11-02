
@interface PKPeerPaymentRecurringPaymentMemoCell : UICollectionViewListCell <UITextFieldDelegate> {
    <PKPeerPaymentRecurringPaymentMemoCellDelegate> * _delegate;
    UILabel * _emojiLabel;
    UIButton * _iconButton;
    PKPeerPaymentRecurringPaymentMemoRowItem * _item;
    UITextField * _textField;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPeerPaymentRecurringPaymentMemoCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPeerPaymentRecurringPaymentMemoRowItem *item;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

@end
