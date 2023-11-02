
@interface HKWorkoutConfiguration : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    unsigned long long  _activityType;
    NSUUID * _fitnessMachineSessionUUID;
    NSString * _fitnessPlusCatalogWorkoutId;
    long long  _fitnessPlusMediaType;
    HKQuantity * _lapLength;
    long long  _locationType;
    NSUUID * _predictionSessionUUID;
    bool  _shouldDisambiguateLocation;
    bool  _shouldUseExtendedMode;
    bool  _shouldUseLowPowerMode;
    NSUUID * _suggestedActivityUUID;
    long long  _swimmingLocationType;
}

@property unsigned long long activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSUUID *fitnessMachineSessionUUID;
@property (nonatomic, copy) NSString *fitnessPlusCatalogWorkoutId;
@property (nonatomic) long long fitnessPlusMediaType;
@property (readonly) unsigned long long hash;
@property (copy) HKQuantity *lapLength;
@property long long locationType;
@property (nonatomic, copy) NSUUID *predictionSessionUUID;
@property (nonatomic) bool shouldDisambiguateLocation;
@property (nonatomic) bool shouldUseExtendedMode;
@property (nonatomic) bool shouldUseLowPowerMode;
@property (nonatomic, copy) NSUUID *suggestedActivityUUID;
@property (readonly) Class superclass;
@property long long swimmingLocationType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_workoutConfigurationFromDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (unsigned long long)activityType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fitnessMachineSessionUUID;
- (id)fitnessPlusCatalogWorkoutId;
- (long long)fitnessPlusMediaType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lapLength;
- (long long)locationType;
- (id)predictionSessionUUID;
- (void)setActivityType:(unsigned long long)arg1;
- (void)setFitnessMachineSessionUUID:(id)arg1;
- (void)setFitnessPlusCatalogWorkoutId:(id)arg1;
- (void)setFitnessPlusMediaType:(long long)arg1;
- (void)setLapLength:(id)arg1;
- (void)setLocationType:(long long)arg1;
- (void)setPredictionSessionUUID:(id)arg1;
- (void)setShouldDisambiguateLocation:(bool)arg1;
- (void)setShouldUseExtendedMode:(bool)arg1;
- (void)setShouldUseLowPowerMode:(bool)arg1;
- (void)setSuggestedActivityUUID:(id)arg1;
- (void)setSwimmingLocationType:(long long)arg1;
- (bool)shouldDisambiguateLocation;
- (bool)shouldUseExtendedMode;
- (bool)shouldUseLowPowerMode;
- (id)suggestedActivityUUID;
- (long long)swimmingLocationType;
- (bool)validateIgnoringDeviceSupport:(bool)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
