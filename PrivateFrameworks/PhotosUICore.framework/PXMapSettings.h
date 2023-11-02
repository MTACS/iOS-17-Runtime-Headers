
@interface PXMapSettings : PXSettings {
    bool  _enableCuratedPlacesAlbumSnapshot;
}

@property (nonatomic) bool enableCuratedPlacesAlbumSnapshot;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)enableCuratedPlacesAlbumSnapshot;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setEnableCuratedPlacesAlbumSnapshot:(bool)arg1;

@end
