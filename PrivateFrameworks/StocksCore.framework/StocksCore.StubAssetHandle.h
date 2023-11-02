
@interface StocksCore.StubAssetHandle : FCAssetHandle {
    void identifier;
}

@property (nonatomic, readonly) <FCAssetDataProvider> *dataProvider;
@property (nonatomic, readonly) NSString *uniqueKey;

- (void).cxx_destruct;
- (id)dataProvider;
- (id)init;
- (id)uniqueKey;

@end
