
@interface HKCountrySet : NSObject <NSCopying, NSSecureCoding> {
    long long  _compatibilityVersion;
    long long  _contentVersion;
    NSArray * _countryBitmasks;
    long long  _provenance;
}

@property (nonatomic, readonly, copy) NSArray *allCountryCodes;
@property (nonatomic, readonly) long long compatibilityVersion;
@property (nonatomic, readonly) long long contentVersion;
@property (nonatomic, readonly, copy) NSArray *countryBitmasks;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) long long provenance;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)bitmaskPathForCountryCode:(id)arg1;
+ (id)countryCodeForBitmaskPath:(id)arg1;
+ (id)countryCodesForCountryBitmasks:(id)arg1;
+ (id)countrySetWithPlistURL:(id)arg1 error:(id*)arg2;
+ (id)emptyCountrySet;
+ (long long)isRegionCodeFound:(id)arg1 availabilityWatch:(id)arg2 availabilityPhone:(id)arg3;
+ (id)regionsWithPlistAtURL:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allCountryCodes;
- (long long)compatibilityVersion;
- (bool)containsCountryCode:(id)arg1;
- (long long)contentVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryBitmasks;
- (id)countrySetByAddingCountriesInSet:(id)arg1;
- (id)countrySetByIntersectingCountriesInSet:(id)arg1;
- (id)countrySetByRemovingCountriesInSet:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCountryBitmasks:(id)arg1 compatibilityVersion:(long long)arg2 contentVersion:(long long)arg3 provenance:(long long)arg4;
- (id)initWithDictionaryRepresentation:(id)arg1 provenance:(long long)arg2;
- (id)initWithSupportedCountryCodes:(id)arg1 contentVersion:(long long)arg2;
- (id)initWithSupportedCountryCodes:(id)arg1 contentVersion:(long long)arg2 provenance:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)provenance;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)localAvailabilityForGlucoseEnhancedCharting;
+ (id)localAvailabilityForWristTemperatureMeasurements;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon

+ (id)localAvailabilityForMenstrualCyclesDeviationDetection;
+ (id)localAvailabilityForMenstrualCyclesHeartRateInput;
+ (id)localAvailabilityForMenstrualCyclesWristTemperatureInput;

// Image: /System/Library/PrivateFrameworks/HeartHealth.framework/HeartHealth

+ (id)localAvailabilityForAFibBurden;

// Image: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon

+ (id)localAvailabilityForIrregularRhythmNotificationsV2;

// Image: /System/Library/PrivateFrameworks/MentalHealthDaemon.framework/MentalHealthDaemon

+ (id)localAvailabilityForDepressionAndAnxietyAssessments;
+ (id)localAvailabilityForPeriodicDepressionAndAnxietyAssessmentPrompts;
+ (id)localAvailabilityForStateOfMindLoggingPatternEscalations;

@end
