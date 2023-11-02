
@interface _CPUserReportFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPUserReportFeedback> {
    _CPCardSectionForFeedback * _cardSection;
    int  _reportType;
    _CPSearchResultForFeedback * _result;
    NSArray * _sections;
    unsigned long long  _timestamp;
    NSString * _uploadedDataIdentifier;
    _CPPunchoutForFeedback * _userSelection;
    NSData * _uuidBytes;
}

@property (nonatomic, retain) _CPCardSectionForFeedback *cardSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reportType;
@property (nonatomic, retain) _CPSearchResultForFeedback *result;
@property (nonatomic, copy) NSArray *sections;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, copy) NSString *uploadedDataIdentifier;
@property (nonatomic, retain) _CPPunchoutForFeedback *userSelection;
@property (nonatomic, copy) NSData *uuidBytes;

- (void).cxx_destruct;
- (void)addSections:(id)arg1;
- (id)cardSection;
- (void)clearSections;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reportType;
- (id)result;
- (id)sections;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)setCardSection:(id)arg1;
- (void)setReportType:(int)arg1;
- (void)setResult:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUploadedDataIdentifier:(id)arg1;
- (void)setUserSelection:(id)arg1;
- (void)setUuidBytes:(id)arg1;
- (unsigned long long)timestamp;
- (id)uploadedDataIdentifier;
- (id)userSelection;
- (id)uuidBytes;
- (void)writeTo:(id)arg1;

@end
