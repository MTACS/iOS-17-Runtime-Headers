
@protocol _CPCardSectionFeedback <NSObject>

@required

- (_CPCardSectionForFeedback *)cardSection;
- (NSString *)cardSectionId;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)resultId;
- (void)setCardSection:(_CPCardSectionForFeedback *)arg1;
- (void)setCardSectionId:(NSString *)arg1;
- (void)setResultId:(NSString *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
