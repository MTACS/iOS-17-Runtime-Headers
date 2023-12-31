
@interface CNTonePickerController : UINavigationController {
    TKTonePickerViewController * _tonePicker;
}

@property (nonatomic) <CNPickerControllerDelegate> *delegate;
@property (nonatomic, retain) TKTonePickerViewController *tonePicker;

- (void).cxx_destruct;
- (void)cancelButton:(id)arg1;
- (void)doneButton:(id)arg1;
- (id)initWithAlertType:(long long)arg1 activityAlert:(id)arg2;
- (void)setTonePicker:(id)arg1;
- (id)tonePicker;

@end
