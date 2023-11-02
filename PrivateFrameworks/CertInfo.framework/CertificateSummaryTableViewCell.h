
@interface CertificateSummaryTableViewCell : CertUIItemSummaryCell

- (void)setCertificateName:(id)arg1 issuer:(id)arg2 isRoot:(bool)arg3;
- (void)updateWithCertificateTrust:(struct __SecTrust { }*)arg1;

@end
