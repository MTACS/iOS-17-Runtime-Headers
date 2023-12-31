
@interface PSQuotaInfo : NSObject {
    NSMutableDictionary * _mediaKindDict;
    unsigned long long  _totalStorage;
    unsigned long long  _usedStorage;
}

@property (nonatomic) unsigned long long totalStorage;
@property (nonatomic) unsigned long long usedStorage;

- (void).cxx_destruct;
- (id)init;
- (void)setStorageInUse:(unsigned long long)arg1 forMediaKind:(long long)arg2;
- (void)setTotalStorage:(unsigned long long)arg1;
- (void)setUsedStorage:(unsigned long long)arg1;
- (unsigned long long)storageInUseForMediaKind:(long long)arg1;
- (unsigned long long)totalStorage;
- (unsigned long long)usedStorage;

@end
