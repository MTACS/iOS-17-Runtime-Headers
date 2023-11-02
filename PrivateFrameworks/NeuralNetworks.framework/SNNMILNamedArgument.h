
@interface SNNMILNamedArgument : NSObject {
    NSString * _name;
    SNNMILValue * _value;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) SNNMILValue *value;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (id)name;
- (id)value;

@end
