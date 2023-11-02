
@interface TRAMutableSettingsOrientation : TRASettingsOrientation

@property (nonatomic) long long orientation;
@property (nonatomic, retain) <BSInterfaceOrientationMapResolving><BSXPCSecureCoding> *orientationMapResolver;
@property (nonatomic, retain) TRAArbitrationDeviceOrientationInputs *rawOrientationInputs;
@property (nonatomic, retain) TRAArbitrationDeviceOrientationInputs *validatedOrientationInputs;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientationMapResolver:(id)arg1;
- (void)setRawOrientationInputs:(id)arg1;
- (void)setValidatedOrientationInputs:(id)arg1;

@end
