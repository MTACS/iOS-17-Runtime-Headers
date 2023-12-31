
@interface VUIMediaLibraryApplicationController : NSObject {
    <VUIMediaLibraryApplicationControllerDelegate> * _delegate;
}

@property (nonatomic, retain) <VUIMediaLibraryApplicationControllerDelegate> *delegate;

+ (id)defaultController;

- (void).cxx_destruct;
- (unsigned long long)assetTypeForRentalMediaItem:(id)arg1;
- (void)clearCellularPlaybackQualityOverrides;
- (id)delegate;
- (bool)isCellularDataForPlaybackEnabled;
- (void)overrideCellularPlaybackQuality:(unsigned long long)arg1 forMediaItem:(id)arg2;
- (void)removeRentalMediaItem:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (id)settingsURL;
- (bool)shouldWarnAboutPlaybackQualityForRentalMediaItem:(id)arg1;

@end
