
@interface PUImageEditPluginSession : PUEditPluginSession {
    bool  _allowLivePhotoExtensions;
}

@property (nonatomic) bool allowLivePhotoExtensions;

- (bool)allowLivePhotoExtensions;
- (id)imageDataSource;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(id /* block */)arg2;
- (unsigned long long)pluginManagerMediaType;
- (void)setAllowLivePhotoExtensions:(bool)arg1;
- (void)shouldLaunchPlugin:(id)arg1 completion:(id /* block */)arg2;

@end
