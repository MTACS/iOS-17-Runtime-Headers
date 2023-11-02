
@interface MCGmailAccountPayload : MCPayload <MCPerAccountVPNPayloadProtocol> {
    NSString * _VPNUUID;
    NSString * _acAccountIdentifier;
    NSString * _accountDescription;
    NSString * _accountName;
    NSDictionary * _communicationServiceRules;
    NSString * _emailAddress;
}

@property (nonatomic, readonly, retain) NSString *VPNUUID;
@property (nonatomic, retain) NSString *acAccountIdentifier;
@property (nonatomic, readonly, retain) NSString *accountDescription;
@property (nonatomic, readonly, retain) NSString *accountName;
@property (nonatomic, readonly, retain) NSArray *calendarAccountIdentifiers;
@property (nonatomic, readonly) NSDictionary *communicationServiceRules;
@property (nonatomic, readonly, retain) NSArray *contactsAccountIdentifiers;
@property (nonatomic, readonly, retain) NSString *emailAddress;
@property (nonatomic, readonly, retain) NSArray *mailAccountIdentifiers;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)VPNUUID;
- (id)acAccountIdentifier;
- (id)accountDescription;
- (id)accountName;
- (id)communicationServiceRules;
- (id)emailAddress;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)mailAccountIdentifiers;
- (bool)mustInstallNonInteractively;
- (id)payloadDescriptionKeyValueSections;
- (id)restrictions;
- (void)setAcAccountIdentifier:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)verboseDescription;

@end
