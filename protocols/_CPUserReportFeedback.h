
@protocol _CPUserReportFeedback <NSObject>

@required

- (void)addSections:(_CPResultSectionForFeedback *)arg1;
- (_CPCardSectionForFeedback *)cardSection;
- (void)clearSections;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)reportType;
- (_CPSearchResultForFeedback *)result;
- (NSArray *)sections;
- (_CPResultSectionForFeedback *)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)setCardSection:(_CPCardSectionForFeedback *)arg1;
- (void)setReportType:(int)arg1;
- (void)setResult:(_CPSearchResultForFeedback *)arg1;
- (void)setSections:(NSArray *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUploadedDataIdentifier:(NSString *)arg1;
- (void)setUserSelection:(_CPPunchoutForFeedback *)arg1;
- (void)setUuidBytes:(NSData *)arg1;
- (unsigned long long)timestamp;
- (NSString *)uploadedDataIdentifier;
- (_CPPunchoutForFeedback *)userSelection;
- (NSData *)uuidBytes;

@end
