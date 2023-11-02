
@interface HFPrimaryStateIconDescriptor : NSObject <HFIconDescriptor> {
    NSString * _identifier;
    long long  _primaryState;
    bool  _shouldForceLTR;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long primaryState;
@property (nonatomic, readonly) bool shouldForceLTR;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 primaryState:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)primaryState;
- (bool)shouldForceLTR;

@end
