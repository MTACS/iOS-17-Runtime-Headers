
@interface SBSystemActionSettings : PTSettings {
    SBSystemActionCoachingSettings * _coachingSettings;
    SBSystemActionPreviewSettings * _previewSettings;
}

@property (nonatomic, readonly) SBSystemActionCoachingSettings *coachingSettings;
@property (nonatomic, readonly) SBSystemActionPreviewSettings *previewSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)coachingSettings;
- (id)previewSettings;
- (void)setDefaultValues;

@end
