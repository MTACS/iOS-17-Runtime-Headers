
@interface CalculateUnit : NSObject {
    int  _exponent;
    NSString * _name;
    CalculateUnit * _nextSmallest;
    UnitInfo * _unitInfo;
    unsigned long long  _unitType;
}

@property (nonatomic, readonly) int exponent;
@property (nonatomic, readonly) bool formatNextSmallest;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) CalculateUnit *nextSmallest;
@property (nonatomic, retain) UnitInfo *unitInfo;
@property (nonatomic, readonly) unsigned long long unitType;

+ (id)unitWithID:(int)arg1 unitsInfo:(id)arg2 exponent:(int)arg3;

- (void).cxx_destruct;
- (id)compactNameForLocalization:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (int)exponent;
- (bool)formatNextSmallest;
- (bool)isDenominator;
- (bool)isEqual:(id)arg1;
- (bool)isNumerator;
- (id)localizedNameForValue:(double)arg1 localization:(id)arg2 retainingFormat:(bool)arg3;
- (id)name;
- (id)nextSmallest;
- (void)setNextSmallest:(id)arg1;
- (void)setUnitInfo:(id)arg1;
- (id)unitInfo;
- (unsigned long long)unitType;

@end
