
@interface TXRAssetCatalogMipFileAttributes : TXRAssetCatalogFileAttributes {
    unsigned long long  _face;
    unsigned long long  _level;
}

@property (nonatomic) unsigned long long face;
@property (nonatomic) unsigned long long level;

- (bool)doesSpecifyAllFaces;
- (unsigned long long)face;
- (id)init;
- (unsigned long long)level;
- (void)setFace:(unsigned long long)arg1;
- (void)setLevel:(unsigned long long)arg1;
- (void)specifyAllFaces;

@end
