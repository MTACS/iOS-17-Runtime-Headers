
@interface PBFHomeScreenPreviewViewBuilder : NSObject {
    <PBFDisplayContext> * _displayContext;
    bool  _excludesHomeScreenDock;
    bool  _excludesSilhouette;
    PRPosterHomeScreenConfiguration * _homeScreenConfiguration;
    id /* block */  _renderingCompletionHandler;
    UIImage * _unlockedPosterSnapshot;
    double  _viewScreenSizeScale;
}

@property (nonatomic, retain) <PBFDisplayContext> *displayContext;
@property (nonatomic) bool excludesHomeScreenDock;
@property (nonatomic) bool excludesSilhouette;
@property (nonatomic, retain) PRPosterHomeScreenConfiguration *homeScreenConfiguration;
@property (nonatomic, copy) id /* block */ renderingCompletionHandler;
@property (nonatomic, retain) UIImage *unlockedPosterSnapshot;
@property (nonatomic) double viewScreenSizeScale;

- (void).cxx_destruct;
- (id)buildView;
- (id)displayContext;
- (bool)excludesHomeScreenDock;
- (bool)excludesSilhouette;
- (id)homeScreenConfiguration;
- (id)init;
- (id /* block */)renderingCompletionHandler;
- (void)setDisplayContext:(id)arg1;
- (void)setExcludesHomeScreenDock:(bool)arg1;
- (void)setExcludesSilhouette:(bool)arg1;
- (void)setHomeScreenConfiguration:(id)arg1;
- (void)setRenderingCompletionHandler:(id /* block */)arg1;
- (void)setUnlockedPosterSnapshot:(id)arg1;
- (void)setViewScreenSizeScale:(double)arg1;
- (id)unlockedPosterSnapshot;
- (double)viewScreenSizeScale;

@end
