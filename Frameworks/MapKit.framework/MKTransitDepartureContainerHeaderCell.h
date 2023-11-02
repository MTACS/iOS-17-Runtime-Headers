
@interface MKTransitDepartureContainerHeaderCell : MKCustomSeparatorCell {
    MKTransitDepartureContainerHeaderView * _headerView;
}

@property (nonatomic, retain) MKTransitDepartureContainerHeaderViewModel *viewModel;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
