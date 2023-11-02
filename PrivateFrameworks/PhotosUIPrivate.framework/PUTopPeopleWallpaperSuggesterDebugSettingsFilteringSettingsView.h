
@interface PUTopPeopleWallpaperSuggesterDebugSettingsFilteringSettingsView : UIScrollView {
    UISwitch * _favoritePersonsAreVIPsCheckBox;
    PUTopPeopleWallpaperSuggesterFilteringContext * _filteringContext;
    NSArray * _highlights;
    UITextField * _maximumFaceRollTextField;
    UITextField * _maximumFaceSizeTextField;
    UITextField * _minimumCropScoreTextField;
    UITextField * _minimumFaceQualityTextField;
    UITextField * _minimumFaceSizeTextField;
    UITextField * _minimumNumberOfCandidatesForEligiblePersonTextField;
    UITextField * _minimumWallpaperScoreTextField;
    UITextField * _normalizedDeviationForImportantPersonsTextField;
    UITextField * _normalizedDeviationForVeryImportantPersonsTextField;
    NSArray * _persons;
    UISwitch * _requiresNoBlinkCheckBox;
    UISwitch * _requiresSmileCheckBox;
    UITextField * _timeIntervalForCandidateDedupingTextField;
}

@property (readonly) UISwitch *favoritePersonsAreVIPsCheckBox;
@property (readonly) UITextField *maximumFaceRollTextField;
@property (readonly) UITextField *maximumFaceSizeTextField;
@property (readonly) UITextField *minimumCropScoreTextField;
@property (readonly) UITextField *minimumFaceQualityTextField;
@property (readonly) UITextField *minimumFaceSizeTextField;
@property (readonly) UITextField *minimumNumberOfCandidatesForEligiblePersonTextField;
@property (readonly) UITextField *minimumWallpaperScoreTextField;
@property (readonly) UITextField *normalizedDeviationForImportantPersonsTextField;
@property (readonly) UITextField *normalizedDeviationForVeryImportantPersonsTextField;
@property (readonly) UISwitch *requiresNoBlinkCheckBox;
@property (readonly) UISwitch *requiresSmileCheckBox;
@property (readonly) UITextField *timeIntervalForCandidateDedupingTextField;

- (void).cxx_destruct;
- (id)aspectRatios;
- (void)favoritePersonsAreVIPsChanged:(id)arg1;
- (id)favoritePersonsAreVIPsCheckBox;
- (id)highlights;
- (long long)indexOfRowWithPersonLocalIdentifiers:(id)arg1;
- (id)initWithFilteringContext:(id)arg1;
- (void)maximumFaceRollChanged:(id)arg1;
- (id)maximumFaceRollTextField;
- (void)maximumFaceSizeChanged:(id)arg1;
- (id)maximumFaceSizeTextField;
- (void)minimumCropScoreChanged:(id)arg1;
- (id)minimumCropScoreTextField;
- (void)minimumFaceQualityChanged:(id)arg1;
- (id)minimumFaceQualityTextField;
- (void)minimumFaceSizeChanged:(id)arg1;
- (id)minimumFaceSizeTextField;
- (void)minimumNumberOfCandidatesForEligiblePersonChanged:(id)arg1;
- (id)minimumNumberOfCandidatesForEligiblePersonTextField;
- (void)minimumWallpaperScoreChanged:(id)arg1;
- (id)minimumWallpaperScoreTextField;
- (void)normalizedDeviationForImportantPersonsChanged:(id)arg1;
- (id)normalizedDeviationForImportantPersonsTextField;
- (void)normalizedDeviationForVeryImportantPersonsChanged:(id)arg1;
- (id)normalizedDeviationForVeryImportantPersonsTextField;
- (void)requiresNoBlinkChanged:(id)arg1;
- (id)requiresNoBlinkCheckBox;
- (void)requiresSmileChanged:(id)arg1;
- (id)requiresSmileCheckBox;
- (void)timeIntervalForCandidateDedupingChanged:(id)arg1;
- (id)timeIntervalForCandidateDedupingTextField;

@end
