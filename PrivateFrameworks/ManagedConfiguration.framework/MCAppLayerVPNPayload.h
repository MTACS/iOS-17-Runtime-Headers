
@interface MCAppLayerVPNPayload : MCVPNPayloadBase {
    NSArray * _SMBDomains;
    NSArray * _SafariDomains;
    NSString * _VPNUUID;
    NSArray * _associatedDomains;
    NSArray * _calendarDomains;
    NSArray * _contactsDomains;
    NSArray * _excludedDomains;
    NSArray * _mailDomains;
    bool  _restrictDomains;
}

@property (nonatomic, retain) NSArray *SMBDomains;
@property (nonatomic, retain) NSArray *SafariDomains;
@property (nonatomic, retain) NSString *VPNUUID;
@property (nonatomic, retain) NSArray *associatedDomains;
@property (nonatomic, retain) NSArray *calendarDomains;
@property (nonatomic, retain) NSArray *contactsDomains;
@property (nonatomic, retain) NSArray *excludedDomains;
@property (nonatomic, retain) NSArray *mailDomains;
@property (nonatomic, readonly) bool restrictDomains;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)SMBDomains;
- (id)SafariDomains;
- (id)VPNUUID;
- (id)associatedDomains;
- (id)calendarDomains;
- (id)contactsDomains;
- (id)excludedDomains;
- (id)filterForUserEnrollmentOutError:(id*)arg1;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)mailDomains;
- (id)payloadDescriptionKeyValueSections;
- (bool)restrictDomains;
- (void)setAssociatedDomains:(id)arg1;
- (void)setCalendarDomains:(id)arg1;
- (void)setContactsDomains:(id)arg1;
- (void)setExcludedDomains:(id)arg1;
- (void)setMailDomains:(id)arg1;
- (void)setSMBDomains:(id)arg1;
- (void)setSafariDomains:(id)arg1;
- (void)setVPNUUID:(id)arg1;
- (id)stubDictionary;
- (id)verboseDescription;

@end
