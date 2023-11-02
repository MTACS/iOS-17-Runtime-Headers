
@interface MTPBSnoozeAction : PBCodable <NSCopying> {
    double  _snoozeDate;
}

@property (nonatomic) double snoozeDate;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSnoozeDate:(double)arg1;
- (double)snoozeDate;
- (void)writeTo:(id)arg1;

@end
