
@interface TPSCapability : TPSSerializableObject {
    long long  _joinType;
    NSString * _key;
    id  _value;
}

@property (nonatomic) long long joinType;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) id value;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithDictionary:(id)arg1;
- (long long)joinType;
- (id)key;
- (void)setJoinType:(long long)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
