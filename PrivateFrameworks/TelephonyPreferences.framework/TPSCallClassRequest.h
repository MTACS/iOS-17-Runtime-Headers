
@interface TPSCallClassRequest : TPSRequest {
    int  _callClass;
}

@property (nonatomic) int callClass;

+ (id)unarchivedObjectClasses;

- (int)callClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (void)setCallClass:(int)arg1;

@end
