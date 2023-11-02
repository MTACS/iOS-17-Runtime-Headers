
@interface HMDAccessoryFirmwareUpdatePolicyServiceConfiguration : NSObject {
    NSString * _category;
    HMDAccessoryFirmwareUpdatePolicyCriteria * _criteria;
    NSString * _type;
}

@property (readonly) NSString *category;
@property (readonly) HMDAccessoryFirmwareUpdatePolicyCriteria *criteria;
@property (readonly) NSString *type;

- (void).cxx_destruct;
- (id)category;
- (id)criteria;
- (id)initWithType:(id)arg1 category:(id)arg2 criteria:(id)arg3;
- (id)type;

@end
