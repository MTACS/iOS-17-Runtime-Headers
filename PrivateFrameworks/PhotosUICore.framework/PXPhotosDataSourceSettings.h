
@interface PXPhotosDataSourceSettings : PXSettings {
    double  _delayChanges;
    bool  _slowBackgroundFetch;
}

@property (nonatomic) double delayChanges;
@property (nonatomic) bool slowBackgroundFetch;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (double)delayChanges;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setDelayChanges:(double)arg1;
- (void)setSlowBackgroundFetch:(bool)arg1;
- (bool)slowBackgroundFetch;

@end
