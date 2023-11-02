
@interface PXInvitationRecipient : NSObject <PLSInvitationRecipient> {
    NSMutableArray * _allEmails;
    NSMutableArray * _allPhones;
    NSString * _firstName;
    NSString * _invalidAddressString;
    NSString * _lastName;
    CNComposeRecipient * _recipient;
    NSString * _selectedEmailString;
    NSString * _selectedPhoneString;
}

@property (nonatomic, readonly) NSArray *allEmails;
@property (nonatomic, readonly) NSArray *allPhones;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *invalidAddressString;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSString *selectedEmailString;
@property (nonatomic, readonly, copy) NSString *selectedPhoneString;
@property (readonly) Class superclass;

+ (id)_validEmailAddressFromComposeRecipient:(id)arg1;
+ (id)_validPhoneNumberFromString:(id)arg1;

- (void).cxx_destruct;
- (id)allEmails;
- (id)allPhones;
- (id)description;
- (id)displayName;
- (id)firstName;
- (id)init;
- (id)initWithRecipient:(id)arg1;
- (id)invalidAddressString;
- (id)lastName;
- (id)selectedEmailString;
- (id)selectedPhoneString;

@end
