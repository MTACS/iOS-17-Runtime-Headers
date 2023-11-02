
@interface GKNetworkImageSource : GKImageSource {
    NSMutableDictionary * _loadingGroups;
}

@property (nonatomic, retain) NSMutableDictionary *loadingGroups;

- (void).cxx_destruct;
- (bool)imageNeedsRefresh:(id)arg1;
- (void)loadAndCacheAvatarFromGamedForURLString:(id)arg1 useUIImage:(bool)arg2 cacheSubdirectory:(id)arg3 reference:(id)arg4 queue:(id)arg5 handler:(id /* block */)arg6;
- (void)loadImageForURLString:(id)arg1 loader:(id /* block */)arg2 reference:(id)arg3 queue:(id)arg4 handler:(id /* block */)arg5;
- (void)loadImageForURLString:(id)arg1 reference:(id)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (id)loadingGroups;
- (void)setLoadingGroups:(id)arg1;

@end
