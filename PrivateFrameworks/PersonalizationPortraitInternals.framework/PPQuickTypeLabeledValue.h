
@interface PPQuickTypeLabeledValue : NSObject {
    unsigned int  _fields;
    NSString * _label;
    double  _scoreBoost;
    NSString * _value;
}

@property (nonatomic, readonly) unsigned int fields;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) double scoreBoost;
@property (nonatomic, readonly) NSString *value;

+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2 scoreBoost:(double)arg3;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2 scoreBoost:(double)arg3 fields:(unsigned int)arg4;

- (void).cxx_destruct;
- (unsigned int)fields;
- (id)initWithLabel:(id)arg1 value:(id)arg2 scoreBoost:(double)arg3 fields:(unsigned int)arg4;
- (id)label;
- (double)scoreBoost;
- (id)value;

@end
