
@protocol TLToneStoreDownloadController <NSObject>

@required

- (void)addObserver:(id <TLToneStoreDownloadObserver>)arg1;
- (void)openAlertToneStore;
- (void)openRingtoneStore;
- (void)redownloadAllTones;
- (void)removeObserver:(id <TLToneStoreDownloadObserver>)arg1;
- (NSString *)storeAccountName;

@end
