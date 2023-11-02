
@interface CHHapticParameterAttributesImpl : NSObject <CHHapticParameterAttributes> {
    float  _defaultValue;
    float  _maxValue;
    float  _minValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) float defaultValue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) float maxValue;
@property (readonly) float minValue;
@property (readonly) Class superclass;

- (float)defaultValue;
- (id)init;
- (id)initWithMinValue:(float)arg1 maxValue:(float)arg2 defaultValue:(float)arg3;
- (float)maxValue;
- (float)minValue;

@end
