
@interface NICarKeyConfiguration : NIConfiguration {
    long long  _configurationTypeInternal;
    NSDictionary * _debugOptions;
    NSString * _vehicleIdentifier;
}

@property (readonly) long long configurationType;
@property (copy) NSDictionary *debugOptions;
@property (copy) NSString *vehicleIdentifier;

+ (id)_labTestModeConfigurationWithOptions:(id)arg1;
+ (id)_vehicleSimConfigurationWithOptions:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)configurationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugOptions;
- (id)description;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initLabTestModeConfiguration:(id)arg1;
- (id)initVehicleSimConfiguration:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithVehicleIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDebugOptions:(id)arg1;
- (void)setVehicleIdentifier:(id)arg1;
- (id)vehicleIdentifier;

@end
