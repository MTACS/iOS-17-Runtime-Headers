
@interface TPSCallingLineIdRestrictionResponse : TPSResponse {
    bool  _editable;
    long long  _state;
}

@property (getter=isEditable, nonatomic, readonly) bool editable;
@property (nonatomic, readonly) long long state;

+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (id)archivedDataWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 error:(id)arg2;
- (id)initWithsubscriptionContext:(id)arg1 editable:(bool)arg2 state:(long long)arg3 error:(id)arg4;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToResponse:(id)arg1;
- (long long)state;

@end
