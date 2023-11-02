
@interface StockUpdater : YQLRequest {
    <StockUpdaterDelegate> * _delegate;
    bool  _forceUpdate;
    bool  _isComprehensive;
    NSError * _lastError;
    NSArray * _pendingStocks;
    NSArray * _requestStocks;
    id /* block */  _updateCompletionHandler;
}

@property (nonatomic) <StockUpdaterDelegate> *delegate;
@property (nonatomic, readonly) bool forceUpdate;
@property (nonatomic, readonly) bool isComprehensive;
@property (nonatomic, retain) NSArray *pendingStocks;
@property (nonatomic, retain) NSArray *requestStocks;
@property (nonatomic, copy) id /* block */ updateCompletionHandler;

- (void).cxx_destruct;
- (void)_parseExchangeDictionaries:(id)arg1;
- (void)_parseQuoteDictionaries:(id)arg1 withDataSourceDictionaries:(id)arg2;
- (bool)_updateStocks:(id)arg1 comprehensive:(bool)arg2 forceUpdate:(bool)arg3;
- (id)delegate;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (bool)forceUpdate;
- (bool)hadError;
- (bool)isComprehensive;
- (void)parseData:(id)arg1;
- (id)pendingStocks;
- (id)requestStocks;
- (void)setDelegate:(id)arg1;
- (void)setPendingStocks:(id)arg1;
- (void)setRequestStocks:(id)arg1;
- (void)setUpdateCompletionHandler:(id /* block */)arg1;
- (id /* block */)updateCompletionHandler;

@end
