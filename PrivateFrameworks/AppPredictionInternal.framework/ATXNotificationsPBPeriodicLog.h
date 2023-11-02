
@interface ATXNotificationsPBPeriodicLog : PBCodable <NSCopying> {
    NSMutableArray * _dataUnits;
    struct { 
        unsigned int periodEnd : 1; 
        unsigned int periodStart : 1; 
    }  _has;
    unsigned long long  _periodEnd;
    unsigned long long  _periodStart;
    NSString * _userId;
}

@property (nonatomic, retain) NSMutableArray *dataUnits;
@property (nonatomic) bool hasPeriodEnd;
@property (nonatomic) bool hasPeriodStart;
@property (nonatomic, readonly) bool hasUserId;
@property (nonatomic) unsigned long long periodEnd;
@property (nonatomic) unsigned long long periodStart;
@property (nonatomic, retain) NSString *userId;

+ (Class)dataUnitType;

- (void).cxx_destruct;
- (void)addDataUnit:(id)arg1;
- (void)clearDataUnits;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataUnitAtIndex:(unsigned long long)arg1;
- (id)dataUnits;
- (unsigned long long)dataUnitsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPeriodEnd;
- (bool)hasPeriodStart;
- (bool)hasUserId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)periodEnd;
- (unsigned long long)periodStart;
- (bool)readFrom:(id)arg1;
- (void)setDataUnits:(id)arg1;
- (void)setHasPeriodEnd:(bool)arg1;
- (void)setHasPeriodStart:(bool)arg1;
- (void)setPeriodEnd:(unsigned long long)arg1;
- (void)setPeriodStart:(unsigned long long)arg1;
- (void)setUserId:(id)arg1;
- (id)userId;
- (void)writeTo:(id)arg1;

@end
