
@interface NewsUpdater : YQLRequest {
    <NewsUpdaterDelegate> * _delegate;
    bool  _firstLoad;
    StockNewsItemCollection * _lastNewsItemCollection;
    double  _lastResponseTimestamp;
    Stock * _stock;
    id /* block */  _updateCompletionHandler;
}

@property (nonatomic) <NewsUpdaterDelegate> *delegate;

+ (id)_newsItemCollectionCache;
+ (id)sharedNewsUpdater;

- (void).cxx_destruct;
- (void)clearNewsCacheOnDisk;
- (id)delegate;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (void)fetchNewsForStock:(id)arg1;
- (void)fetchNewsForStock:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (void)loadNewsCacheFromDiskForSymbol:(id)arg1;
- (void)parseData:(id)arg1;
- (void)resetLocale;
- (void)saveLastResponse;
- (void)setDelegate:(id)arg1;
- (bool)shouldReloadOnResume;

@end
