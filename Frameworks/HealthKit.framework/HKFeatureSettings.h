
@interface HKFeatureSettings : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _keyValueStorage;
}

@property (nonatomic, readonly) bool deviationDetectionEnabledForAllTypes;
@property (nonatomic, readonly) bool deviationDetectionEnabledForAnyType;
@property (nonatomic, readonly) bool deviationDetectionEnabledSetExplicitlyForAnyType;
@property (nonatomic, readonly) bool fertileWindowProjectionsEnabled;
@property (nonatomic, readonly, copy) NSDictionary *keyValueStorage;
@property (nonatomic, readonly) bool menstruationProjectionsEnabled;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataForKey:(id)arg1;
- (id)dataForKey:(id)arg1 error:(id*)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyValueStorage;
- (id)numberForKey:(id)arg1;
- (id)numberForKey:(id)arg1 error:(id*)arg2;
- (id)stringForKey:(id)arg1;
- (id)stringForKey:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

- (bool)deviationDetectionEnabledForAllTypes;
- (bool)deviationDetectionEnabledForAnyType;
- (bool)deviationDetectionEnabledForType:(long long)arg1;
- (bool)deviationDetectionEnabledSetExplicitlyForAnyType;
- (bool)fertileWindowProjectionsEnabled;
- (id)initWithMenstruationProjectionsEnabled:(bool)arg1 fertileWindowProjectionsEnabled:(bool)arg2 areFertilityTrackingDisplayTypesVisible:(bool)arg3 isSexualActivityDisplayTypeVisible:(bool)arg4;
- (bool)isLoggingVisibleForDisplayTypeIdentifier:(id)arg1;
- (bool)menstruationProjectionsEnabled;
- (bool)projectionsEnabledSettingsHaveChangedFromFeatureSettings:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon

+ (id)hdhr_irregularRhythmNotificationsV1SettingsFromDefaults:(id)arg1;

@end
