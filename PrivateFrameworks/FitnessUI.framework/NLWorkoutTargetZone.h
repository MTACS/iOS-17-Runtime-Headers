
@interface NLWorkoutTargetZone : NSObject {
    double  _currentValue;
    bool  _enabled;
    double  _max;
    double  _min;
    long long  _type;
}

@property (nonatomic, readonly) double currentValue;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly) long long type;

+ (id)cadenceTargetZoneForActivityType:(id)arg1;
+ (id)defaultTargetZoneForTypeKey:(id)arg1;
+ (id)mapTargetZoneTypeEnumToString:(long long)arg1;
+ (long long)mapTargetZoneTypeStringToEnum:(id)arg1;
+ (id)metadataForTargetZone:(id)arg1;
+ (id)paceTargetZoneForActivityType:(id)arg1;
+ (id)powerTargetZoneForActivityType:(id)arg1;
+ (id)restoreFromDictionary:(id)arg1;
+ (id)restoreFromDictionary:(id)arg1 activityType:(id)arg2;
+ (void)saveTargetZone:(id)arg1 forActivityType:(id)arg2;
+ (id)serializeTargetZone:(id)arg1;
+ (id)targetZoneForActivityType:(id)arg1 targetZoneActivityTypeKey:(id)arg2;
+ (long long)targetZoneMasterTypeForTargetZoneType:(long long)arg1;
+ (id)targetZonesFromMetadata:(id)arg1;

- (double)currentValue;
- (id)description;
- (bool)enabled;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 min:(double)arg2 max:(double)arg3 currentValue:(double)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isSingleThreshold;
- (double)max;
- (double)min;
- (void)setEnabled:(bool)arg1;
- (unsigned long long)stateForDistanceUnit:(id)arg1;
- (unsigned long long)stateForPaceZoneWithDistanceUnit:(id)arg1;
- (unsigned long long)stateForStandardZone;
- (long long)type;

@end
