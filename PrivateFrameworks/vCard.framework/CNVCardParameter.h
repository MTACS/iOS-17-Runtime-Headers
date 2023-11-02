
@interface CNVCardParameter : NSObject {
    NSString * _name;
    NSString * _value;
}

@property (readonly) NSString *name;
@property (readonly) NSString *value;

+ (id)parameterWithName:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)name;
- (id)value;

@end
