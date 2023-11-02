
@interface _GPURawCounter : NSObject <GPURawCounter> {
    unsigned long long  _counterValueType;
    NSString * _description;
    NSString * _name;
}

@property (readonly) unsigned long long counterValueType;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *name;

- (unsigned long long)counterValueType;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 description:(id)arg2 valueType:(unsigned long long)arg3;
- (id)name;

@end
