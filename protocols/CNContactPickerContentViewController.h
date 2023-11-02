
@protocol CNContactPickerContentViewController <CNContactPickerServiceProtocol>

@required

- (UIBarButtonItem *)addContactBarButtonItem;
- (<CNContactPickerContentDelegate> *)delegate;
- (void)invalidate;
- (void)invalidateSelectionAnimated:(bool)arg1;
- (UINavigationController *)navigationController;
- (void)setDelegate:(id <CNContactPickerContentDelegate>)arg1;

@end
