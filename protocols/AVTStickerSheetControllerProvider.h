
@protocol AVTStickerSheetControllerProvider <NSObject>

@required

- (<AVTStickerSheetController> *)stickerSheetControllerForSelectedAvatar:(id <AVTAvatarRecord>)arg1 stickerSheetModel:(AVTStickerSheetModel *)arg2 taskScheduler:(id <AVTStickerTaskScheduler>)arg3;

@end
