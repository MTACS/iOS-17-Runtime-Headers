
@protocol SFWatchListCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setType:(NSString *)arg1;
- (void)setWatchListItem:(SFWatchListItem *)arg1;
- (NSString *)type;
- (SFWatchListItem *)watchListItem;

@end
