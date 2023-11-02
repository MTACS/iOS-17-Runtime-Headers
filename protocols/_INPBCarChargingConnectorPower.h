
@protocol _INPBCarChargingConnectorPower <NSObject>

@required

- (int)StringAsChargingConnector:(NSString *)arg1;
- (int)chargingConnector;
- (NSString *)chargingConnectorAsString:(int)arg1;
- (bool)hasChargingConnector;
- (bool)hasMaximumPower;
- (_INPBPower *)maximumPower;
- (void)setChargingConnector:(int)arg1;
- (void)setHasChargingConnector:(bool)arg1;
- (void)setMaximumPower:(_INPBPower *)arg1;

@end
