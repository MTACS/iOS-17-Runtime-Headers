
@protocol PUWallpaperRenderingDelegate <NSObject>

@required

- (void)renderer:(id <PUWallpaperRenderer>)arg1 didInitializeWithEnvironment:(id <PUWallpaperRenderingEnvironment>)arg2;
- (void)renderer:(id <PUWallpaperRenderer>)arg1 didUpdateEnvironment:(id <PUWallpaperRenderingEnvironment>)arg2 withTransition:(id <PUWallpaperTransition>)arg3;
- (void)rendererDidInvalidate:(id <PUWallpaperRenderer>)arg1;

@end
