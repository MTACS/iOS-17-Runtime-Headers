
@interface AVTStickerRecentsMigrator : NSObject {
    AVTUILogger * _logger;
    bool  _migrationHasBeenPerformed;
    AVTStickerConfigurationProvider * _stickerConfigurationProvider;
    <AVTAvatarStoreInternal> * _store;
}

@property (nonatomic) AVTUILogger *logger;
@property (nonatomic) bool migrationHasBeenPerformed;
@property (nonatomic, retain) AVTStickerConfigurationProvider *stickerConfigurationProvider;
@property (nonatomic, retain) <AVTAvatarStoreInternal> *store;

- (void).cxx_destruct;
- (id)initWithStore:(id)arg1 stickerConfigurationProvider:(id)arg2 environment:(id)arg3;
- (id)logger;
- (bool)migrationHasBeenPerformed;
- (void)performMigrationIfNeeded;
- (void)setLogger:(id)arg1;
- (void)setMigrationHasBeenPerformed:(bool)arg1;
- (void)setNeedsMigrationOnNextLaunch;
- (void)setStickerConfigurationProvider:(id)arg1;
- (void)setStore:(id)arg1;
- (id)stickerConfigurationProvider;
- (id)store;

@end
