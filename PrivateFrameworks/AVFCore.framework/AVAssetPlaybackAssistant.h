
@interface AVAssetPlaybackAssistant : NSObject {
    AVAsset * _asset;
}

+ (id)assetPlaybackAssistantWithAsset:(id)arg1;

- (id)_playbackConfigurationOptions;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (void)loadPlaybackConfigurationOptionsWithCompletionHandler:(id /* block */)arg1;

@end
