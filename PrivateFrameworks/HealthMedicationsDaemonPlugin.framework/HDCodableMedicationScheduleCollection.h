
@interface HDCodableMedicationScheduleCollection : PBCodable <NSCopying> {
    NSMutableArray * _schedules;
}

@property (nonatomic, retain) NSMutableArray *schedules;

+ (Class)schedulesType;

- (void).cxx_destruct;
- (void)addSchedules:(id)arg1;
- (void)clearSchedules;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)schedules;
- (id)schedulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)schedulesCount;
- (void)setSchedules:(id)arg1;
- (void)writeTo:(id)arg1;

@end
