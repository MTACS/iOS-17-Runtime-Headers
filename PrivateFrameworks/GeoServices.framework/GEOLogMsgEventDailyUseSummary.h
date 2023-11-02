
@interface GEOLogMsgEventDailyUseSummary : PBCodable <NSCopying> {
    double  _firstEventDate;
    unsigned long long  _firstEventTimeRoundedToHour;
    struct { 
        unsigned int has_firstEventDate : 1; 
        unsigned int has_firstEventTimeRoundedToHour : 1; 
        unsigned int has_summaryPeriod : 1; 
    }  _flags;
    int  _summaryPeriod;
    NSMutableArray * _useEvents;
}

@property (nonatomic) double firstEventDate;
@property (nonatomic) unsigned long long firstEventTimeRoundedToHour;
@property (nonatomic) bool hasFirstEventDate;
@property (nonatomic) bool hasFirstEventTimeRoundedToHour;
@property (nonatomic) bool hasSummaryPeriod;
@property (nonatomic) int summaryPeriod;
@property (nonatomic, retain) NSMutableArray *useEvents;

+ (bool)isValid:(id)arg1;
+ (Class)useEventsType;

- (void).cxx_destruct;
- (int)StringAsSummaryPeriod:(id)arg1;
- (void)addUseEvents:(id)arg1;
- (void)clearUseEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)firstEventDate;
- (unsigned long long)firstEventTimeRoundedToHour;
- (bool)hasFirstEventDate;
- (bool)hasFirstEventTimeRoundedToHour;
- (bool)hasSummaryPeriod;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFirstEventDate:(double)arg1;
- (void)setFirstEventTimeRoundedToHour:(unsigned long long)arg1;
- (void)setHasFirstEventDate:(bool)arg1;
- (void)setHasFirstEventTimeRoundedToHour:(bool)arg1;
- (void)setHasSummaryPeriod:(bool)arg1;
- (void)setSummaryPeriod:(int)arg1;
- (void)setUseEvents:(id)arg1;
- (int)summaryPeriod;
- (id)summaryPeriodAsString:(int)arg1;
- (id)useEvents;
- (id)useEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)useEventsCount;
- (void)writeTo:(id)arg1;

@end
