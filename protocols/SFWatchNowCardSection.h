
@protocol SFWatchNowCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)sectionTitle;
- (void)setSectionTitle:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setWatchListItem:(SFWatchListItem *)arg1;
- (NSString *)type;
- (SFWatchListItem *)watchListItem;

@end
