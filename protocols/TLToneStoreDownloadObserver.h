
@protocol TLToneStoreDownloadObserver <NSObject>

@optional

- (void)didFinishCheckingForAvailableToneStoreDownloads:(bool)arg1;
- (void)storeAccountNameDidChange:(NSString *)arg1;
- (void)toneStoreDownloadsDidFinish:(NSArray *)arg1;
- (void)toneStoreDownloadsDidProgress:(NSArray *)arg1;
- (void)toneStoreDownloadsDidStart:(NSArray *)arg1;

@end
