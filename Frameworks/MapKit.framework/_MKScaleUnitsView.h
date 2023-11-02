
@interface _MKScaleUnitsView : UIView {
    bool  _RTL;
    NSNumberFormatter * _floatNumberFormatter;
    double  _fontSize;
    double  _justUnitsWidth;
    NSDictionary * _legendAttributes;
    NSString * _legendBaseString;
    double  _legendMarginLeft;
    NSMutableDictionary * _legendStringForDistanceStringCache;
    NSMapTable * _legendStringWidthCache;
    double  _segmentLengthInPixels;
    NSMutableArray * _strings;
    NSString * _unitsString;
    double  _unitsWidth;
    NSString * _unpaddedUnitsString;
    bool  _useLightText;
    NSString * _zeroUnitsString;
}

@property (getter=isRTL, nonatomic) bool RTL;
@property (nonatomic, retain) NSNumberFormatter *floatNumberFormatter;
@property (nonatomic) double fontSize;
@property (nonatomic, retain) NSString *legendBaseString;
@property (nonatomic) double legendMarginLeft;
@property (nonatomic) double segmentLengthInPixels;
@property (nonatomic, retain) NSString *unitsString;
@property (nonatomic, readonly) double unitsWidth;
@property (nonatomic, copy) NSString *unpaddedUnitsString;
@property (nonatomic) bool useLightText;
@property (nonatomic, readonly) NSString *zeroUnitsString;

- (void).cxx_destruct;
- (void)_calculateLegend:(bool)arg1;
- (id)_legendStringForDistanceString:(id)arg1 appendUnits:(bool)arg2 index:(int)arg3;
- (id)_uncachedLegendStringsForDistanceString:(id)arg1;
- (double)_widthForString:(id)arg1 attributes:(id)arg2;
- (bool)canDisplaySegment:(unsigned long long)arg1;
- (void)clearCaches:(id)arg1;
- (id)floatNumberFormatter;
- (double)fontSize;
- (id)init;
- (bool)isRTL;
- (id)legendBaseString;
- (double)legendMarginLeft;
- (void)setFloatNumberFormatter:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setLegendBaseString:(id)arg1;
- (void)setLegendMarginLeft:(double)arg1;
- (void)setRTL:(bool)arg1;
- (void)setSegmentLengthInPixels:(double)arg1;
- (void)setUnits:(id)arg1;
- (void)setUnitsString:(id)arg1;
- (void)setUnpaddedUnitsString:(id)arg1;
- (void)setUseLightText:(bool)arg1;
- (id)unitsString;
- (double)unitsWidth;
- (id)unpaddedUnitsString;
- (bool)useLightText;
- (id)zeroUnitsString;

@end
