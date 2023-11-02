
@interface PKPassTileMetadataVehicleFunction : PKPassTileMetadata {
    NSArray * _vehicleFunctions;
}

@property (nonatomic, copy) NSArray *vehicleFunctions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_setupWithDictionary:(id)arg1 privateDictionary:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setVehicleFunctions:(id)arg1;
- (id)vehicleFunctions;

@end
