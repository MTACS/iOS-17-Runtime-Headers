
@protocol NTKGreenfieldB640WatchFacesManagerDelegate <NSObject>

@required

- (void)didFinishAddingWatchFaceToLibrary:(NTKGreenfieldB640Manager *)arg1;
- (void)didStartDecodingWatchFaces:(NTKGreenfieldB640Manager *)arg1;
- (void)greenfieldB640WatchFacesManager:(NTKGreenfieldB640Manager *)arg1 didSelectWatchFaceAtIndex:(long long)arg2;
- (void)greenfieldB640WatchFacesManager:(NTKGreenfieldB640Manager *)arg1 didSelectWatchFaceWithError:(NSError *)arg2;
- (void)greenfieldB640WatchFacesManager:(NTKGreenfieldB640Manager *)arg1 updateStateToError:(NTKGreenfieldB640Model *)arg2;
- (void)greenfieldB640WatchFacesManager:(NTKGreenfieldB640Manager *)arg1 updateStateToSelectWatchFacesState:(NTKGreenfieldB640Model *)arg2;

@end
