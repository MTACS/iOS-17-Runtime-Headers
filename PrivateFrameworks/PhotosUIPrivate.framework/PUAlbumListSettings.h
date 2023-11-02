
@interface PUAlbumListSettings : PXSettings {
    bool  _allowNavigationTitleEditing;
    bool  _shouldUseEditorialLayout;
}

@property (nonatomic) bool allowNavigationTitleEditing;
@property (nonatomic) bool shouldUseEditorialLayout;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)allowNavigationTitleEditing;
- (id)parentSettings;
- (void)setAllowNavigationTitleEditing:(bool)arg1;
- (void)setDefaultValues;
- (void)setShouldUseEditorialLayout:(bool)arg1;
- (bool)shouldUseEditorialLayout;

@end
