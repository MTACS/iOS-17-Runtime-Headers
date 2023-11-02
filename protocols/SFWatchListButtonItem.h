
@protocol SFWatchListButtonItem <SFButtonItem>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setWatchListItem:(SFWatchListItem *)arg1;
- (SFWatchListItem *)watchListItem;

@end
