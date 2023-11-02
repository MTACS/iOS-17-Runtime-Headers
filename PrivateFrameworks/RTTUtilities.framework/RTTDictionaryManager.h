
@interface RTTDictionaryManager : NSObject {
    NSArray * _availableDictionaries;
}

@property (nonatomic, retain) NSArray *availableDictionaries;

+ (id)_availableDictionaryAssetsUsingRemoteInfo:(bool)arg1;

- (void).cxx_destruct;
- (void)_downloadAsset:(id)arg1;
- (id)_ttyDictionaryAsset;
- (id)availableDictionaries;
- (void)dealloc;
- (void)deleteIfNeeded;
- (void)downloadIfNeeded;
- (id)init;
- (void)setAvailableDictionaries:(id)arg1;

@end
