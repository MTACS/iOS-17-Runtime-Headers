
@interface HMDHouseholdDataEventCounterGroupSpecifier : HMDDateCounterGroupSpecifier {
    NSUUID * _homeUUID;
}

@property (nonatomic, readonly) NSUUID *homeUUID;

+ (id)specifierWithGroupName:(id)arg1 homeUUID:(id)arg2 date:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeUUID;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupName:(id)arg1 homeUUID:(id)arg2 date:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
