
@protocol SPBeaconPayloadCaching <NSObject>

@required

- (void)beaconAdvertisementAtFileURL:(void *)arg1 beaconIdentifier:(void *)arg2 scanDate:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSURL *, NSUUID *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPBeaconAdvertisement *, NSError *, void*
- (void)beaconPayloadsForSearchCriteria:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SPBeaconPayloadCacheSearchCriteria *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPBeaconPayloadCacheSearchResult *, void*
- (void)markBeaconPayloadsProcessed:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveBeaconPayloads:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
