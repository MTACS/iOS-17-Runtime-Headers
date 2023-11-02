
@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {
    bool  mBandColumn;
    bool  mBandRow;
    NSArray * mEffects;
    bool  mFirstColumn;
    bool  mFirstRow;
    bool  mLastColumn;
    bool  mLastRow;
    bool  mRightToLeft;
    OADTableStyle * mStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultProperties;

- (void).cxx_destruct;
- (bool)bandColumn;
- (bool)bandRow;
- (id)description;
- (id)effects;
- (bool)firstColumn;
- (bool)firstRow;
- (bool)hasBandsNormalToDir:(int)arg1;
- (bool)hasEffects;
- (bool)hasVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2;
- (id)initWithDefaults;
- (bool)lastColumn;
- (bool)lastRow;
- (bool)rightToLeft;
- (void)setBandColumn:(bool)arg1;
- (void)setBandRow:(bool)arg1;
- (void)setEffects:(id)arg1;
- (void)setFirstColumn:(bool)arg1;
- (void)setFirstRow:(bool)arg1;
- (void)setLastColumn:(bool)arg1;
- (void)setLastRow:(bool)arg1;
- (void)setRightToLeft:(bool)arg1;
- (void)setStyle:(id)arg1;
- (id)style;

@end
