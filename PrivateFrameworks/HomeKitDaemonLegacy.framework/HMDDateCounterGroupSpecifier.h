
@interface HMDDateCounterGroupSpecifier : HMDEventCounterGroupNameSpecifier {
    NSDate * _date;
}

@property (nonatomic, readonly) NSDate *date;

+ (id)specifierWithGroupName:(id)arg1 date:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupName:(id)arg1 date:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
