
@protocol AVTAvatarStoreInternal <AVTAvatarStore, AVTStickerBackend>

@required

+ (unsigned long long)maximumNumberOfFetchableAvatars;
+ (unsigned long long)maximumNumberOfSavableAvatars;

@end
