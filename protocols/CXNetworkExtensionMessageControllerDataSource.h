
@protocol CXNetworkExtensionMessageControllerDataSource <NSObject>

@required

- (void)sendNetworkExtensionMessage:(void *)arg1 forBundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sendNetworkExtensionPushToTalkMessage:(void *)arg1 forBundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
