
@interface PKPaymentTransactionCollectionViewCell : PKDashboardCollectionViewCell <PKPaymentTransactionCellResponder> {
    bool  _deletable;
    NSString * _identifier;
    bool  _isEditing;
    UIImageView * _multiselectImageView;
    PKPaymentTransactionView * _transactionView;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeletable, nonatomic) bool deletable;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPaymentTransactionView *transactionView;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDeletable;
- (void)layoutSubviews;
- (double)maxWidthForTransactionCellInWidth:(double)arg1;
- (void)prepareForReuse;
- (void)setDeletable:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)transactionView;
- (void)updateConfigurationUsingState:(id)arg1;

@end
