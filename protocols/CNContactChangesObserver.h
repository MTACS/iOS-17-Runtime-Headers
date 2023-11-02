
@protocol CNContactChangesObserver <NSObject>

@required

- (void)contactDidChange:(CNContact *)arg1;

@optional

- (void)contactWithIdentifierWasDeleted:(NSString *)arg1;

@end
