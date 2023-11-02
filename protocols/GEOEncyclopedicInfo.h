
@protocol GEOEncyclopedicInfo <NSObject>

@required

- (GEOMapItemAttribution *)encyclopedicAttribution;
- (<GEOFactoid> *)factoidAtIndex:(int)arg1;
- (NSArray *)factoids;
- (<GEOFactoid> *)firstFactoidForSemantic:(int)arg1;
- (bool)hasPairOfFactoids;
- (bool)hasStandAloneFactoids;
- (bool)hasTextBlock;
- (NSArray *)placeSummaryFactoids;
- (NSString *)textBlockText;
- (NSString *)textBlockTitle;

@end
