
@protocol SFSuggestionCardSection <SFCardSection>

@required

- (SFRichText *)detailText;
- (NSDictionary *)dictionaryRepresentation;
- (bool)isContact;
- (NSData *)jsonData;
- (NSString *)scopedSearchSectionBundleIdentifier;
- (void)setDetailText:(SFRichText *)arg1;
- (void)setIsContact:(bool)arg1;
- (void)setScopedSearchSectionBundleIdentifier:(NSString *)arg1;
- (void)setSuggestionText:(SFRichText *)arg1;
- (void)setSuggestionType:(int)arg1;
- (void)setThumbnail:(SFImage *)arg1;
- (void)setTrailingBottomText:(SFFormattedText *)arg1;
- (void)setTrailingMiddleText:(SFFormattedText *)arg1;
- (void)setType:(NSString *)arg1;
- (SFRichText *)suggestionText;
- (int)suggestionType;
- (SFImage *)thumbnail;
- (SFFormattedText *)trailingBottomText;
- (SFFormattedText *)trailingMiddleText;
- (NSString *)type;

@end
