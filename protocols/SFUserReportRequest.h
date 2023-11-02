
@protocol SFUserReportRequest <NSObject>

@required

- (NSString *)affordanceText;
- (NSString *)attachmentSectionTitle;
- (NSDictionary *)dictionaryRepresentation;
- (SFPunchout *)disclaimerLearnMorePunchout;
- (NSString *)disclaimerText;
- (NSString *)dismissText;
- (NSData *)jsonData;
- (NSString *)reportOptionsSectionTitle;
- (int)reportType;
- (void)setAffordanceText:(NSString *)arg1;
- (void)setAttachmentSectionTitle:(NSString *)arg1;
- (void)setDisclaimerLearnMorePunchout:(SFPunchout *)arg1;
- (void)setDisclaimerText:(NSString *)arg1;
- (void)setDismissText:(NSString *)arg1;
- (void)setReportOptionsSectionTitle:(NSString *)arg1;
- (void)setReportType:(int)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setUserReportOptions:(NSArray *)arg1;
- (NSString *)title;
- (NSArray *)userReportOptions;

@end
