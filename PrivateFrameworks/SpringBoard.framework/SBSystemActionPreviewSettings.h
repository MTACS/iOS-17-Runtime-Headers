
@interface SBSystemActionPreviewSettings : PTSettings {
    double  _additionalUrgencyInterval;
    double  _minimumPreviewInterval;
}

@property (nonatomic) double additionalUrgencyInterval;
@property (nonatomic) double minimumPreviewInterval;

+ (id)settingsControllerModule;

- (double)additionalUrgencyInterval;
- (double)minimumPreviewInterval;
- (void)setAdditionalUrgencyInterval:(double)arg1;
- (void)setDefaultValues;
- (void)setMinimumPreviewInterval:(double)arg1;

@end
