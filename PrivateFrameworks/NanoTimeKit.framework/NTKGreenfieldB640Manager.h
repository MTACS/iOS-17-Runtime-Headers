
@interface NTKGreenfieldB640Manager : NSObject <NTKFaceCollectionObserver> {
    NSUUID * _addedFaceID;
    NSBundle * _bandImageBundle;
    NSString * _bandImagePath;
    <NTKGreenfieldB640WatchFacesManagerDelegate> * _delegate;
    NSError * _error;
    NTKGreenfieldB640Model * _greenfieldB640Model;
    NTKPersistentFaceCollection * _library;
    unsigned long long  _libraryState;
    NSTimer * _libraryTimeoutTimer;
    ProductKitCatalog * _productKitCatalog;
    NSString * _scannedCodeIdentifier;
    NTKGreenfieldDecodedRecipe * _selectedRecipe;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSString * _sourceApplicationBundleIdentifier;
    unsigned long long  _state;
    NTKFace * _watchFaceAddedToLibrary;
    NSArray * _watchFacesDecodeErrors;
    NSArray * _watchFacesModels;
}

@property (nonatomic, readonly) NSUUID *addedFaceID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKGreenfieldB640WatchFacesManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_analyticsExitScreenNameForCurrentState;
- (id)_analyticsModelForAddFaceEventsForWatchFace:(id)arg1;
- (void)_cancelLibraryTimeoutTimer;
- (void)_decodeWatchFacesUrls:(id)arg1;
- (void)_handleB640WatchFaceManagerDidFinishWithError:(id)arg1 watchFaceModels:(id)arg2;
- (void)_handleProductKitUrl:(id)arg1;
- (void)_libraryTimeoutTimerFired;
- (void)_moveToDecodeStateCompletedIfPossible;
- (void)_setLibraryState:(unsigned long long)arg1;
- (void)_startLibraryTimeoutTimer;
- (void)_updateComplicationForDecodedRecipe:(id)arg1 installedItemIds:(id)arg2 installedBundleIds:(id)arg3;
- (id)addedFaceID;
- (unsigned long long)bandVariantForPairedDevice;
- (void)decodeUrl:(id)arg1 sourceApplicationBundleIdentifier:(id)arg2;
- (id)delegate;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)handleAddToMyFacesAction;
- (void)handleDidExitGreenfieldB640Flow;
- (void)handleWatchFaceSelectedActionWithSelectedIndex:(long long)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
