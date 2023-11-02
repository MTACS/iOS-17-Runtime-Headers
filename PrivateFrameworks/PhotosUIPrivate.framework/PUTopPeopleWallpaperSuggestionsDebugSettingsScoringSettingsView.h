
@interface PUTopPeopleWallpaperSuggestionsDebugSettingsScoringSettingsView : UIView {
    UITextField * _aestheticFactorTextField;
    UITextField * _atHomeOrWorkFactorTextField;
    UITextField * _favoriteFactorTextField;
    UITextField * _interactionFactorTextField;
    UITextField * _maximumFaceSizeTextField;
    UITextField * _meaningFactorTextField;
    UITextField * _peopleFactorTextField;
    PUTopPeopleWallpaperSuggestionsScoringContext * _scoringContext;
}

@property (readonly) UITextField *aestheticFactorTextField;
@property (readonly) UITextField *atHomeOrWorkFactorTextField;
@property (readonly) UITextField *favoriteFactorTextField;
@property (readonly) UITextField *interactionFactorTextField;
@property (readonly) UITextField *maximumFaceSizeTextField;
@property (readonly) UITextField *meaningFactorTextField;
@property (readonly) UITextField *peopleFactorTextField;

- (void).cxx_destruct;
- (id)aestheticFactorTextField;
- (id)atHomeOrWorkFactorTextField;
- (id)favoriteFactorTextField;
- (id)initWithScoringContext:(id)arg1;
- (id)interactionFactorTextField;
- (id)maximumFaceSizeTextField;
- (id)meaningFactorTextField;
- (id)peopleFactorTextField;
- (void)setAestheticFactor:(id)arg1;
- (void)setAtHomeOrWorkFactor:(id)arg1;
- (void)setFavoriteFactor:(id)arg1;
- (void)setInteractionFactor:(id)arg1;
- (void)setMaximumFaceSize:(id)arg1;
- (void)setMeaningFactor:(id)arg1;
- (void)setPeopleFactor:(id)arg1;

@end
