
@interface PXAlbumsDebugUISettings : PXSettings {
    NSString * _customDebugAlbumTitle;
    NSString * _customDebugInternalPredicate;
    NSString * _customDebugPredicate;
    bool  _showBestKeyFrameDebugAlbum;
    bool  _showCustomDebugAlbum;
    bool  _showDreamyDebugAlbum;
    bool  _showGazeDebugAlbum;
    bool  _showUtilitiesDebugAlbum;
}

@property (nonatomic, copy) NSString *customDebugAlbumTitle;
@property (nonatomic, copy) NSString *customDebugInternalPredicate;
@property (nonatomic, copy) NSString *customDebugPredicate;
@property (nonatomic) bool showBestKeyFrameDebugAlbum;
@property (nonatomic) bool showCustomDebugAlbum;
@property (nonatomic) bool showDreamyDebugAlbum;
@property (nonatomic) bool showGazeDebugAlbum;
@property (nonatomic) bool showUtilitiesDebugAlbum;

+ (id /* block */)_predicateValidatorUsingInternalPredicate:(bool)arg1;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)customDebugAlbumTitle;
- (id)customDebugInternalPredicate;
- (id)customDebugPredicate;
- (id)parentSettings;
- (void)setCustomDebugAlbumTitle:(id)arg1;
- (void)setCustomDebugInternalPredicate:(id)arg1;
- (void)setCustomDebugPredicate:(id)arg1;
- (void)setDefaultValues;
- (void)setShowBestKeyFrameDebugAlbum:(bool)arg1;
- (void)setShowCustomDebugAlbum:(bool)arg1;
- (void)setShowDreamyDebugAlbum:(bool)arg1;
- (void)setShowGazeDebugAlbum:(bool)arg1;
- (void)setShowUtilitiesDebugAlbum:(bool)arg1;
- (bool)showBestKeyFrameDebugAlbum;
- (bool)showCustomDebugAlbum;
- (bool)showDreamyDebugAlbum;
- (bool)showGazeDebugAlbum;
- (bool)showUtilitiesDebugAlbum;

@end
