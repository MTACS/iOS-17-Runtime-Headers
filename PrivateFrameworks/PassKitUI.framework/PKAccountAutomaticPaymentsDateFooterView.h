
@interface PKAccountAutomaticPaymentsDateFooterView : UITableViewHeaderFooterView {
    PKMonthDayCollectionViewController * _collectionViewController;
}

@property (nonatomic, retain) PKMonthDayCollectionViewController *collectionViewController;

- (void).cxx_destruct;
- (id)collectionViewController;
- (void)layoutSubviews;
- (void)setCollectionViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
