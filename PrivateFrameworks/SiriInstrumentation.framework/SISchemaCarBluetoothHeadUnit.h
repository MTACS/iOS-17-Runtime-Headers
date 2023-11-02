
@interface SISchemaCarBluetoothHeadUnit : SISchemaInstrumentationMessage {
    NSString * _carMake;
    NSString * _carModel;
    unsigned int  _carYear;
    struct { 
        unsigned int carYear : 1; 
    }  _has;
    bool  _hasCarMake;
    bool  _hasCarModel;
    bool  _hasHeadUnitProductId;
    bool  _hasHeadUnitVendorId;
    bool  _hasOrganizationallyUniqueId;
    NSString * _headUnitProductId;
    NSString * _headUnitVendorId;
    NSString * _organizationallyUniqueId;
}

@property (nonatomic, copy) NSString *carMake;
@property (nonatomic, copy) NSString *carModel;
@property (nonatomic) unsigned int carYear;
@property (nonatomic) bool hasCarMake;
@property (nonatomic) bool hasCarModel;
@property (nonatomic) bool hasCarYear;
@property (nonatomic) bool hasHeadUnitProductId;
@property (nonatomic) bool hasHeadUnitVendorId;
@property (nonatomic) bool hasOrganizationallyUniqueId;
@property (nonatomic, copy) NSString *headUnitProductId;
@property (nonatomic, copy) NSString *headUnitVendorId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *organizationallyUniqueId;

- (void).cxx_destruct;
- (id)carMake;
- (id)carModel;
- (unsigned int)carYear;
- (void)deleteCarMake;
- (void)deleteCarModel;
- (void)deleteCarYear;
- (void)deleteHeadUnitProductId;
- (void)deleteHeadUnitVendorId;
- (void)deleteOrganizationallyUniqueId;
- (id)dictionaryRepresentation;
- (bool)hasCarMake;
- (bool)hasCarModel;
- (bool)hasCarYear;
- (bool)hasHeadUnitProductId;
- (bool)hasHeadUnitVendorId;
- (bool)hasOrganizationallyUniqueId;
- (unsigned long long)hash;
- (id)headUnitProductId;
- (id)headUnitVendorId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)organizationallyUniqueId;
- (bool)readFrom:(id)arg1;
- (void)setCarMake:(id)arg1;
- (void)setCarModel:(id)arg1;
- (void)setCarYear:(unsigned int)arg1;
- (void)setHasCarMake:(bool)arg1;
- (void)setHasCarModel:(bool)arg1;
- (void)setHasCarYear:(bool)arg1;
- (void)setHasHeadUnitProductId:(bool)arg1;
- (void)setHasHeadUnitVendorId:(bool)arg1;
- (void)setHasOrganizationallyUniqueId:(bool)arg1;
- (void)setHeadUnitProductId:(id)arg1;
- (void)setHeadUnitVendorId:(id)arg1;
- (void)setOrganizationallyUniqueId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
