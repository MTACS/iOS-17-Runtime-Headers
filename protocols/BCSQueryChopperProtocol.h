
@protocol BCSQueryChopperProtocol <NSObject>

@required

- (void)queryChopperDelegate:(void *)arg1 fetchLinkItemModelWithURL:(void *)arg2 isBloomFilterCached:(void *)arg3 forClientBundleID:(void *)arg4 metric:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: <BCSLinkQueryChopperDelegate> *, NSURL *, bool, NSString *, <BCSBusinessLinkChoppingMetric> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCSLinkItem *, NSError *, void*
- (void)queryChopperDelegate:(void *)arg1 isBusinessRegisteredForURL:(void *)arg2 isBloomFilterCached:(void *)arg3 forClientBundleID:(void *)arg4 metric:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 13: <BCSLinkQueryChopperDelegate> *, NSURL *, bool, NSString *, <BCSBusinessLinkChoppingMetric> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSError *, void*

@end
