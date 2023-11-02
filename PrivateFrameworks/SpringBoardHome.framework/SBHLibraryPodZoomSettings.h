
@interface SBHLibraryPodZoomSettings : SBHFolderZoomSettings {
    SBFAnimationSettings * _innerFolderCenterZoomSettings;
    SBFAnimationSettings * _innerFolderEdgeZoomSettings;
}

@property (nonatomic, retain) SBFAnimationSettings *innerFolderCenterZoomSettings;
@property (nonatomic, retain) SBFAnimationSettings *innerFolderEdgeZoomSettings;

+ (id)_defaultCentralAnimationSettings;
+ (id)_defaultCrossfadeSettings;
+ (id)_defaultInnerFolderZoomAnimationSettings;
+ (double)_defaultInnerFolderZoomDelay;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)innerFolderCenterZoomSettings;
- (id)innerFolderEdgeZoomSettings;
- (void)setDefaultValues;
- (void)setInnerFolderCenterZoomSettings:(id)arg1;
- (void)setInnerFolderEdgeZoomSettings:(id)arg1;

@end
