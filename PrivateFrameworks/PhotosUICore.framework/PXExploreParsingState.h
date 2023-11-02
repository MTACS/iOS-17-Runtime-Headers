
@interface PXExploreParsingState : NSObject {
    double  _buildingBlockAspectRatio;
    bool  _canIgnoreNextHeroSide;
    bool  _didMoveBestItemOutOfNextShortRow;
    bool  _didMoveBestItemOutOfPreviousShortRowIntoHeroRow;
    long long  _effectiveLargeHeroDensity;
    long long  _lastHeroRowTag;
    long long  _nextHeroSide;
    long long  _nextRowType;
    long long  _numberOfColumnsOverride;
    long long  _numberOfConsecutiveMediumHeroRows;
    long long  _parseLocation;
}

@property (nonatomic) double buildingBlockAspectRatio;
@property (nonatomic, readonly) bool canIgnoreNextHeroSide;
@property (nonatomic) bool didMoveBestItemOutOfNextShortRow;
@property (nonatomic) bool didMoveBestItemOutOfPreviousShortRowIntoHeroRow;
@property (nonatomic) long long effectiveLargeHeroDensity;
@property (nonatomic) long long lastHeroRowTag;
@property (nonatomic) long long nextHeroSide;
@property (nonatomic) long long nextRowType;
@property (nonatomic) long long numberOfColumnsOverride;
@property (nonatomic) long long numberOfConsecutiveMediumHeroRows;
@property (nonatomic) long long parseLocation;

- (double)buildingBlockAspectRatio;
- (bool)canIgnoreNextHeroSide;
- (bool)didMoveBestItemOutOfNextShortRow;
- (bool)didMoveBestItemOutOfPreviousShortRowIntoHeroRow;
- (long long)effectiveLargeHeroDensity;
- (long long)lastHeroRowTag;
- (long long)nextHeroSide;
- (long long)nextRowType;
- (long long)numberOfColumnsOverride;
- (long long)numberOfConsecutiveMediumHeroRows;
- (long long)parseLocation;
- (void)prepareWithMetrics:(id)arg1;
- (void)setBuildingBlockAspectRatio:(double)arg1;
- (void)setDidMoveBestItemOutOfNextShortRow:(bool)arg1;
- (void)setDidMoveBestItemOutOfPreviousShortRowIntoHeroRow:(bool)arg1;
- (void)setEffectiveLargeHeroDensity:(long long)arg1;
- (void)setLastHeroRowTag:(long long)arg1;
- (void)setNextHeroSide:(long long)arg1;
- (void)setNextRowType:(long long)arg1;
- (void)setNumberOfColumnsOverride:(long long)arg1;
- (void)setNumberOfConsecutiveMediumHeroRows:(long long)arg1;
- (void)setParseLocation:(long long)arg1;

@end
