
@protocol _SFPBToggleWatchListStatusCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setWatchListItem:(_SFPBWatchListItem *)arg1;
- (_SFPBWatchListItem *)watchListItem;

@end
