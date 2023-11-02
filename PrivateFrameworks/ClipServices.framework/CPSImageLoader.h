
@interface CPSImageLoader : NSObject {
    CPSImageDownloader * _imageDownloader;
    CPSImageStore * _imageStore;
    CPSMapsImageLoader * _mapsImageLoader;
}

@property (nonatomic, retain) CPSImageDownloader *imageDownloader;
@property (nonatomic, retain) CPSImageStore *imageStore;
@property (nonatomic, retain) CPSMapsImageLoader *mapsImageLoader;

- (void).cxx_destruct;
- (id)imageDownloader;
- (id)imageStore;
- (id)init;
- (void)loadImageForGEOStyleAttributes:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadImageForMapItemMUID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadImageWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)mapsImageLoader;
- (void)setImageDownloader:(id)arg1;
- (void)setImageStore:(id)arg1;
- (void)setMapsImageLoader:(id)arg1;

@end
