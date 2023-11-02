
@protocol BCSConfigRemoteFetching <NSObject>

@required

- (void)fetchConfigItemWithType:(void *)arg1 clientBundleID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCSConfigItem *, NSError *, void*
- (void)fetchConfigItemWithType:(void *)arg1 clientBundleID:(void *)arg2 xpcActivity:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: long long, NSString *, NSObject<OS_xpc_object> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCSConfigItem *, NSError *, void*

@end
