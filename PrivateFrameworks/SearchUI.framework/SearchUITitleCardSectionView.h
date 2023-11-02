
@interface SearchUITitleCardSectionView : SearchUICardSectionView {
    NUIContainerBoxView * _containerView;
    TLKLabel * _label;
}

@property (nonatomic, retain) NUIContainerBoxView *containerView;
@property (nonatomic, retain) TLKLabel *label;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)containerView;
- (id)label;
- (void)setContainerView:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
