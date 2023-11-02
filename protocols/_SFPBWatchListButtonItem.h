
@protocol _SFPBWatchListButtonItem <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setUniqueId:(unsigned long long)arg1;
- (void)setWatchListItem:(_SFPBWatchListItem *)arg1;
- (unsigned long long)uniqueId;
- (_SFPBWatchListItem *)watchListItem;

@end
