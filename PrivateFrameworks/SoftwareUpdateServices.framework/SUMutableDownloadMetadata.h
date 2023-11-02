
@interface SUMutableDownloadMetadata : SUDownloadMetadata

@property (getter=isAutoDownload, nonatomic) bool autoDownload;
@property (nonatomic) int downloadFeeAgreementStatus;
@property (getter=isDownloadOnly, nonatomic) bool downloadOnly;
@property (nonatomic) bool enforceWifiOnlyOverride;
@property (nonatomic) int termsAndConditionsAgreementStatus;

- (void)applyDownloadPolicy:(id)arg1;
- (id)initWithMetadata:(id)arg1;

@end
