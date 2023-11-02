
@interface BCSHoursPeriodMessage : PBCodable <NSCopying> {
    NSMutableArray * _hours;
}

@property (nonatomic, retain) NSMutableArray *hours;

+ (Class)hoursType;

- (void).cxx_destruct;
- (void)addHours:(id)arg1;
- (void)clearHours;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)hours;
- (id)hoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)hoursCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHours:(id)arg1;
- (void)writeTo:(id)arg1;

@end
