
@interface ICThumbnailDataCache : NSObject {
    ICCache * _imageCache;
}

@property (nonatomic, retain) ICCache *imageCache;

- (void).cxx_destruct;
- (id)imageCache;
- (id)init;
- (void)removeAllThumbnailData;
- (void)removeThumbnailDataForKey:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setThumbnailData:(id)arg1 forKey:(id)arg2;
- (id)thumbnailDataForKey:(id)arg1;

@end
