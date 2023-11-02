
@protocol NEProfilePayloadHandlerDelegate

@required

- (NSArray *)getCertificates;
- (NSString *)getConfigurationIdentifier;
- (NSDictionary *)getPendingCertificateInfo:(id <NEProfilePayloadBaseDelegate>)arg1;
- (NSDictionary *)getPendingCertificateUUIDs:(id <NEProfilePayloadBaseDelegate>)arg1;
- (bool)setAppLayerVPNUUID:(NSString *)arg1 andSafariDomains:(NSArray *)arg2;
- (bool)setAssociatedDomains:(NSArray *)arg1;
- (bool)setCalendarDomains:(NSArray *)arg1;
- (bool)setCalendarDomains:(NSArray *)arg1 accountIdentifiers:(NSArray *)arg2;
- (bool)setCertificates:(NSDictionary *)arg1;
- (bool)setCertificates:(NSDictionary *)arg1 keyRefs:(NSDictionary *)arg2 specs:(NSDictionary *)arg3;
- (bool)setContactsDomains:(NSArray *)arg1;
- (bool)setContactsDomains:(NSArray *)arg1 accountIdentifiers:(NSArray *)arg2;
- (bool)setExcludedDomains:(NSArray *)arg1;
- (bool)setMailDomains:(NSArray *)arg1;
- (bool)setMailDomains:(NSArray *)arg1 accountIdentifiers:(NSArray *)arg2;
- (bool)setPayloadInfoCommon:(NSString *)arg1 payloadOrganization:(NSString *)arg2;
- (bool)setPayloadInfoIdentity:(id <NEProfilePayloadBaseDelegate>)arg1;
- (bool)setPerAppRuleSettings:(NSDictionary *)arg1 withAppIdentifier:(NSString *)arg2;
- (bool)setPerAppUUID:(NSString *)arg1 andSafariDomains:(NSArray *)arg2;
- (bool)setProfileInfo:(NSDictionary *)arg1;
- (bool)setRestrictDomains:(bool)arg1;
- (bool)setSMBDomains:(NSArray *)arg1;

@end
