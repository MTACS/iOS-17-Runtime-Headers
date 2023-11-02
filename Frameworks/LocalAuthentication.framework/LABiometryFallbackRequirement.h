
@interface LABiometryFallbackRequirement : NSObject <LAACLSerializable> {
    long long  _authType;
    NSArray * _subrequirements;
}

+ (id)customPasswordRequirement:(id)arg1;
+ (id)defaultRequirement;
+ (id)devicePasscodeRequirement;

- (void).cxx_destruct;
- (void)encodeWithACLCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
