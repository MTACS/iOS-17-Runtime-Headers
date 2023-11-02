
@protocol BCSShardResolving <NSObject>

@required

- (void)shardItemMatching:(void *)arg1 clientBundleID:(void *)arg2 metric:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <BCSShardItemIdentifying> *, NSString *, <BCSResolutionMetricProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BCSShardItemProtocol> *, NSError *, void*

@end
