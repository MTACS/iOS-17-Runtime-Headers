
@interface TILinguisticAssetDownloadClientMock : NSObject <TILinguisticAssetDownloading> {
    NSError * _error;
    long long  _result;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) long long result;

- (void).cxx_destruct;
- (void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(id /* block */)arg5;
- (id)error;
- (void)fetchAssetUpdateStatusForInputModeIdentifier:(id)arg1 callback:(id /* block */)arg2;
- (id)init;
- (id)initWithResult:(long long)arg1 error:(id)arg2;
- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(id /* block */)arg3;
- (void)requestLinguisticAssetsForLanguage:(id)arg1 completion:(id /* block */)arg2;
- (long long)result;
- (void)updateAssetForInputModeIdentifier:(id)arg1 callback:(id /* block */)arg2;

@end
