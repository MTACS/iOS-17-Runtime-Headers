
@protocol MSPHistoryEntrySearch <MSPHistoryEntry>

@required

- (NSString *)languageCode;
- (NSString *)locationDisplayString;
- (GEOMapRegion *)mapRegion;
- (NSString *)query;

@end
