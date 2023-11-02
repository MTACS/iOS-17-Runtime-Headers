
@interface LAAuthenticationRequirement : NSObject <LAACLSerializable> {
    long long  _authType;
    NSMutableSet * _subrequirements;
}

+ (id)biometryCurrentSetRequirement;
+ (id)biometryCurrentSetRequirementWithFallback:(id)arg1;
+ (id)biometryRefreshableSetRequirementWithFallback:(id)arg1;
+ (id)biometryRequirement;
+ (id)biometryRequirementWithFallback:(id)arg1;
+ (id)defaultRequirement;

- (void).cxx_destruct;
- (void)encodeWithACLCoder:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)requirementByAddingExtendedRequirement:(id)arg1;

@end
