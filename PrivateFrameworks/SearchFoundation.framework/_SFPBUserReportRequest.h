
@interface _SFPBUserReportRequest : PBCodable <NSSecureCoding, _SFPBUserReportRequest> {
    NSString * _affordanceText;
    NSString * _attachmentSectionTitle;
    _SFPBPunchout * _disclaimerLearnMorePunchout;
    NSString * _disclaimerText;
    NSString * _dismissText;
    NSString * _reportOptionsSectionTitle;
    int  _reportType;
    NSString * _title;
    NSArray * _userReportOptions;
}

@property (nonatomic, copy) NSString *affordanceText;
@property (nonatomic, copy) NSString *attachmentSectionTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFPBPunchout *disclaimerLearnMorePunchout;
@property (nonatomic, copy) NSString *disclaimerText;
@property (nonatomic, copy) NSString *dismissText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *reportOptionsSectionTitle;
@property (nonatomic) int reportType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *userReportOptions;

- (void).cxx_destruct;
- (void)addUserReportOptions:(id)arg1;
- (id)affordanceText;
- (id)attachmentSectionTitle;
- (void)clearUserReportOptions;
- (id)dictionaryRepresentation;
- (id)disclaimerLearnMorePunchout;
- (id)disclaimerText;
- (id)dismissText;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)reportOptionsSectionTitle;
- (int)reportType;
- (void)setAffordanceText:(id)arg1;
- (void)setAttachmentSectionTitle:(id)arg1;
- (void)setDisclaimerLearnMorePunchout:(id)arg1;
- (void)setDisclaimerText:(id)arg1;
- (void)setDismissText:(id)arg1;
- (void)setReportOptionsSectionTitle:(id)arg1;
- (void)setReportType:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserReportOptions:(id)arg1;
- (id)title;
- (id)userReportOptions;
- (id)userReportOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)userReportOptionsCount;
- (void)writeTo:(id)arg1;

@end
