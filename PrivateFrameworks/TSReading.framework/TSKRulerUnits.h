
@interface TSKRulerUnits : NSObject {
    bool  _centerRulerOrigin;
    NSFormatter * _formatter;
    NSFormatter * _highPrecisionFormatter;
    NSFormatter * _lenientFormatter;
    NSFormatter * _lenientHighPrecisionFormatter;
    int  _preferredPixelUnit;
    int  _rulerUnits;
    bool  _showRulerAsPercentage;
}

@property (nonatomic) bool centerRulerOrigin;
@property (nonatomic) int preferredPixelUnit;
@property (nonatomic) int rulerUnits;
@property (nonatomic) bool showRulerAsPercentage;

+ (id)formatterForRulerUnits:(int)arg1 decimalPlaces:(int)arg2 trailingZeros:(bool)arg3 lenient:(bool)arg4;
+ (id)instance;

- (bool)centerRulerOrigin;
- (id)compatibleRulerUnits;
- (double)convertPointsToRulerUnits:(double)arg1;
- (double)convertRulerUnitsToPoints:(double)arg1;
- (void)dealloc;
- (id)formatter:(bool)arg1 lenient:(bool)arg2;
- (id)init;
- (id)localizedCompatibleRulerUnits;
- (int)preferredPixelUnit;
- (int)rulerUnits;
- (void)setCenterRulerOrigin:(bool)arg1;
- (void)setPreferredPixelUnit:(int)arg1;
- (void)setRulerUnits:(int)arg1;
- (void)setShowRulerAsPercentage:(bool)arg1;
- (bool)showRulerAsPercentage;

@end
