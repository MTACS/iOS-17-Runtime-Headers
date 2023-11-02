
@interface CPSMapsImageLoader : NSObject {
    CPSImageDownloader * _imageDownloader;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_loadImageForGEOFeatureStyleAttributes:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithImageDownloader:(id)arg1;
- (void)loadImageForGEOStyleAttributes:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadImageForMapItemMUID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;

@end
