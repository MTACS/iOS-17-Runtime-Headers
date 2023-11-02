
@interface RMAssetResolverController : NSObject

+ (void)_resolveKeychainAsset:(id)arg1 assetIdentifier:(id)arg2 accessGroup:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)extractUserIdentityAsset:(id)arg1 assetIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)resolveDataAsset:(id)arg1 assetIdentifier:(id)arg2 downloadURL:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)resolveKeychainAsset:(id)arg1 assetIdentifier:(id)arg2 accessGroup:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)resolveKeychainAsset:(id)arg1 assetIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)resolveKeychainAsset:(id)arg1 assetIdentifier:(id)arg2 subscriberIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)resolveKeychainPasswordAsset:(id)arg1 assetIdentifier:(id)arg2 accessGroup:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)resolveUserNameAndPasswordAsset:(id)arg1 assetIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

@end
