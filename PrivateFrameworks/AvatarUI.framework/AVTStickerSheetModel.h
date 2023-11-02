
@interface AVTStickerSheetModel : NSObject {
    <AVTAvatarRecord> * _avatarRecord;
    AVTUIEnvironment * _environment;
    AVTUIStickerPlaceholderProviderFactory * _placeholderProviderFactory;
    NSArray * _stickerItems;
    AVTUIStickerRenderer * _stickerRenderer;
    <AVTTaskScheduler> * _taskScheduler;
}

@property (nonatomic, readonly) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) AVTUIStickerPlaceholderProviderFactory *placeholderProviderFactory;
@property (nonatomic, readonly, copy) NSArray *stickerItems;
@property (nonatomic, readonly) AVTUIStickerRenderer *stickerRenderer;
@property (nonatomic, readonly) <AVTTaskScheduler> *taskScheduler;

+ (id)sheetModelForAvatarRecord:(id)arg1 withConfigurations:(id)arg2 cache:(id)arg3 taskScheduler:(id)arg4 renderingQueue:(id)arg5 encodingQueue:(id)arg6 stickerGeneratorPool:(id)arg7 imageProvider:(id)arg8 environment:(id)arg9;

- (void).cxx_destruct;
- (id)avatarRecord;
- (id)environment;
- (id)initWithAvatarRecord:(id)arg1 stickerItems:(id)arg2 stickerRenderer:(id)arg3 taskScheduler:(id)arg4 placeholderProviderFactory:(id)arg5 environment:(id)arg6;
- (id)placeholderProviderFactory;
- (id)stickerItems;
- (id)stickerRenderer;
- (id)taskScheduler;

@end
