
@interface MTPBAlarmState : PBCodable <NSCopying> {
    NSMutableArray * _alarms;
}

@property (nonatomic, retain) NSMutableArray *alarms;

+ (Class)alarmsType;

- (void).cxx_destruct;
- (void)addAlarms:(id)arg1;
- (id)alarms;
- (id)alarmsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alarmsCount;
- (void)clearAlarms;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)writeTo:(id)arg1;

@end
