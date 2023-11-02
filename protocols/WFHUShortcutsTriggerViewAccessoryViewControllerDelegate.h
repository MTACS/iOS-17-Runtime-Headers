
@protocol WFHUShortcutsTriggerViewAccessoryViewControllerDelegate <NSObject>

@required

- (void)servicePickerDidCancel:(UIViewController *)arg1;
- (void)servicePickerDidFinish:(UIViewController *)arg1 selectedServices:(NSSet *)arg2;

@end
