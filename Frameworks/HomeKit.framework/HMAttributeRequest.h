
@interface HMAttributeRequest : HMRequestBase {
    HMAccessoryProfile * _accessoryProfile;
    NSString * _attribute;
}

@property (nonatomic, readonly) HMAccessoryProfile *accessoryProfile;
@property (nonatomic, readonly) NSString *attribute;

- (void).cxx_destruct;
- (id)accessoryProfile;
- (id)attribute;
- (id)initWithAccessoryProfile:(id)arg1 attribute:(id)arg2;

@end
