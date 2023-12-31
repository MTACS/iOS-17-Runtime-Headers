
@protocol _CPRankingFeedback <NSObject>

@required

- (void)addSections:(_CPSectionRankingFeedback *)arg1;
- (double)blendingDuration;
- (void)clearSections;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)sections;
- (_CPSectionRankingFeedback *)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)setBlendingDuration:(double)arg1;
- (void)setSections:(NSArray *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
