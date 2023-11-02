
@protocol GEOGeographicMetadataFetcher <NSObject>

@required

- (void)fetchMetadataWithResponseQueue:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)reportCorrupt:(id)arg1;

@end
