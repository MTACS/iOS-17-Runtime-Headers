
@interface PKDateSelectorCollectionViewCell : UICollectionViewListCell {
    struct { 
        unsigned int horizontalAlignment; 
        unsigned int verticalAlignment; 
    }  _contentAlignment;
    NSDate * _date;
    UIDatePicker * _datePicker;
    <PKDateSelectorCollectionViewCellDelegate> * _delegate;
}

@property (nonatomic) struct { unsigned int x1; unsigned int x2; } contentAlignment;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) <PKDateSelectorCollectionViewCellDelegate> *delegate;
@property (nonatomic, retain) NSDate *maximumDate;
@property (nonatomic, retain) NSDate *minimumDate;

- (void).cxx_destruct;
- (void)_didUpdateDate:(id)arg1;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (bool)canBecomeFirstResponder;
- (struct { unsigned int x1; unsigned int x2; })contentAlignment;
- (id)date;
- (id)delegate;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)maximumDate;
- (id)minimumDate;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentAlignment:(struct { unsigned int x1; unsigned int x2; })arg1;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
