
@interface AVTStickerSheetControllerSwiftProvider : NSObject <AVTStickerSheetControllerDelegate> {
    AVTAvatarStore * _avatarStore;
    <NSObject> * _avatarStoreChangeObserver;
    <AVTResourceCache> * _cache;
    AVTStickerConfigurationProvider * _configurationProvider;
    <AVTStickerSheetControllerSwiftProviderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _encodingQueue;
    AVTUIEnvironment * _environment;
    AVTUIStickerGeneratorPool * _generatorPool;
    _AVTAvatarRecordImageProvider * _imageProvider;
    AVTUILogger * _logger;
    NSObject<OS_dispatch_queue> * _renderingQueue;
    NSMutableDictionary * _sheetControllers;
    AVTStickerTaskScheduler * _stickerScheduler;
}

@property (nonatomic, readonly) AVTAvatarStore *avatarStore;
@property (nonatomic, retain) <NSObject> *avatarStoreChangeObserver;
@property (nonatomic, readonly) <AVTResourceCache> *cache;
@property (nonatomic, retain) AVTStickerConfigurationProvider *configurationProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTStickerSheetControllerSwiftProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *encodingQueue;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, retain) AVTUIStickerGeneratorPool *generatorPool;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _AVTAvatarRecordImageProvider *imageProvider;
@property (nonatomic, readonly) AVTUILogger *logger;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *renderingQueue;
@property (nonatomic, retain) NSMutableDictionary *sheetControllers;
@property (nonatomic, retain) AVTStickerTaskScheduler *stickerScheduler;
@property (readonly) Class superclass;

+ (id)stickerCacheWithEnvironment:(id)arg1;

- (void).cxx_destruct;
- (void)_notifyStoreChanged;
- (id)avatarStore;
- (id)avatarStoreChangeObserver;
- (void)beginObservingAvatarStoreChanges;
- (id)cache;
- (id)configurationProvider;
- (void)dealloc;
- (id)delegate;
- (id)encodingQueue;
- (void)endObservingAvatarStoreChanges;
- (id)environment;
- (id)generatorPool;
- (id)imageProvider;
- (id)init;
- (id)logger;
- (void)recentStickersDidChange:(id)arg1;
- (id)renderingQueue;
- (void)setAvatarStoreChangeObserver:(id)arg1;
- (void)setConfigurationProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEncodingQueue:(id)arg1;
- (void)setGeneratorPool:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setRenderingQueue:(id)arg1;
- (void)setSheetControllers:(id)arg1;
- (void)setStickerScheduler:(id)arg1;
- (id)sheetControllers;
- (id)stickerScheduler;
- (void)stickerSheetController:(id)arg1 didFinishRenderingStickersForRecord:(id)arg2;
- (void)stickerSheetController:(id)arg1 didInteractWithStickerItem:(id)arg2 atIndex:(long long)arg3 byPeeling:(bool)arg4;
- (void)stickerSheetController:(id)arg1 didScrollToContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)stickerSheetController:(id)arg1 requestsStickerForFileURL:(id)arg2 localizedDescription:(id)arg3 forItemWithIdentifier:(id)arg4;
- (void)stickerSheetController:(id)arg1 scrollView:(id)arg2 willEndDraggingWithTargetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)stickerSheetControllerForAvatarRecord:(id)arg1;
- (id)stickerSheetViewForAvatarRecord:(id)arg1;

@end
