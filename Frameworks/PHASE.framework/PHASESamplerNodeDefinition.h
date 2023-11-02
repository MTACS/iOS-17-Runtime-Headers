
@interface PHASESamplerNodeDefinition : PHASEGeneratorNodeDefinition {
    NSString * _assetIdentifier;
    NSString * _assetUID;
    long long  _cullOption;
    long long  _playbackMode;
}

@property (nonatomic, readonly) NSString *assetIdentifier;
@property (nonatomic, readonly) NSString *assetUID;
@property (nonatomic) long long cullOption;
@property (nonatomic) long long playbackMode;
@property (nonatomic) long long playbackType;

+ (id)new;

- (void).cxx_destruct;
- (id)assetIdentifier;
- (id)assetUID;
- (long long)cullOption;
- (id)init;
- (id)initWithSoundAssetIdentifier:(id)arg1 mixerDefinition:(id)arg2;
- (id)initWithSoundAssetIdentifier:(id)arg1 mixerDefinition:(id)arg2 identifier:(id)arg3;
- (id)initWithSoundAssetUID:(id)arg1 mixerDefinition:(id)arg2;
- (id)initWithSoundAssetUID:(id)arg1 mixerDefinition:(id)arg2 uid:(id)arg3;
- (long long)playbackMode;
- (void)setCullOption:(long long)arg1;
- (void)setPlaybackMode:(long long)arg1;
- (void)setPlaybackType:(long long)arg1;

@end
