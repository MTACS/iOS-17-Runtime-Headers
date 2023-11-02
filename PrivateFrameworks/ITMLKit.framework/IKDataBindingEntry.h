
@interface IKDataBindingEntry : NSObject {
    unsigned long long  _attributes;
    NSString * _key;
    IKDataBindingValue * _value;
}

@property (nonatomic, readonly) unsigned long long attributes;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) IKDataBindingValue *value;

- (void).cxx_destruct;
- (unsigned long long)attributes;
- (id)initWithKey:(id)arg1 value:(id)arg2 attributes:(unsigned long long)arg3;
- (id)key;
- (id)value;

@end
