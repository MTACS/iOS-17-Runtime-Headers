
@interface SBHAppLibrarySettings : PTSettings {
    double  _criticalDismissalThresholdDurationFactor;
    unsigned long long  _minimumNumberOfIconsToShowSectionHeaderInDeweySearch;
    double  _minimumTranslationFractionForSwipeToDismiss;
    double  _minimumVelocityForSwipeToDismiss;
}

@property (nonatomic) double criticalDismissalThresholdDurationFactor;
@property (nonatomic) unsigned long long minimumNumberOfIconsToShowSectionHeaderInDeweySearch;
@property (nonatomic) double minimumTranslationFractionForSwipeToDismiss;
@property (nonatomic) double minimumVelocityForSwipeToDismiss;

+ (id)settingsControllerModule;

- (double)criticalDismissalThresholdDurationFactor;
- (unsigned long long)minimumNumberOfIconsToShowSectionHeaderInDeweySearch;
- (double)minimumTranslationFractionForSwipeToDismiss;
- (double)minimumVelocityForSwipeToDismiss;
- (void)setCriticalDismissalThresholdDurationFactor:(double)arg1;
- (void)setDefaultValues;
- (void)setMinimumNumberOfIconsToShowSectionHeaderInDeweySearch:(unsigned long long)arg1;
- (void)setMinimumTranslationFractionForSwipeToDismiss:(double)arg1;
- (void)setMinimumVelocityForSwipeToDismiss:(double)arg1;

@end
