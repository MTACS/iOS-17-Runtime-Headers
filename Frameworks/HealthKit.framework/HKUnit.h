
@interface HKUnit : NSObject <NSCopying, NSSecureCoding> {
    _HKFactorization * _baseUnitReduction;
    _HKFactorization * _dimensionReduction;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dimensionReductionLock;
    double  _reducedProportionalSize;
    double  _scaleOffset;
}

@property (nonatomic, readonly) _HKFactorization *_baseUnits;
@property (nonatomic, readonly) _HKDimension *dimension;
@property (nonatomic, readonly) double scaleOffset;
@property (readonly) NSString *unitString;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_changeInDegreeCelsiusUnit;
+ (id)_changeInDegreeFahrenheitUnit;
+ (id)_changeInUnit:(id)arg1;
+ (id)_countPerMinuteUnit;
+ (id)_countPerSecondUnit;
+ (id)_distanceUnitForLocale:(id)arg1;
+ (id)_foodEnergyUnitForLocale:(id)arg1;
+ (id)_foundationBaseUnits;
+ (id)_heightUnitForLocale:(id)arg1;
+ (id)_internationalUnitWithMassEquivalent;
+ (id)_internationalUnitWithMassEquivalent:(double)arg1;
+ (id)_internationalUnitWithMetricPrefix:(long long)arg1 massEquivalent:(double)arg2;
+ (id)_internationalUnitWithMetricPrefix:(long long)arg1 volumeEquivalent:(double)arg2;
+ (id)_internationalUnitWithVolumeEquivalent;
+ (id)_internationalUnitWithVolumeEquivalent:(double)arg1;
+ (bool)_isValidUnitString:(id)arg1;
+ (id)_milligramsPerDeciliterUnit;
+ (id)_millimolesBloodGlucosePerLiterUnit;
+ (id)_nullUnit;
+ (id)_personMassUnitForLocale:(id)arg1;
+ (id)_prefixStringForMetricPrefix:(long long)arg1;
+ (void)_prewarmUnitForStringCache;
+ (id)_temperatureUnitForLocale:(id)arg1;
+ (id)_unitForStringPrewarmCache;
+ (id)_voltBaseUnit;
+ (id)atmosphereUnit;
+ (id)calorieUnit;
+ (id)centimeterOfWaterUnit;
+ (id)countUnit;
+ (id)cupImperialUnit;
+ (id)cupUSUnit;
+ (id)dayUnit;
+ (id)decibelAWeightedSoundPressureLevelUnit;
+ (id)decibelHearingLevelUnit;
+ (id)degreeAngleUnit;
+ (id)degreeCelsiusUnit;
+ (id)degreeFahrenheitUnit;
+ (id)diopterUnit;
+ (long long)energyFormatterUnitFromUnit:(id)arg1;
+ (id)equivalentsUnit;
+ (id)equivalentsUnitWithMolarMass:(double)arg1 valence:(long long)arg2;
+ (id)fluidOunceImperialUnit;
+ (id)fluidOunceUSUnit;
+ (id)footUnit;
+ (id)gramUnit;
+ (id)gramUnitWithMetricPrefix:(long long)arg1;
+ (id)hertzUnit;
+ (id)hertzUnitWithMetricPrefix:(long long)arg1;
+ (id)hourUnit;
+ (id)inchUnit;
+ (id)inchesOfMercuryUnit;
+ (id)internationalUnit;
+ (id)jouleUnit;
+ (id)jouleUnitWithMetricPrefix:(long long)arg1;
+ (id)kelvinUnit;
+ (id)kilocalorieUnit;
+ (id)kilojoulesUnit;
+ (id)largeCalorieUnit;
+ (long long)lengthFormatterUnitFromUnit:(id)arg1;
+ (id)literUnit;
+ (id)literUnitWithMetricPrefix:(long long)arg1;
+ (id)luxUnit;
+ (id)luxUnitWithMetricPrefix:(long long)arg1;
+ (long long)massFormatterUnitFromUnit:(id)arg1;
+ (id)meterUnit;
+ (id)meterUnitWithMetricPrefix:(long long)arg1;
+ (id)mileUnit;
+ (id)millimeterOfMercuryUnit;
+ (id)milliseconds;
+ (id)minuteUnit;
+ (id)moleUnitWithMetricPrefix:(long long)arg1 molarMass:(double)arg2;
+ (id)moleUnitWithMolarMass:(double)arg1;
+ (id)moles;
+ (id)ounceUnit;
+ (id)pascalUnit;
+ (id)pascalUnitWithMetricPrefix:(long long)arg1;
+ (id)perMilleUnit;
+ (id)percentUnit;
+ (id)pintImperialUnit;
+ (id)pintUSUnit;
+ (id)poundUnit;
+ (id)prismDiopterUnit;
+ (id)radianAngleUnit;
+ (id)radianAngleUnitWithMetricPrefix:(long long)arg1;
+ (id)secondUnit;
+ (id)secondUnitWithMetricPrefix:(long long)arg1;
+ (id)siemenUnit;
+ (id)siemenUnitWithMetricPrefix:(long long)arg1;
+ (id)smallCalorieUnit;
+ (id)stoneUnit;
+ (bool)supportsSecureCoding;
+ (id)titerUnit;
+ (id)unitFromEnergyFormatterUnit:(long long)arg1;
+ (id)unitFromLengthFormatterUnit:(long long)arg1;
+ (id)unitFromMassFormatterUnit:(long long)arg1;
+ (id)unitFromString:(id)arg1;
+ (id)voltUnit;
+ (id)voltUnitWithMetricPrefix:(long long)arg1;
+ (id)wattUnit;
+ (id)wattUnitWithMetricPrefix:(long long)arg1;
+ (id)yardUnit;

- (void).cxx_destruct;
- (id)_baseUnitReduction;
- (id)_baseUnitReductionAndProportionalSize:(double*)arg1 withCycleSet:(id)arg2;
- (id)_baseUnits;
- (id)_computeBaseUnitReductionAndProportionalSize:(double*)arg1 withCycleSet:(id)arg2;
- (double)_convertFromBaseUnit:(double)arg1;
- (double)_convertToBaseUnit:(double)arg1;
- (id)_dimensionReduction;
- (id)_foundationUnit;
- (id)_init;
- (bool)_isCompatibleWithDimension:(id)arg1;
- (bool)_isCompatibleWithUnit:(id)arg1;
- (bool)_isMetricDistance;
- (void)_reduceIfNecessaryWithCycleSet:(id)arg1;
- (double)_reducedProportionalSize;
- (double)_valueByConvertingValue:(double)arg1 toUnit:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dimension;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNull;
- (id)reciprocalUnit;
- (double)scaleOffset;
- (id)unitDividedByUnit:(id)arg1;
- (id)unitMultipliedByUnit:(id)arg1;
- (id)unitRaisedToPower:(long long)arg1;
- (id)unitString;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

+ (id)wf_safeUnitFromString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

+ (id)safeUnitFromString:(id)arg1;

@end
