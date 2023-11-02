
@protocol PXCinematicEditControllerDelegate <NSObject>

@required

- (void)cineScriptBecameAvailable:(PTCinematographyScript *)arg1;
- (void)cineScriptCouldNotInitializeWithError:(NSError *)arg1;
- (PICompositionController *)compositionController;
- (void)disableCinematicUIForLoadingAsset;

@optional

- (void)didRemoveUserDecision;
- (void)removeUserDecision:(PTCinematographyDecision *)arg1;

@end
