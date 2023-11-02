
@protocol BCSItemResolving <NSObject>

@required

- (BCSItem *)cachedItemMatching:(id <BCSItemIdentifying>)arg1;
- (void)itemMatching:(void *)arg1 config:(void *)arg2 clientBundleID:(void *)arg3 metric:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: <BCSItemIdentifying> *, BCSConfigItem *, NSString *, <BCSResolutionMetricProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCSItem *, NSError *, void*

@end
