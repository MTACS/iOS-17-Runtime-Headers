
@interface CHHapticEventParameter : NSObject {
    NSString * _param;
    float  _value;
}

@property (readonly) NSString *parameterID;
@property float value;

- (void).cxx_destruct;
- (id)init;
- (id)initWithParameterID:(id)arg1 value:(float)arg2;
- (id)parameterID;
- (void)setValue:(float)arg1;
- (float)value;

@end
