
@interface GEOMapItemPlaceAttribution : GEOMapItemAttribution

@property (nonatomic, readonly) NSArray *checkInURLs;
@property (nonatomic, readonly) NSURL *webURL;

- (id)checkInURLs;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;
- (id)webURL;

@end
