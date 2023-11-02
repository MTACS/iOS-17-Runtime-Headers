
@interface SBViewSnapshotProvider : NSObject {
    id /* block */  _completionBlock;
    double  _delay;
    bool  _includeWindowSceneWallpaper;
    long long  _orientation;
    UIView * _view;
    SBWindowScene * _windowScene;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) double delay;
@property (nonatomic) bool includeWindowSceneWallpaper;
@property (nonatomic, readonly) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (id)_createSnapshotOfWallpaperAndWindow:(id)arg1;
- (id /* block */)completionBlock;
- (double)delay;
- (bool)includeWindowSceneWallpaper;
- (id)initWithWindowScene:(id)arg1 view:(id)arg2 orientation:(long long)arg3;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDelay:(double)arg1;
- (void)setIncludeWindowSceneWallpaper:(bool)arg1;
- (id)snapshot;
- (void)snapshotAsynchronously:(bool)arg1 withImageBlock:(id /* block */)arg2;
- (void)snapshotWithImageBlock:(id /* block */)arg1;
- (id)windowScene;

@end
