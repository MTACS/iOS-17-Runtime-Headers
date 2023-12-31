
@interface TLKKeyValueTuple : TLKObject {
    NSString * _key;
    NSString * _value;
}

@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *value;

+ (id)tupleWithKey:(id)arg1 value:(id)arg2;
+ (id)tuplesForDictionary:(id)arg1;
+ (id)tuplesForKeys:(id)arg1 values:(id)arg2;

- (void).cxx_destruct;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
