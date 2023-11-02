
@protocol CNContactGroupPickerDelegate <NSObject>

@required

- (NSArray *)alreadyPickedGroups;
- (void)contactGroupPickerDidCancel:(CNContactPropertyGroupPickerViewController *)arg1;
- (void)contactGroupPickerDidFinish:(CNContactPropertyGroupPickerViewController *)arg1 withGroup:(NSString *)arg2;
- (CNPolicy *)policy;

@end
