
@interface PXImportImageCacheIdentifier : NSObject {
    NSString * _assetUuid;
    long long  _cacheIndex;
    unsigned long long  _sizeType;
}

@property (nonatomic, copy) NSString *assetUuid;
@property (nonatomic) long long cacheIndex;
@property (nonatomic) unsigned long long sizeType;

- (void).cxx_destruct;
- (id)assetUuid;
- (long long)cacheIndex;
- (void)setAssetUuid:(id)arg1;
- (void)setCacheIndex:(long long)arg1;
- (void)setSizeType:(unsigned long long)arg1;
- (unsigned long long)sizeType;

@end
