
@interface GEODailyUseSummaryUseEvent : PBCodable <NSCopying> {
    int  _appType;
    unsigned int  _count;
    int  _eventType;
    struct { 
        unsigned int has_appType : 1; 
        unsigned int has_count : 1; 
        unsigned int has_eventType : 1; 
        unsigned int has_usageBool : 1; 
    }  _flags;
    bool  _usageBool;
    NSString * _usageString;
}

@property (nonatomic) int appType;
@property (nonatomic) unsigned int count;
@property (nonatomic) int eventType;
@property (nonatomic) bool hasAppType;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasUsageBool;
@property (nonatomic, readonly) bool hasUsageString;
@property (nonatomic) bool usageBool;
@property (nonatomic, retain) NSString *usageString;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAppType:(id)arg1;
- (int)StringAsEventType:(id)arg1;
- (int)appType;
- (id)appTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (bool)hasAppType;
- (bool)hasCount;
- (bool)hasEventType;
- (bool)hasUsageBool;
- (bool)hasUsageString;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppType:(int)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasAppType:(bool)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasUsageBool:(bool)arg1;
- (void)setUsageBool:(bool)arg1;
- (void)setUsageString:(id)arg1;
- (bool)usageBool;
- (id)usageString;
- (void)writeTo:(id)arg1;

@end
