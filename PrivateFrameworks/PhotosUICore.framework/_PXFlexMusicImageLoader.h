
@interface _PXFlexMusicImageLoader : NSObject <PXAudioAssetImageLoader> {
    PXFlexMusicArtworkAsset * _artworkAsset;
    id /* block */  _completionHandler;
    PXFlexMusicDownloader * _downloader;
    NSError * _error;
    struct CGImage { } * _image;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    NSObject<OS_dispatch_queue> * _sharedImageLoadingQueue;
}

@property (nonatomic, readonly) PXFlexMusicArtworkAsset *artworkAsset;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) PXFlexMusicDownloader *downloader;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sharedImageLoadingQueue;

- (void).cxx_destruct;
- (void)_handleDownloadCompleted:(bool)arg1 error:(id)arg2;
- (id)artworkAsset;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)downloader;
- (id)error;
- (struct CGImage { }*)image;
- (id)initWithArtworkAsset:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 sharedImageLoadingQueue:(id)arg3;
- (struct CGSize { double x1; double x2; })maxSize;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)sharedImageLoadingQueue;
- (void)startWithCompletion:(id /* block */)arg1;

@end
