
@protocol SFMailResultDetails <NSObject>

@required

- (int)dataSources;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setDataSources:(int)arg1;
- (void)setSkgMegadomeSpotlightIndexEntries:(NSNumber *)arg1;
- (void)setSuggestionScore:(NSNumber *)arg1;
- (NSNumber *)skgMegadomeSpotlightIndexEntries;
- (NSNumber *)suggestionScore;

@end
