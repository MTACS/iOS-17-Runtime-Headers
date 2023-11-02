
@protocol WFTagPickerViewControllerDelegate <NSObject>

@required

- (void)tagPicker:(WFTagPickerViewController *)arg1 didSelectTags:(NSArray *)arg2;
- (void)tagPickerDidCancel:(WFTagPickerViewController *)arg1;

@end
