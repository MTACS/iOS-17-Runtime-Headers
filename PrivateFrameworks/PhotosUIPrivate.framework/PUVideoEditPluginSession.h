
@interface PUVideoEditPluginSession : PUEditPluginSession {
    bool  _allowLoopingVideoExtensions;
}

@property (nonatomic) bool allowLoopingVideoExtensions;

- (bool)allowLoopingVideoExtensions;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(id /* block */)arg2;
- (unsigned long long)pluginManagerMediaType;
- (void)setAllowLoopingVideoExtensions:(bool)arg1;
- (id)videoDataSource;

@end
