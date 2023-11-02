
@interface HKQuantityFormattingParameters : NSObject {
    bool  _hasSpaceBetweenValueAndUnit;
    bool  _omitUnit;
    long long  _precision;
    HKUnit * _preferredUnit;
    long long  _significantDigits;
    unsigned long long  _timeFormatOptions;
    UIFont * _unitFont;
    bool  _useColor;
    UIFont * _valueFont;
    long long  _wheelchairUse;
}

@property (nonatomic) bool hasSpaceBetweenValueAndUnit;
@property (nonatomic) bool omitUnit;
@property (nonatomic) long long precision;
@property (nonatomic, retain) HKUnit *preferredUnit;
@property (nonatomic) long long significantDigits;
@property (nonatomic) unsigned long long timeFormatOptions;
@property (nonatomic, retain) UIFont *unitFont;
@property (nonatomic) bool useColor;
@property (nonatomic, retain) UIFont *valueFont;
@property (nonatomic) long long wheelchairUse;

- (void).cxx_destruct;
- (long long)_maximumPrecisionForObjectType:(id)arg1 unit:(id)arg2 value:(double)arg3;
- (bool)_objectType:(id)arg1 isCategoryWithIdentifier:(id)arg2;
- (bool)_objectType:(id)arg1 isQuantityWithIdentifier:(id)arg2;
- (void)_setFormatter:(id)arg1 maximumSignificantDigits:(long long)arg2;
- (id)_sleepFormatForQuantity:(id)arg1;
- (id)_standardFormatForQuantity:(id)arg1 unit:(id)arg2 objectType:(id)arg3;
- (id)_unitForQuantity:(id)arg1 objectType:(id)arg2;
- (bool)_unitIsFeet:(id)arg1;
- (bool)hasSpaceBetweenValueAndUnit;
- (id)init;
- (bool)omitUnit;
- (long long)precision;
- (id)preferredUnit;
- (void)setHasSpaceBetweenValueAndUnit:(bool)arg1;
- (void)setOmitUnit:(bool)arg1;
- (void)setPrecision:(long long)arg1;
- (void)setPreferredUnit:(id)arg1;
- (void)setSignificantDigits:(long long)arg1;
- (void)setTimeFormatOptions:(unsigned long long)arg1;
- (void)setUnitFont:(id)arg1;
- (void)setUseColor:(bool)arg1;
- (void)setValueFont:(id)arg1;
- (void)setWheelchairUse:(long long)arg1;
- (long long)significantDigits;
- (unsigned long long)timeFormatOptions;
- (id)unitFont;
- (id)unitString:(id)arg1 quantity:(id)arg2;
- (bool)useColor;
- (id)valueFont;
- (id)valueString:(id)arg1 quantity:(id)arg2;
- (long long)wheelchairUse;

@end
