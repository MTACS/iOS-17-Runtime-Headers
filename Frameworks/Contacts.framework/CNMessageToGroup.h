
@interface CNMessageToGroup : NSObject {
    CNContactFormatter * _contactFormatter;
}

@property (nonatomic, retain) CNContactFormatter *contactFormatter;

+ (id)descriptorForRequiredKeys;
+ (id)os_log;

- (void).cxx_destruct;
- (id)contactFormatter;
- (id)emailAddressForContact:(id)arg1;
- (id)init;
- (id)messageUrlForContacts:(id)arg1;
- (id)messagingAddressForContact:(id)arg1;
- (id)santizeMessagingAddress:(id)arg1;
- (void)setContactFormatter:(id)arg1;

@end
