
@interface HKCodableAudiogramSensitivityPoint : PBCodable <NSCopying> {
    HKCodableQuantity * _frequency;
    HKCodableQuantity * _leftEarSensitivity;
    HKCodableQuantity * _rightEarSensitivity;
}

@property (nonatomic, retain) HKCodableQuantity *frequency;
@property (nonatomic, readonly) bool hasFrequency;
@property (nonatomic, readonly) bool hasLeftEarSensitivity;
@property (nonatomic, readonly) bool hasRightEarSensitivity;
@property (nonatomic, retain) HKCodableQuantity *leftEarSensitivity;
@property (nonatomic, retain) HKCodableQuantity *rightEarSensitivity;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)frequency;
- (bool)hasFrequency;
- (bool)hasLeftEarSensitivity;
- (bool)hasRightEarSensitivity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)leftEarSensitivity;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rightEarSensitivity;
- (void)setFrequency:(id)arg1;
- (void)setLeftEarSensitivity:(id)arg1;
- (void)setRightEarSensitivity:(id)arg1;
- (void)writeTo:(id)arg1;

@end
