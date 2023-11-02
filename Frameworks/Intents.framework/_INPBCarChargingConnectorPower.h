
@interface _INPBCarChargingConnectorPower : PBCodable <NSCopying, NSSecureCoding, _INPBCarChargingConnectorPower> {
    int  _chargingConnector;
    struct { 
        unsigned int chargingConnector : 1; 
    }  _has;
    _INPBPower * _maximumPower;
}

@property (nonatomic) int chargingConnector;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasChargingConnector;
@property (nonatomic, readonly) bool hasMaximumPower;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBPower *maximumPower;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsChargingConnector:(id)arg1;
- (int)chargingConnector;
- (id)chargingConnectorAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasChargingConnector;
- (bool)hasMaximumPower;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maximumPower;
- (bool)readFrom:(id)arg1;
- (void)setChargingConnector:(int)arg1;
- (void)setHasChargingConnector:(bool)arg1;
- (void)setMaximumPower:(id)arg1;
- (void)writeTo:(id)arg1;

@end
