
@protocol _CPCardForFeedback <NSObject>

@required

- (void)addCardSections:(_CPCardSectionForFeedback *)arg1;
- (NSArray *)cardSections;
- (_CPCardSectionForFeedback *)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)clearCardSections;
- (NSString *)fbr;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setCardSections:(NSArray *)arg1;
- (void)setFbr:(NSString *)arg1;

@end
