
@interface SearchUICommandCardSectionView : SearchUICardSectionView {
    UIView * _checkmarkImageView;
    TLKSimpleRowView * _rowView;
}

@property (nonatomic, retain) UIView *checkmarkImageView;
@property (nonatomic, retain) TLKSimpleRowView *rowView;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)checkmarkImageView;
- (void)fetchStateForNewRowModel:(id)arg1;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (id)rowView;
- (void)setCheckmarkImageView:(id)arg1;
- (void)setRowView:(id)arg1;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
