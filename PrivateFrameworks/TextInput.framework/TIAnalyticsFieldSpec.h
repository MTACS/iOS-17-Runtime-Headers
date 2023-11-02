
@interface TIAnalyticsFieldSpec : NSObject {
    NSString * _name;
}

@property (nonatomic, readonly) NSString *name;

+ (id)booleanFieldSpecWithName:(id)arg1;
+ (id)enumFieldSpecWithName:(id)arg1;
+ (id)floatFieldSpecWithName:(id)arg1;
+ (id)floatFieldSpecWithName:(id)arg1 maxValue:(double)arg2;
+ (id)floatFieldSpecWithName:(id)arg1 minValue:(double)arg2;
+ (id)floatFieldSpecWithName:(id)arg1 minValue:(double)arg2 maxValue:(double)arg3;
+ (id)floatFieldSpecWithName:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3 significantDigits:(id)arg4;
+ (id)integerFieldSpecWithName:(id)arg1;
+ (id)integerFieldSpecWithName:(id)arg1 maxValue:(long long)arg2;
+ (id)integerFieldSpecWithName:(id)arg1 minValue:(long long)arg2;
+ (id)integerFieldSpecWithName:(id)arg1 minValue:(long long)arg2 maxValue:(long long)arg3;
+ (id)integerFieldSpecWithName:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3 significantDigits:(id)arg4;
+ (id)stringFieldSpecWithName:(id)arg1;
+ (id)stringFieldSpecWithName:(id)arg1 allowedValues:(id)arg2;

- (void).cxx_destruct;
- (id)errorFromNil;
- (id)errorFromValue:(id)arg1 code:(long long)arg2 message:(id)arg3;
- (id)initWithName:(id)arg1;
- (id)name;
- (bool)validate:(id)arg1 error:(id*)arg2;

@end
