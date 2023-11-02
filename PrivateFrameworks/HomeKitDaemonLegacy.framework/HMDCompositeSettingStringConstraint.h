
@interface HMDCompositeSettingStringConstraint : HMFObject <HMDCompositeSettingConstraint> {
    NSSet * _validValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy) NSSet *validValues;

- (void).cxx_destruct;
- (id)initWithValidValues:(id)arg1;
- (bool)isValidValue:(id)arg1 error:(id*)arg2;
- (void)setValidValues:(id)arg1;
- (id)validValues;

@end
