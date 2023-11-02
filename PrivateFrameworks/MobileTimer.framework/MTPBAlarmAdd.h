
@interface MTPBAlarmAdd : PBCodable <NSCopying> {
    MTPBAlarm * _alarm;
}

@property (nonatomic, retain) MTPBAlarm *alarm;

- (void).cxx_destruct;
- (id)alarm;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlarm:(id)arg1;
- (void)writeTo:(id)arg1;

@end
