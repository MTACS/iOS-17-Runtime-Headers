
@interface TILinguisticAssetDownloadClient : NSObject <TILinguisticAssetDownloading>

+ (id)_dispatchQueue;
+ (id /* block */)_internalAssertionRequestHandlerForHandler:(id /* block */)arg1 connection:(id)arg2;
+ (id /* block */)_internalFetchAssetUpdateStatusRequestHandler:(id /* block */)arg1 connection:(id)arg2;
+ (id /* block */)_internalHandlerForHandler:(id /* block */)arg1 connection:(id)arg2;
+ (id /* block */)_internalUpdateAssetRequestHandler:(id /* block */)arg1 connection:(id)arg2;

- (id)_newXPCConnection;
- (void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(id /* block */)arg5;
- (void)fetchAssetUpdateStatusForInputModeIdentifier:(id)arg1 callback:(id /* block */)arg2;
- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(id /* block */)arg3;
- (void)requestLinguisticAssetsForLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)updateAssetForInputModeIdentifier:(id)arg1 callback:(id /* block */)arg2;

@end
