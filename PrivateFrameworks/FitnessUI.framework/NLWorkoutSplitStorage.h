
@interface NLWorkoutSplitStorage : NSObject {
    bool  _enabled;
    long long  _type;
    double  _value;
}

@property (nonatomic) bool enabled;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double value;

+ (id)_defaultSplit:(id)arg1 activityType:(id)arg2 userDistanceUnit:(id)arg3;
+ (double)_defaultSplitDistanceForActivityType:(id)arg1 userDistanceUnit:(id)arg2;
+ (id)distanceSplitForActivityType:(id)arg1 userDistanceUnit:(id)arg2;
+ (id)mapSplitTypeEnumToString:(long long)arg1;
+ (long long)mapSplitTypeStringToEnum:(id)arg1;
+ (id)restoreFromDictionary:(id)arg1;
+ (id)restoreFromDictionary:(id)arg1 activityType:(id)arg2;
+ (void)saveSplitStorage:(id)arg1 forActivityType:(id)arg2;
+ (id)serializeSplitStorage:(id)arg1;
+ (id)splitForActivityType:(id)arg1 splitsActivityTypeKey:(id)arg2 userDistanceUnit:(id)arg3;
+ (id)timeSplitForActivityType:(id)arg1;

- (id)description;
- (bool)enabled;
- (id)initWithType:(long long)arg1 value:(double)arg2;
- (void)setEnabled:(bool)arg1;
- (long long)type;
- (double)value;

@end
