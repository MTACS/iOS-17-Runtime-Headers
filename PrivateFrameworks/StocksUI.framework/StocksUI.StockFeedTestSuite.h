
@interface StocksUI.StockFeedTestSuite : SNTestSuite <SNTestSetup> {
    void resolver;
    void tracker;
}

- (void).cxx_destruct;
- (id)init;
- (void)setupTestWithContext:(id)arg1 completion:(id /* block */)arg2;

@end
