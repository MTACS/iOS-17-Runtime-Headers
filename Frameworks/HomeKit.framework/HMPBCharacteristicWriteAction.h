
@interface HMPBCharacteristicWriteAction : PBCodable <NSCopying> {
    NSData * _actionUUID;
    HMPBCharacteristicReference * _characteristicReference;
    NSData * _targetValue;
}

@property (nonatomic, retain) NSData *actionUUID;
@property (nonatomic, retain) HMPBCharacteristicReference *characteristicReference;
@property (nonatomic, readonly) bool hasActionUUID;
@property (nonatomic, readonly) bool hasCharacteristicReference;
@property (nonatomic, readonly) bool hasTargetValue;
@property (nonatomic, retain) NSData *targetValue;

- (void).cxx_destruct;
- (id)actionUUID;
- (id)characteristicReference;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionUUID;
- (bool)hasCharacteristicReference;
- (bool)hasTargetValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionUUID:(id)arg1;
- (void)setCharacteristicReference:(id)arg1;
- (void)setTargetValue:(id)arg1;
- (id)targetValue;
- (void)writeTo:(id)arg1;

@end
