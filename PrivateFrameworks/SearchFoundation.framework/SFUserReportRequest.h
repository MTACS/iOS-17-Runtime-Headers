
@interface SFUserReportRequest : NSObject <NSCopying, NSSecureCoding, SFUserReportRequest> {
    NSString * _affordanceText;
    NSString * _attachmentSectionTitle;
    SFPunchout * _disclaimerLearnMorePunchout;
    NSString * _disclaimerText;
    NSString * _dismissText;
    struct { 
        unsigned int reportType : 1; 
    }  _has;
    NSString * _reportOptionsSectionTitle;
    int  _reportType;
    NSString * _title;
    NSArray * _userReportOptions;
}

@property (nonatomic, copy) NSString *affordanceText;
@property (nonatomic, copy) NSString *attachmentSectionTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) SFPunchout *disclaimerLearnMorePunchout;
@property (nonatomic, copy) NSString *disclaimerText;
@property (nonatomic, copy) NSString *dismissText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *reportOptionsSectionTitle;
@property (nonatomic) int reportType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *userReportOptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)affordanceText;
- (id)attachmentSectionTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)disclaimerLearnMorePunchout;
- (id)disclaimerText;
- (id)dismissText;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasReportType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
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

@end
