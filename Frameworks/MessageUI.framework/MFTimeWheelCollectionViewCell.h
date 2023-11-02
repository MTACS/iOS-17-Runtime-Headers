
@interface MFTimeWheelCollectionViewCell : UICollectionViewListCell {
    <MFTimeWheelCollectionViewCellDelegate> * _delegate;
    UIDatePicker * _timePicker;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) <MFTimeWheelCollectionViewCellDelegate> *delegate;
@property (nonatomic, retain) NSDate *minimumDate;
@property (nonatomic, retain) UIDatePicker *timePicker;

+ (id)reusableIdentifier;

- (void).cxx_destruct;
- (id)date;
- (void)datePickerChanged:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)minimumDate;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (void)setTimePicker:(id)arg1;
- (id)timePicker;

@end
