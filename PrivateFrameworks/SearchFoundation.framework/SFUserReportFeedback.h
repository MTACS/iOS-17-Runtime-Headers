
@interface SFUserReportFeedback : SFFeedback <CRUserReportRequestFeedback, NSCopying> {
    SFCardSection * _cardSection;
    int  _reportType;
    SFSearchResult * _result;
    NSArray * _sections;
    NSString * _uploadedDataIdentifier;
    SFPunchout * _userSelection;
}

@property (nonatomic, readonly) SFUserReportFeedback *backingFeedback;
@property (nonatomic, retain) SFCardSection *cardSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int reportType;
@property (nonatomic, retain) SFSearchResult *result;
@property (nonatomic, retain) NSArray *sections;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *uploadedDataIdentifier;
@property (nonatomic, retain) SFPunchout *userSelection;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardSection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSelection:(id)arg1 result:(id)arg2 cardSection:(id)arg3;
- (id)initWithSelection:(id)arg1 result:(id)arg2 cardSection:(id)arg3 resultSections:(id)arg4 uploadedDataIdentifier:(id)arg5 userReportRequestType:(int)arg6;
- (int)reportType;
- (id)result;
- (id)sections;
- (void)setCardSection:(id)arg1;
- (void)setReportType:(int)arg1;
- (void)setResult:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setUploadedDataIdentifier:(id)arg1;
- (void)setUserSelection:(id)arg1;
- (id)uploadedDataIdentifier;
- (id)userSelection;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)backingFeedback;

@end
