
@interface _MNDistanceFormatOptions : NSObject {
    bool  _abbreviateUnits;
    NSLocale * _locale;
    unsigned long long  _maximumFractionDigits;
    bool  _metric;
    unsigned long long  _minimumFractionDigits;
    long long  _rounding;
    bool  _spoken;
    NSUnitLength * _unitLength;
    bool  _yards;
}

@property (nonatomic) bool abbreviateUnits;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) unsigned long long maximumFractionDigits;
@property (nonatomic) bool metric;
@property (nonatomic) unsigned long long minimumFractionDigits;
@property (nonatomic) long long rounding;
@property (nonatomic) bool spoken;
@property (nonatomic, retain) NSUnitLength *unitLength;
@property (nonatomic) bool yards;

- (void).cxx_destruct;
- (bool)abbreviateUnits;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (unsigned long long)maximumFractionDigits;
- (bool)metric;
- (unsigned long long)minimumFractionDigits;
- (long long)rounding;
- (void)setAbbreviateUnits:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaximumFractionDigits:(unsigned long long)arg1;
- (void)setMetric:(bool)arg1;
- (void)setMinimumFractionDigits:(unsigned long long)arg1;
- (void)setRounding:(long long)arg1;
- (void)setSpoken:(bool)arg1;
- (void)setUnitLength:(id)arg1;
- (void)setYards:(bool)arg1;
- (bool)spoken;
- (id)unitLength;
- (bool)yards;

@end
