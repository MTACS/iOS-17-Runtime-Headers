
@interface PSBiometricIdentity : NSObject

+ (id)identities;
+ (long long)maximumIdentityCount;
+ (id)nameForIdentity:(id)arg1;
+ (id)nextIdentityName;
+ (void)removeIdentity:(id)arg1;
+ (void)setName:(id)arg1 forIdentity:(id)arg2;

@end
