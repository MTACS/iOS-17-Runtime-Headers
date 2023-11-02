
@interface HLPJSONCacheController : HLPDataCacheController

+ (id)sharedInstance;

- (void)commonInit;
- (id)formattedDataWithData:(id)arg1;
- (id)formattedDataWithFileURL:(id)arg1;
- (void)formattedDataWithFileURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isURLValid:(id)arg1;
- (id)newDataCache;

@end
