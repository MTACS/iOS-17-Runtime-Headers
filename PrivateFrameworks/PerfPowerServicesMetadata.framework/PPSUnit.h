
@interface PPSUnit : NSObject {
    NSUnit * _unit;
}

@property (readonly) NSUnit *unit;

+ (id)celsius;
+ (id)dimensionless;
+ (id)grams;
+ (bool)isValidUnitJSON:(id)arg1;
+ (id)microWattHours;
+ (id)microseconds;
+ (id)milliAmpereHours;
+ (id)milliAmperes;
+ (id)milliVolts;
+ (id)seconds;
+ (id)unitWithJSONObject:(id)arg1;
+ (id)unitWithProto:(id)arg1;
+ (id)volts;

- (void).cxx_destruct;
- (id)initWithUnit:(id)arg1;
- (id)json;
- (id)proto;
- (id)unit;

@end
