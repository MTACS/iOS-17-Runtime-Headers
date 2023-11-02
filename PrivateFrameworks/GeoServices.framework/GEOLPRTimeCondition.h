
@interface GEOLPRTimeCondition : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _dayOfMonths;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _dayOfWeeks;
    struct { 
        unsigned int read_dayOfMonths : 1; 
        unsigned int read_dayOfWeeks : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, readonly) unsigned int*dayOfMonths;
@property (nonatomic, readonly) unsigned long long dayOfMonthsCount;
@property (nonatomic, readonly) int*dayOfWeeks;
@property (nonatomic, readonly) unsigned long long dayOfWeeksCount;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsDayOfWeeks:(id)arg1;
- (void)addDayOfMonth:(unsigned int)arg1;
- (void)addDayOfWeek:(int)arg1;
- (void)clearDayOfMonths;
- (void)clearDayOfWeeks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dayOfMonthAtIndex:(unsigned long long)arg1;
- (unsigned int*)dayOfMonths;
- (unsigned long long)dayOfMonthsCount;
- (int)dayOfWeekAtIndex:(unsigned long long)arg1;
- (int*)dayOfWeeks;
- (id)dayOfWeeksAsString:(int)arg1;
- (unsigned long long)dayOfWeeksCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDayOfMonths:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setDayOfWeeks:(int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
