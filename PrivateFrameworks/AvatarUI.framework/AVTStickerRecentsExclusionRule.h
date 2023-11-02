
@interface AVTStickerRecentsExclusionRule : NSObject {
    NSString * _avatarRecordIdentifier;
    NSString * _stickerConfigurationIdentifier;
}

@property (nonatomic, retain) NSString *avatarRecordIdentifier;
@property (nonatomic, retain) NSString *stickerConfigurationIdentifier;

- (void).cxx_destruct;
- (id)avatarRecordIdentifier;
- (void)setAvatarRecordIdentifier:(id)arg1;
- (void)setStickerConfigurationIdentifier:(id)arg1;
- (id)stickerConfigurationIdentifier;

@end
