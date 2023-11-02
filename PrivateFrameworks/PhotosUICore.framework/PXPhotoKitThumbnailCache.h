
@interface PXPhotoKitThumbnailCache : NSObject <NSCacheDelegate, PXPhotoLibraryUIChangeObserver> {
    NSCache * _cache;
    NSString * _label;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_cachedThumbnailIndexByObjectID;
    PHPhotoLibrary * _photoLibrary;
    unsigned long long  _sizeLimit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) unsigned long long sizeLimit;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)cacheThumbnailData:(id)arg1 specification:(const struct PHAssetResourceTableDataSpecification { int x1; int x2; int x3; int x4; int x5; int x6; long long x7; }*)arg2 forAsset:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithSizeLimit:(unsigned long long)arg1 photoLibrary:(id)arg2;
- (id)label;
- (id)photoLibrary;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)setLabel:(id)arg1;
- (unsigned long long)sizeLimit;
- (id)tableThumbnailDataForAsset:(id)arg1 dataSpecification:(struct PHAssetResourceTableDataSpecification { int x1; int x2; int x3; int x4; int x5; int x6; long long x7; }*)arg2;

@end
