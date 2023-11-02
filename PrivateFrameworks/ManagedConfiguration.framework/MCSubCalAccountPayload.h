
@interface MCSubCalAccountPayload : MCPayload <MCPerAccountVPNPayloadProtocol> {
    NSString * _VPNUUID;
    NSString * _acAccountIdentifier;
    NSString * _accountDescription;
    NSString * _accountPersistentUUID;
    NSString * _hostname;
    NSString * _password;
    bool  _useSSL;
    NSNumber * _useSSLNum;
    NSString * _username;
}

@property (nonatomic, readonly, retain) NSString *VPNUUID;
@property (nonatomic, retain) NSString *acAccountIdentifier;
@property (nonatomic, readonly, retain) NSString *accountDescription;
@property (nonatomic, copy) NSString *accountPersistentUUID;
@property (nonatomic, readonly, retain) NSArray *calendarAccountIdentifiers;
@property (nonatomic, readonly, retain) NSArray *contactsAccountIdentifiers;
@property (nonatomic, readonly, retain) NSString *hostname;
@property (nonatomic, readonly, retain) NSArray *mailAccountIdentifiers;
@property (nonatomic, readonly, retain) NSString *password;
@property (nonatomic, readonly) bool useSSL;
@property (nonatomic, readonly) NSNumber *useSSLNum;
@property (nonatomic, readonly, retain) NSString *username;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)VPNUUID;
- (id)acAccountIdentifier;
- (id)accountDescription;
- (id)accountPersistentUUID;
- (id)calendarAccountIdentifiers;
- (bool)containsSensitiveUserInformation;
- (id)hostname;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)password;
- (id)payloadDescriptionKeyValueSections;
- (void)setAcAccountIdentifier:(id)arg1;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (bool)useSSL;
- (id)useSSLNum;
- (id)username;
- (id)verboseDescription;

@end
