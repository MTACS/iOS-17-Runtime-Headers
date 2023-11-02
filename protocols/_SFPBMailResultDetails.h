
@protocol _SFPBMailResultDetails <NSObject>

@required

- (int)dataSources;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setDataSources:(int)arg1;
- (void)setSkgMegadomeSpotlightIndexEntries:(int)arg1;
- (void)setSuggestionScore:(float)arg1;
- (int)skgMegadomeSpotlightIndexEntries;
- (float)suggestionScore;

@end
