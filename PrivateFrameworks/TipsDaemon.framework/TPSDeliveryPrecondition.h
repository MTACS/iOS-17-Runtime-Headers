
@interface TPSDeliveryPrecondition : TPSSerializableObject {
    NSArray * _conditions;
    long long  _joinType;
    long long  _statusType;
}

@property (nonatomic, copy) NSArray *conditions;
@property (nonatomic) long long joinType;
@property (nonatomic) long long statusType;

- (void).cxx_destruct;
- (id)conditions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)initWithDictionary:(id)arg1;
- (long long)joinType;
- (void)setConditions:(id)arg1;
- (void)setJoinType:(long long)arg1;
- (void)setStatusType:(long long)arg1;
- (long long)statusType;

@end
