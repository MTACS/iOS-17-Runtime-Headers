
@interface HFCAPackageIconDescriptor : NSObject <HFIconDescriptor> {
    NSDictionary * _iconModifiers;
    NSString * _packageIdentifier;
    bool  _shouldForceLTR;
    NSString * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *iconModifiers;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *packageIdentifier;
@property (nonatomic, readonly) bool shouldForceLTR;
@property (nonatomic, readonly) NSString *state;
@property (readonly) Class superclass;

+ (bool)iconDescriptorShouldAlwaysAnimate:(id)arg1;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
- (id)iconModifiers;
- (id)identifier;
- (id)initWithPackageIdentifier:(id)arg1;
- (id)initWithPackageIdentifier:(id)arg1 state:(id)arg2;
- (id)initWithPackageIdentifier:(id)arg1 state:(id)arg2 modifiers:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)packageIdentifier;
- (bool)shouldForceLTR;
- (id)state;

@end
