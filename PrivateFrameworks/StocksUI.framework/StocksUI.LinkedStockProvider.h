
@interface StocksUI.LinkedStockProvider : NSObject <NULinkedContentProvider> {
    void metadataManager;
    void stocks;
}

- (void).cxx_destruct;
- (id)init;
- (id)loadLinkedContentForHeadline:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;

@end
