
@interface GEORPFeedbackBusinessHours : PBCodable <NSCopying> {
    NSString * _comments;
    unsigned long long  _end;
    struct { 
        unsigned int has_end : 1; 
        unsigned int has_start : 1; 
        unsigned int has_hoursType : 1; 
        unsigned int read_comments : 1; 
        unsigned int read_weeklyHours : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _hoursType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned long long  _start;
    GEOPDHours * _weeklyHours;
}

@property (nonatomic, retain) NSString *comments;
@property (nonatomic) unsigned long long end;
@property (nonatomic, readonly) bool hasComments;
@property (nonatomic) bool hasEnd;
@property (nonatomic) bool hasHoursType;
@property (nonatomic) bool hasStart;
@property (nonatomic, readonly) bool hasWeeklyHours;
@property (nonatomic) int hoursType;
@property (nonatomic) unsigned long long start;
@property (nonatomic, retain) GEOPDHours *weeklyHours;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsHoursType:(id)arg1;
- (id)comments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)end;
- (bool)hasComments;
- (bool)hasEnd;
- (bool)hasHoursType;
- (bool)hasStart;
- (bool)hasWeeklyHours;
- (unsigned long long)hash;
- (int)hoursType;
- (id)hoursTypeAsString:(int)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setComments:(id)arg1;
- (void)setEnd:(unsigned long long)arg1;
- (void)setHasEnd:(bool)arg1;
- (void)setHasHoursType:(bool)arg1;
- (void)setHasStart:(bool)arg1;
- (void)setHoursType:(int)arg1;
- (void)setStart:(unsigned long long)arg1;
- (void)setWeeklyHours:(id)arg1;
- (unsigned long long)start;
- (id)weeklyHours;
- (void)writeTo:(id)arg1;

@end
