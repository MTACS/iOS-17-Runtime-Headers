
@interface TRASettingsOrientation : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    long long  _orientation;
    <BSInterfaceOrientationMapResolving><BSXPCSecureCoding> * _orientationMapResolver;
    TRAArbitrationDeviceOrientationInputs * _rawOrientationInputs;
    TRAArbitrationDeviceOrientationInputs * _validatedOrientationInputs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) <BSInterfaceOrientationMapResolving><BSXPCSecureCoding> *orientationMapResolver;
@property (nonatomic, retain) TRAArbitrationDeviceOrientationInputs *rawOrientationInputs;
@property (readonly) Class superclass;
@property (nonatomic, retain) TRAArbitrationDeviceOrientationInputs *validatedOrientationInputs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithOrientation:(long long)arg1;
- (id)initWithOrientation:(long long)arg1 orientationMapResolver:(id)arg2 validatedOrientationInputs:(id)arg3 rawOrientationInputs:(id)arg4;
- (id)initWithOrientationSettings:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOrientationSettings:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)orientation;
- (id)orientationMapResolver;
- (id)rawOrientationInputs;
- (void)setOrientation:(long long)arg1;
- (void)setOrientationMapResolver:(id)arg1;
- (void)setRawOrientationInputs:(id)arg1;
- (void)setValidatedOrientationInputs:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)validatedOrientationInputs;

@end
