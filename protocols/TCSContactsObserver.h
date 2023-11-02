
@protocol TCSContactsObserver <NSObject>

@optional

- (void)contactBecameAccepted:(CNContact *)arg1;
- (void)destinationsDidChange:(TCSContacts *)arg1;
- (void)recencyDidChange:(TCSContacts *)arg1;

@end
