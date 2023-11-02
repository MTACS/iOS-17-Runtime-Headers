
@interface PKPaymentAuthorizationSummaryItemsCell : PKTableViewCell {
    NSMutableArray * _constraints;
    PKPaymentAuthorizationSummaryItemsView * _summaryItemsView;
}

@property (nonatomic, readonly) PKPaymentAuthorizationSummaryItemsView *summaryItemsView;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)summaryItemsView;

@end
