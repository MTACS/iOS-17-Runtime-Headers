
@protocol AFUIContactPropertyPickerDelegate

@required

- (void)contactPickerDidCancel;
- (bool)isSingleLineDocument;
- (void)userSelectedContactProperties:(NSDictionary *)arg1;

@end
