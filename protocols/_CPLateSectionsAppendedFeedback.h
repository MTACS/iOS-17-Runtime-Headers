
@protocol _CPLateSectionsAppendedFeedback <NSObject>

@required

- (void)addSections:(_CPResultSectionForFeedback *)arg1;
- (void)clearSections;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)sections;
- (_CPResultSectionForFeedback *)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)setSections:(NSArray *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
