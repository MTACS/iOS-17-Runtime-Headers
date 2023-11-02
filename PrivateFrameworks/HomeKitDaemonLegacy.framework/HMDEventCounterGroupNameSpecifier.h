
@interface HMDEventCounterGroupNameSpecifier : NSObject <HMDEventCounterGroupSpecifying> {
    NSString * _groupName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)specifierWithGroupName:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGroupNameSpecifier:(id)arg1;

@end
