
@interface MTPBAlarmUpdate : PBCodable <NSCopying> {
    MTPBAlarmProperties * _alarmProperties;
}

@property (nonatomic, retain) MTPBAlarmProperties *alarmProperties;

- (void).cxx_destruct;
- (id)alarmProperties;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlarmProperties:(id)arg1;
- (void)writeTo:(id)arg1;

@end
