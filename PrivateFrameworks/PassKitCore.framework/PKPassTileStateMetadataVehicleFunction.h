
@interface PKPassTileStateMetadataVehicleFunction : PKPassTileStateMetadata {
    NSDictionary * _vehicleFunctionStates;
}

@property (nonatomic, copy) NSDictionary *vehicleFunctionStates;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_setupWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToUnresolvedMetadata:(id)arg1;
- (void)setVehicleFunctionStates:(id)arg1;
- (id)vehicleFunctionStates;

@end
