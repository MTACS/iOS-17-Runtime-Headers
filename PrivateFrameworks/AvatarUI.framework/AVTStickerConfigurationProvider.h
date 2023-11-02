
@interface AVTStickerConfigurationProvider : NSObject {
    AVTUIEnvironment * _environment;
    NSCache * _stickerConfigurationCache;
    NSArray * _stickerConfigurationNames;
    NSArray<AVTStickerPack> * _stickerPacks;
}

@property (nonatomic, retain) AVTUIEnvironment *environment;
@property (nonatomic, retain) NSCache *stickerConfigurationCache;
@property (nonatomic, retain) NSArray *stickerConfigurationNames;
@property (nonatomic, retain) NSArray<AVTStickerPack> *stickerPacks;

- (void).cxx_destruct;
- (id)availableStickerNamesForAvatarRecord:(id)arg1;
- (id)environment;
- (id)filteredStickerConfigurations:(id)arg1;
- (id)initWithEnvironment:(id)arg1 forStickerPacks:(id)arg2 stickerConfigurationNames:(id)arg3;
- (void)setEnvironment:(id)arg1;
- (void)setStickerConfigurationCache:(id)arg1;
- (void)setStickerConfigurationNames:(id)arg1;
- (void)setStickerPacks:(id)arg1;
- (id)stickerConfigurationCache;
- (id)stickerConfigurationForAvatarRecord:(id)arg1 stickerName:(id)arg2;
- (id)stickerConfigurationNames;
- (id)stickerConfigurationsForAvatarRecord:(id)arg1;
- (id)stickerPacks;

@end
