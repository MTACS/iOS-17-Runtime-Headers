
@protocol HKPrescriptionPickerCellDelegate <NSObject>

@required

- (void)didTapShowDetailsButtonForCell:(HKPrescriptionPickerCell *)arg1;
- (void)didToggleSwitchForCell:(HKPrescriptionPickerCell *)arg1 isOn:(bool)arg2;

@end
