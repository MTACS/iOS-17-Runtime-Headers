
@protocol PLSInvitationRecipient <NSObject>

@required

- (NSArray *)allEmails;
- (NSArray *)allPhones;
- (NSString *)firstName;
- (NSString *)lastName;

@end
