
@interface PKCurrencyAmountEntryCollectionViewCell : UICollectionViewListCell <UITextFieldDelegate> {
    UITextField * _amountTextField;
    NSString * _currency;
    NSNumberFormatter * _currencyFormatter;
    <PKCurrencyAmountEntryCollectionViewCellDelegate> * _delegate;
    bool  _isEditable;
    NSString * _title;
    UIColor * _titleColor;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *currency;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKCurrencyAmountEntryCollectionViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEditable;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) UIColor *titleColor;

- (void).cxx_destruct;
- (void)_amountTextFieldValueChanged:(id)arg1;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (id)amount;
- (id)currency;
- (id)delegate;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEditable;
- (void)layoutSubviews;
- (void)setAmount:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsEditable:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (id)title;
- (id)titleColor;

@end
