
@interface HUAlarmEditView : UIView {
    bool  _accessorySupportsMusicAlarm;
    UITableView * _settingsTable;
    UIDatePicker * _timePicker;
}

@property (nonatomic) bool accessorySupportsMusicAlarm;
@property (nonatomic, readonly) UITableView *settingsTable;
@property (nonatomic, readonly) UIDatePicker *timePicker;

- (void).cxx_destruct;
- (bool)accessorySupportsMusicAlarm;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 supportsMusicAlarm:(bool)arg2;
- (void)layoutSubviews;
- (void)setAccessorySupportsMusicAlarm:(bool)arg1;
- (id)settingsTable;
- (id)timePicker;

@end
