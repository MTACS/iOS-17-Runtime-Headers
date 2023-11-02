
@interface TPSCallWaitingResponse : TPSResponse {
    bool  _enabled;
}

@property (nonatomic, readonly) bool enabled;

+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (id)archivedDataWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 error:(id)arg2;
- (id)initWithsubscriptionContext:(id)arg1 error:(id)arg2 enabled:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToResponse:(id)arg1;

@end
