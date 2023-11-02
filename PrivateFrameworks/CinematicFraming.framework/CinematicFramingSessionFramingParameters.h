
@interface CinematicFramingSessionFramingParameters : NSObject {
    float  deadbandHeightFractionOfScreenHeight;
    float  deadbandTopOffsetFractionOfScreenHeight;
    float  deadbandWidthFractionOfScreenWidth;
    float  deadbandWidthMaxFraction;
    float  deadbandWidthMinFraction;
    float  horizontalMinAbsoluteDifferenceThreshold;
    float  horizontalMinRelativeDifferenceThreshold;
    float  minCropSize;
    float  subjectHeightPaddingMultiplier;
    float  subjectWidthPaddingMultiplier;
    float  topMarginFractionRelaxed;
    float  topMarginFractionTight;
    float  widthPaddingAdditive;
    float  widthPaddingMultiplierNoFocusRelaxed;
    float  widthPaddingMultiplierNoFocusTight;
}

@property (nonatomic) float deadbandHeightFractionOfScreenHeight;
@property (nonatomic) float deadbandTopOffsetFractionOfScreenHeight;
@property (nonatomic) float deadbandWidthFractionOfScreenWidth;
@property (nonatomic) float deadbandWidthMaxFraction;
@property (nonatomic) float deadbandWidthMinFraction;
@property (nonatomic) float horizontalMinAbsoluteDifferenceThreshold;
@property (nonatomic) float horizontalMinRelativeDifferenceThreshold;
@property (nonatomic) float minCropSize;
@property (nonatomic) float subjectHeightPaddingMultiplier;
@property (nonatomic) float subjectWidthPaddingMultiplier;
@property (nonatomic) float topMarginFractionRelaxed;
@property (nonatomic) float topMarginFractionTight;
@property (nonatomic) float widthPaddingAdditive;
@property (nonatomic) float widthPaddingMultiplierNoFocusRelaxed;
@property (nonatomic) float widthPaddingMultiplierNoFocusTight;

- (void)_initializeWithPlist:(id)arg1;
- (id)asDictionary;
- (float)deadbandHeightFractionOfScreenHeight;
- (float)deadbandTopOffsetFractionOfScreenHeight;
- (float)deadbandWidthFractionOfScreenWidth;
- (float)deadbandWidthMaxFraction;
- (float)deadbandWidthMinFraction;
- (float)horizontalMinAbsoluteDifferenceThreshold;
- (float)horizontalMinRelativeDifferenceThreshold;
- (id)initWithPlist:(id)arg1;
- (id)initWithPlistPath:(id)arg1;
- (float)minCropSize;
- (void)setDeadbandHeightFractionOfScreenHeight:(float)arg1;
- (void)setDeadbandTopOffsetFractionOfScreenHeight:(float)arg1;
- (void)setDeadbandWidthFractionOfScreenWidth:(float)arg1;
- (void)setDeadbandWidthMaxFraction:(float)arg1;
- (void)setDeadbandWidthMinFraction:(float)arg1;
- (void)setHorizontalMinAbsoluteDifferenceThreshold:(float)arg1;
- (void)setHorizontalMinRelativeDifferenceThreshold:(float)arg1;
- (void)setMinCropSize:(float)arg1;
- (void)setSubjectHeightPaddingMultiplier:(float)arg1;
- (void)setSubjectWidthPaddingMultiplier:(float)arg1;
- (void)setTopMarginFractionRelaxed:(float)arg1;
- (void)setTopMarginFractionTight:(float)arg1;
- (void)setWidthPaddingAdditive:(float)arg1;
- (void)setWidthPaddingMultiplierNoFocusRelaxed:(float)arg1;
- (void)setWidthPaddingMultiplierNoFocusTight:(float)arg1;
- (float)subjectHeightPaddingMultiplier;
- (float)subjectWidthPaddingMultiplier;
- (float)topMarginFractionRelaxed;
- (float)topMarginFractionTight;
- (float)widthPaddingAdditive;
- (float)widthPaddingMultiplierNoFocusRelaxed;
- (float)widthPaddingMultiplierNoFocusTight;

@end
