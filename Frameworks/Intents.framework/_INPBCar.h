
@interface _INPBCar : PBCodable <NSCopying, NSSecureCoding, _INPBCar> {
    NSString * _carIdentifier;
    _INPBColor * _color;
    NSString * _displayName;
    struct { }  _has;
    _INPBCarHeadUnit * _headUnit;
    NSString * _make;
    NSString * _model;
    NSArray * _powerPerConnectors;
    NSArray * _supportedChargingConnectors;
    NSString * _year;
}

@property (nonatomic, copy) NSString *carIdentifier;
@property (nonatomic, retain) _INPBColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) bool hasCarIdentifier;
@property (nonatomic, readonly) bool hasColor;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasHeadUnit;
@property (nonatomic, readonly) bool hasMake;
@property (nonatomic, readonly) bool hasModel;
@property (nonatomic, readonly) bool hasYear;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBCarHeadUnit *headUnit;
@property (nonatomic, copy) NSString *make;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSArray *powerPerConnectors;
@property (nonatomic, readonly) unsigned long long powerPerConnectorsCount;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedChargingConnectors;
@property (nonatomic, readonly) unsigned long long supportedChargingConnectorsCount;
@property (nonatomic, copy) NSString *year;

+ (Class)powerPerConnectorType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addPowerPerConnector:(id)arg1;
- (void)addSupportedChargingConnectors:(id)arg1;
- (id)carIdentifier;
- (void)clearPowerPerConnectors;
- (void)clearSupportedChargingConnectors;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCarIdentifier;
- (bool)hasColor;
- (bool)hasDisplayName;
- (bool)hasHeadUnit;
- (bool)hasMake;
- (bool)hasModel;
- (bool)hasYear;
- (unsigned long long)hash;
- (id)headUnit;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)make;
- (id)model;
- (id)powerPerConnectorAtIndex:(unsigned long long)arg1;
- (id)powerPerConnectors;
- (unsigned long long)powerPerConnectorsCount;
- (bool)readFrom:(id)arg1;
- (void)setCarIdentifier:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHeadUnit:(id)arg1;
- (void)setMake:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setPowerPerConnectors:(id)arg1;
- (void)setSupportedChargingConnectors:(id)arg1;
- (void)setYear:(id)arg1;
- (id)supportedChargingConnectors;
- (id)supportedChargingConnectorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedChargingConnectorsCount;
- (void)writeTo:(id)arg1;
- (id)year;

@end
