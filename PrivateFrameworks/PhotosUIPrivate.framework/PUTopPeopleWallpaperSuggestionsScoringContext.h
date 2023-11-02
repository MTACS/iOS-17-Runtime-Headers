
@interface PUTopPeopleWallpaperSuggestionsScoringContext : NSObject {
    double  _aestheticFactor;
    double  _atHomeOrWorkFactor;
    double  _croppingFactor;
    double  _favoriteFactor;
    double  _interactionFactor;
    double  _maximumSizeAllowedForFaces;
    double  _meaningFactor;
    double  _peopleFactor;
    double  _wallpaperFactor;
}

@property (nonatomic) double aestheticFactor;
@property (nonatomic) double atHomeOrWorkFactor;
@property (nonatomic) double croppingFactor;
@property (nonatomic) double favoriteFactor;
@property (nonatomic) double interactionFactor;
@property (nonatomic) double maximumSizeAllowedForFaces;
@property (nonatomic) double meaningFactor;
@property (nonatomic) double peopleFactor;
@property (nonatomic) double wallpaperFactor;

- (double)aestheticFactor;
- (double)atHomeOrWorkFactor;
- (double)croppingFactor;
- (id)dictionaryRepresentation;
- (double)favoriteFactor;
- (id)init;
- (double)interactionFactor;
- (double)maximumSizeAllowedForFaces;
- (double)meaningFactor;
- (double)peopleFactor;
- (void)setAestheticFactor:(double)arg1;
- (void)setAtHomeOrWorkFactor:(double)arg1;
- (void)setCroppingFactor:(double)arg1;
- (void)setFavoriteFactor:(double)arg1;
- (void)setInteractionFactor:(double)arg1;
- (void)setMaximumSizeAllowedForFaces:(double)arg1;
- (void)setMeaningFactor:(double)arg1;
- (void)setPeopleFactor:(double)arg1;
- (void)setWallpaperFactor:(double)arg1;
- (double)wallpaperFactor;

@end
