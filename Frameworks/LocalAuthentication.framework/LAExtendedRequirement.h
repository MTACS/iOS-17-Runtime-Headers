
@interface LAExtendedRequirement : NSObject <LAACLSerializable> {
    NSDictionary * _constraint;
}

+ (id)applicationRemainsForegroundRequirement;

- (void).cxx_destruct;
- (void)encodeWithACLCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
