
@interface AVTStickerChangeObserver : NSObject {
    AVTCoreEnvironment * _environment;
    <AVTPBackendImageHandlingDelegate> * _imageHandlingDelegate;
    <AVTStickerBackend> * _stickerBackend;
}

@property (nonatomic, readonly) AVTCoreEnvironment *environment;
@property (nonatomic) <AVTPBackendImageHandlingDelegate> *imageHandlingDelegate;
@property (nonatomic, readonly) <AVTStickerBackend> *stickerBackend;

- (void).cxx_destruct;
- (id)environment;
- (id)imageHandlingDelegate;
- (id)initWithStickerBackend:(id)arg1 environment:(id)arg2;
- (void)processChangesForChangeTracker:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setImageHandlingDelegate:(id)arg1;
- (id)stickerBackend;

@end
