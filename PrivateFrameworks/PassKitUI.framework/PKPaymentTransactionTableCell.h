
@interface PKPaymentTransactionTableCell : PKTableViewCell <PKPaymentTransactionCellResponder> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalInsets;
    NSString * _identifier;
    PKPaymentTransactionView * _transactionView;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } additionalInsets;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeletable, nonatomic) bool deletable;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIColor *primaryColor;
@property (nonatomic, retain) UIColor *secondaryColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPaymentTransactionView *transactionView;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalInsets;
- (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)primaryColor;
- (id)secondaryColor;
- (void)setAdditionalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setSecondaryColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)transactionView;

@end
