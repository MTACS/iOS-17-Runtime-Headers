
@interface PKWeekdaySelectionCollectionViewCell : UICollectionViewListCell {
    <PKWeekdaySelectorDelegate> * _delegate;
    PKWeekdaySelector * _weekdaySelector;
}

@property (nonatomic) <PKWeekdaySelectorDelegate> *delegate;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (id)delegate;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedDays:(id)arg1 possibleDays:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
