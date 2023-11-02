
@interface HMDTimeBasedFlagNameSpecifier : NSObject <HMDTimeBasedFlagSpecifying> {
    NSString * _flagName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *flagName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)specifierWithFlagName:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)flagName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlagName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGroupNameSpecifier:(id)arg1;

@end
