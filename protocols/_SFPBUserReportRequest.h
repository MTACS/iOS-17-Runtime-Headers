
@protocol _SFPBUserReportRequest <NSObject>

@required

- (void)addUserReportOptions:(_SFPBPunchout *)arg1;
- (NSString *)affordanceText;
- (NSString *)attachmentSectionTitle;
- (void)clearUserReportOptions;
- (_SFPBPunchout *)disclaimerLearnMorePunchout;
- (NSString *)disclaimerText;
- (NSString *)dismissText;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)reportOptionsSectionTitle;
- (int)reportType;
- (void)setAffordanceText:(NSString *)arg1;
- (void)setAttachmentSectionTitle:(NSString *)arg1;
- (void)setDisclaimerLearnMorePunchout:(_SFPBPunchout *)arg1;
- (void)setDisclaimerText:(NSString *)arg1;
- (void)setDismissText:(NSString *)arg1;
- (void)setReportOptionsSectionTitle:(NSString *)arg1;
- (void)setReportType:(int)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setUserReportOptions:(NSArray *)arg1;
- (NSString *)title;
- (NSArray *)userReportOptions;
- (_SFPBPunchout *)userReportOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)userReportOptionsCount;

@end
