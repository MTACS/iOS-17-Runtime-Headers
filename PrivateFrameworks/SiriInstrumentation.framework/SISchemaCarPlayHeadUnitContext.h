
@interface SISchemaCarPlayHeadUnitContext : SISchemaInstrumentationMessage {
    bool  _hasVehicleManufacturer;
    bool  _hasVehicleModel;
    bool  _hasVehicleName;
    NSString * _vehicleManufacturer;
    NSString * _vehicleModel;
    NSString * _vehicleName;
}

@property (nonatomic) bool hasVehicleManufacturer;
@property (nonatomic) bool hasVehicleModel;
@property (nonatomic) bool hasVehicleName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *vehicleManufacturer;
@property (nonatomic, copy) NSString *vehicleModel;
@property (nonatomic, copy) NSString *vehicleName;

- (void).cxx_destruct;
- (void)deleteVehicleManufacturer;
- (void)deleteVehicleModel;
- (void)deleteVehicleName;
- (id)dictionaryRepresentation;
- (bool)hasVehicleManufacturer;
- (bool)hasVehicleModel;
- (bool)hasVehicleName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasVehicleManufacturer:(bool)arg1;
- (void)setHasVehicleModel:(bool)arg1;
- (void)setHasVehicleName:(bool)arg1;
- (void)setVehicleManufacturer:(id)arg1;
- (void)setVehicleModel:(id)arg1;
- (void)setVehicleName:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)vehicleManufacturer;
- (id)vehicleModel;
- (id)vehicleName;
- (void)writeTo:(id)arg1;

@end
