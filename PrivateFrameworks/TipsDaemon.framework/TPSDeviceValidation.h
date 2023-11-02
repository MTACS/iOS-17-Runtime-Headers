
@interface TPSDeviceValidation : TPSInclusivityValidation

@property (nonatomic, readonly) NSArray *excludeDevices;
@property (nonatomic, readonly) NSArray *targetDevices;

- (bool)_matchesDevices:(id)arg1;
- (id)excludeDevices;
- (id)initWithTargetDevices:(id)arg1 excludeDevices:(id)arg2;
- (id)targetDevices;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
