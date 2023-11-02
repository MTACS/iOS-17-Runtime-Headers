
@protocol WBSDataCacheDelegate <NSObject>

@optional

- (void)dataCache:(id <WBSDataCache>)arg1 didFailToLoadEntryForKeyString:(NSString *)arg2 error:(NSError *)arg3;
- (void)dataCache:(id <WBSDataCache>)arg1 didLoadEntry:(NSData *)arg2 forKeyString:(NSString *)arg3;
- (void)dataCacheDidReset:(id <WBSDataCache>)arg1;
- (void)dataCacheDidSetUp:(id <WBSDataCache>)arg1;

@end
