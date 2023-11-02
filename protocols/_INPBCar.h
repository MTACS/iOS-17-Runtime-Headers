
@protocol _INPBCar <NSObject>

@required

+ (Class)powerPerConnectorType;

- (void)addPowerPerConnector:(_INPBCarChargingConnectorPower *)arg1;
- (void)addSupportedChargingConnectors:(NSString *)arg1;
- (NSString *)carIdentifier;
- (void)clearPowerPerConnectors;
- (void)clearSupportedChargingConnectors;
- (_INPBColor *)color;
- (NSString *)displayName;
- (bool)hasCarIdentifier;
- (bool)hasColor;
- (bool)hasDisplayName;
- (bool)hasHeadUnit;
- (bool)hasMake;
- (bool)hasModel;
- (bool)hasYear;
- (_INPBCarHeadUnit *)headUnit;
- (NSString *)make;
- (NSString *)model;
- (_INPBCarChargingConnectorPower *)powerPerConnectorAtIndex:(unsigned long long)arg1;
- (NSArray *)powerPerConnectors;
- (unsigned long long)powerPerConnectorsCount;
- (void)setCarIdentifier:(NSString *)arg1;
- (void)setColor:(_INPBColor *)arg1;
- (void)setDisplayName:(NSString *)arg1;
- (void)setHeadUnit:(_INPBCarHeadUnit *)arg1;
- (void)setMake:(NSString *)arg1;
- (void)setModel:(NSString *)arg1;
- (void)setPowerPerConnectors:(NSArray *)arg1;
- (void)setSupportedChargingConnectors:(NSArray *)arg1;
- (void)setYear:(NSString *)arg1;
- (NSArray *)supportedChargingConnectors;
- (NSString *)supportedChargingConnectorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedChargingConnectorsCount;
- (NSString *)year;

@end
