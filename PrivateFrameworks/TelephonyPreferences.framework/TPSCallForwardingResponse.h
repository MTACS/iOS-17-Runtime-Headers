
@interface TPSCallForwardingResponse : TPSResponse {
    CTCallForwardingValue * _value;
}

@property (nonatomic, readonly) CTCallForwardingValue *value;

+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)archivedDataWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 error:(id)arg2;
- (id)initWithSubscriptionContext:(id)arg1 error:(id)arg2 value:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToResponse:(id)arg1;
- (id)value;

@end
