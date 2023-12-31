
@protocol CertInfoTrustDescription <NSObject>

@required

- (unsigned long long)certificateCount;
- (NSDate *)certificateExpirationDateAtIndex:(unsigned long long)arg1;
- (NSString *)certificateIssuerSummaryAtIndex:(unsigned long long)arg1;
- (NSArray *)certificatePropertiesAtIndex:(unsigned long long)arg1;
- (NSString *)certificateSubjectSummaryAtIndex:(unsigned long long)arg1;
- (bool)isRootCertificate;
- (bool)isTrusted;
- (NSArray *)summaryDescriptionItems;
- (NSString *)summarySubtitle;
- (NSString *)summaryTitle;

@end
