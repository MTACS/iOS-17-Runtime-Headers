
@interface PUTopPeopleWallpaperSuggestionsDistancingContext : NSObject {
    double  _locationFactor;
    double  _locationPivot;
    unsigned long long  _maximumNumberOfSuggestionsWithPeople;
    unsigned long long  _maximumNumberOfSuggestionsWithoutPeople;
    double  _peopleFactor;
    double  _peoplePivot;
    double  _sceneprintFactor;
    double  _sceneprintPivot;
    double  _timeFactor;
    double  _timePivot;
}

@property (nonatomic) double locationFactor;
@property (nonatomic) double locationPivot;
@property (nonatomic) unsigned long long maximumNumberOfSuggestionsWithPeople;
@property (nonatomic) unsigned long long maximumNumberOfSuggestionsWithoutPeople;
@property (nonatomic) double peopleFactor;
@property (nonatomic) double peoplePivot;
@property (nonatomic) double sceneprintFactor;
@property (nonatomic) double sceneprintPivot;
@property (nonatomic) double timeFactor;
@property (nonatomic) double timePivot;

- (id)dictionaryRepresentation;
- (id)init;
- (double)locationFactor;
- (double)locationPivot;
- (unsigned long long)maximumNumberOfSuggestionsWithPeople;
- (unsigned long long)maximumNumberOfSuggestionsWithoutPeople;
- (double)peopleFactor;
- (double)peoplePivot;
- (double)sceneprintFactor;
- (double)sceneprintPivot;
- (void)setLocationFactor:(double)arg1;
- (void)setLocationPivot:(double)arg1;
- (void)setMaximumNumberOfSuggestionsWithPeople:(unsigned long long)arg1;
- (void)setMaximumNumberOfSuggestionsWithoutPeople:(unsigned long long)arg1;
- (void)setPeopleFactor:(double)arg1;
- (void)setPeoplePivot:(double)arg1;
- (void)setSceneprintFactor:(double)arg1;
- (void)setSceneprintPivot:(double)arg1;
- (void)setTimeFactor:(double)arg1;
- (void)setTimePivot:(double)arg1;
- (double)timeFactor;
- (double)timePivot;

@end
