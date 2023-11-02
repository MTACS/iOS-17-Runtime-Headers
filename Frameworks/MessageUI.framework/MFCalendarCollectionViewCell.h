
@interface MFCalendarCollectionViewCell : UICollectionViewListCell {
    UIDatePicker * _datePicker;
    <MFCalendarCollectionViewCellDelegate> * _delegate;
}

@property (nonatomic, retain) UIDatePicker *datePicker;
@property (nonatomic) <MFCalendarCollectionViewCellDelegate> *delegate;

+ (id)reusableIdentifier;

- (void).cxx_destruct;
- (id)datePicker;
- (void)datePickerChanged:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDatePicker:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateCalendarDate:(id)arg1;

@end
