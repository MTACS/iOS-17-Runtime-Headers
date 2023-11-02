
@interface WFPrivacyIssue : WFHealthIssue {
    NSString * _issueDescription;
    NSString * _issueRecommendation;
    NSString * _issueShortTitle;
    NSString * _issueTitle;
    NSString * _typeString;
}

+ (id)carrierNetworkIssue;
+ (id)dnsFilteredNetworkIssue;
+ (id)privateAddressDisabledByCarrierIssueWithCarrierName:(id)arg1;
+ (id)privateAddressDisabledByProfileIssueWithOrganizationName:(id)arg1 profileName:(id)arg2 profileUUID:(id)arg3;
+ (id)privateAddressDisabledBySystemIssue;
+ (id)privateAddressDisabledByUserIssue;

- (void).cxx_destruct;
- (id)_descriptionForSubType:(unsigned long long)arg1 organizationName:(id)arg2 profileName:(id)arg3;
- (unsigned long long)_healthIssueTypeForSubType:(unsigned long long)arg1;
- (id)_privateAddressTypeToString:(unsigned long long)arg1;
- (id)_recommendationForSubType:(unsigned long long)arg1 organizationName:(id)arg2;
- (id)_titleForSubType:(unsigned long long)arg1;
- (id)initWithPrivacyType:(unsigned long long)arg1 organizationName:(id)arg2 profileName:(id)arg3 profileUUID:(id)arg4;
- (id)issueDescription;
- (id)issueRecommendation;
- (id)issueShortTitle;
- (id)issueTitle;
- (id)typeString;

@end
