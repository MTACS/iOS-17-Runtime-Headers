
@interface SAWeatherBarometricPressure : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *trend;
@property (nonatomic, copy) NSString *value;

+ (id)barometricPressure;
+ (id)barometricPressureWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTrend:(id)arg1;
- (void)setValue:(id)arg1;
- (id)trend;
- (id)value;

@end
