
@interface PUTopPeopleWallpaperSuggestionsDebugSettingsDistancingSettingsView : UIView {
    PUTopPeopleWallpaperSuggestionsDistancingContext * _distancingContext;
    UITextField * _locationFactorTextField;
    UITextField * _locationPivotTextField;
    UITextField * _maximumNumberOfSuggestionsWithPeopleTextField;
    UITextField * _maximumNumberOfSuggestionsWithoutPeopleTextField;
    UITextField * _peopleFactorTextField;
    UITextField * _peoplePivotTextField;
    UITextField * _sceneprintFactorTextField;
    UITextField * _sceneprintPivotTextField;
    UITextField * _timeFactorTextField;
    UITextField * _timePivotTextField;
}

@property (readonly) UITextField *locationFactorTextField;
@property (readonly) UITextField *locationPivotTextField;
@property (readonly) UITextField *maximumNumberOfSuggestionsWithPeopleTextField;
@property (readonly) UITextField *maximumNumberOfSuggestionsWithoutPeopleTextField;
@property (readonly) UITextField *peopleFactorTextField;
@property (readonly) UITextField *peoplePivotTextField;
@property (readonly) UITextField *sceneprintFactorTextField;
@property (readonly) UITextField *sceneprintPivotTextField;
@property (readonly) UITextField *timeFactorTextField;
@property (readonly) UITextField *timePivotTextField;

- (void).cxx_destruct;
- (id)initWithDistancingContext:(id)arg1;
- (id)locationFactorTextField;
- (id)locationPivotTextField;
- (id)maximumNumberOfSuggestionsWithPeopleTextField;
- (id)maximumNumberOfSuggestionsWithoutPeopleTextField;
- (id)peopleFactorTextField;
- (id)peoplePivotTextField;
- (id)sceneprintFactorTextField;
- (id)sceneprintPivotTextField;
- (void)setLocationFactor:(id)arg1;
- (void)setLocationPivot:(id)arg1;
- (void)setMaximumNumberOfSuggestionsWithPeople:(id)arg1;
- (void)setMaximumNumberOfSuggestionsWithoutPeople:(id)arg1;
- (void)setPeopleFactor:(id)arg1;
- (void)setPeoplePivot:(id)arg1;
- (void)setSceneprintFactor:(id)arg1;
- (void)setSceneprintPivot:(id)arg1;
- (void)setTimeFactor:(id)arg1;
- (void)setTimePivot:(id)arg1;
- (id)timeFactorTextField;
- (id)timePivotTextField;

@end
