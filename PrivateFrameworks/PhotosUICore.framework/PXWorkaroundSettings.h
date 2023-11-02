
@interface PXWorkaroundSettings : PXSettings {
    bool  _shouldWorkAround102440195;
    bool  _shouldWorkAround104295292;
    bool  _shouldWorkAround53118165;
    bool  _shouldWorkAround92398340;
}

@property (nonatomic) bool shouldWorkAround102440195;
@property (nonatomic) bool shouldWorkAround104295292;
@property (nonatomic) bool shouldWorkAround53118165;
@property (nonatomic) bool shouldWorkAround92398340;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (id)parentSettings;
- (void)setDefaultValues;
- (void)setShouldWorkAround102440195:(bool)arg1;
- (void)setShouldWorkAround104295292:(bool)arg1;
- (void)setShouldWorkAround53118165:(bool)arg1;
- (void)setShouldWorkAround92398340:(bool)arg1;
- (bool)shouldWorkAround102440195;
- (bool)shouldWorkAround104295292;
- (bool)shouldWorkAround53118165;
- (bool)shouldWorkAround92398340;
- (long long)version;

@end
