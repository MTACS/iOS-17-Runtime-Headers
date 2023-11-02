
@protocol EKIdentityProtocol <NSObject>

@required

- (NSURL *)URL;
- (NSString *)emailAddress;
- (NSString *)firstName;
- (NSString *)lastName;
- (NSString *)name;
- (NSString *)phoneNumber;

@optional

- (NSPredicate *)contactPredicate;
- (CNContact *)existingContact;
- (bool)isCurrentUserForScheduling;
- (bool)isCurrentUserForSharing;
- (CNContact *)newContact;

@end
