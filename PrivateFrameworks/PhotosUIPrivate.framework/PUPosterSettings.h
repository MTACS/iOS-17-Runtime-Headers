
@interface PUPosterSettings : PXSettings {
    PUPosterHeadroomSettings * _headroomSettings;
}

@property (nonatomic, retain) PUPosterHeadroomSettings *headroomSettings;

+ (id)_photosUICoreSettings;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)createChildren;
- (id)headroomSettings;
- (id)initWithDefaultValues;
- (id)parentSettings;
- (id)reparentedRootSettings;
- (void)setHeadroomSettings:(id)arg1;

@end
