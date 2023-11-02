
@interface LPVideo : LPVisualMedia <AVAssetResourceLoaderDelegate, LPAsynchronousResource, NSSecureCoding> {
    AVURLAsset * _asset;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicSize;
    NSItemProvider * _itemProvider;
    NSObject<OS_dispatch_group> * _itemProviderLoadGroup;
    NSObject<OS_dispatch_queue> * _mediaLoadingQueue;
    id  _mediaServicesResetNotificationHandler;
    bool  _startedFetchingIntrinsicSize;
    NSURL * _streamingURL;
    LPVideo * _videoLoadedFromItemProvider;
    NSURL * _youTubeURL;
}

@property (nonatomic, readonly) AVAsset *_asset;
@property (nonatomic, readonly) unsigned long long _encodedSize;
@property (nonatomic, readonly, retain) NSItemProvider *_itemProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAudio;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) LPVideoProperties *properties;
@property (nonatomic, readonly, retain) NSURL *streamingURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSURL *youTubeURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_asset;
- (unsigned long long)_encodedSize;
- (id)_initWithVideo:(id)arg1;
- (void)_installMediaServicesResetNotificationHandler;
- (struct CGSize { double x1; double x2; })_intrinsicSizeIfKnown;
- (void)_intrinsicSizeWithCompletionHandler:(id /* block */)arg1;
- (bool)_isSubstitute;
- (id)_itemProvider;
- (void)_uninstallMediaServicesResetNotificationHandler;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAudio;
- (bool)hasPlaceholderValueForAsynchronousLoad;
- (id)init;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 hasAudio:(bool)arg3;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 hasAudio:(bool)arg3;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initWithItemProvider:(id)arg1 properties:(id)arg2;
- (id)initWithStreamingURL:(id)arg1 hasAudio:(bool)arg2;
- (id)initWithStreamingURL:(id)arg1 properties:(id)arg2;
- (id)initWithYouTubeURL:(id)arg1;
- (id)initWithYouTubeURL:(id)arg1 properties:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)loadAsynchronouslyWithCompletionHandler:(id /* block */)arg1;
- (bool)needsAsynchronousLoad;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)setFileURL:(id)arg1;
- (id)streamingURL;
- (id)youTubeURL;

@end
