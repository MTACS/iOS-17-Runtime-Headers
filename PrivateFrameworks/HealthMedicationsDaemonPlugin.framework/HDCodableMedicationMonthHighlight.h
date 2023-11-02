
@interface HDCodableMedicationMonthHighlight : PBCodable <NSCopying> {
    NSMutableArray * _days;
}

@property (nonatomic, retain) NSMutableArray *days;

+ (Class)daysType;

- (void).cxx_destruct;
- (void)addDays:(id)arg1;
- (void)clearDays;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)days;
- (id)daysAtIndex:(unsigned long long)arg1;
- (unsigned long long)daysCount;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDays:(id)arg1;
- (void)writeTo:(id)arg1;

@end
