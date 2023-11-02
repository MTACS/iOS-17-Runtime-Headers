
@protocol BCSItemRemoteFetching <NSObject>

@required

- (void)fetchItemsWithBucketStartIndex:(void *)arg1 endIndex:(void *)arg2 type:(void *)arg3 forClientBundleID:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: long long, long long, long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
