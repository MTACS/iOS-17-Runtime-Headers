
@interface CNAvatarStickerGeneratorProvider : NSObject {
    <AVTAvatarRecord> * _avatarRecord;
    AVTStickerGenerator * _generator;
}

@property (nonatomic, retain) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, retain) AVTStickerGenerator *generator;

- (void).cxx_destruct;
- (id)avatarRecord;
- (id)generator;
- (id)initWithAvatarRecord:(id)arg1;
- (void)setAvatarRecord:(id)arg1;
- (void)setGenerator:(id)arg1;

@end
