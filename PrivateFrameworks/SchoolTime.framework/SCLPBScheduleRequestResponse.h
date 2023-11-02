
@interface SCLPBScheduleRequestResponse : PBCodable <NSCopying> {
    SCLPBScheduleSettings * _scheduleSettings;
}

@property (nonatomic, readonly) bool hasScheduleSettings;
@property (nonatomic, retain) SCLPBScheduleSettings *scheduleSettings;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasScheduleSettings;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)scheduleSettings;
- (void)setScheduleSettings:(id)arg1;
- (void)writeTo:(id)arg1;

@end
