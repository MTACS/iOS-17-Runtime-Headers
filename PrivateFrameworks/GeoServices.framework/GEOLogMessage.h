
@interface GEOLogMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int has_groupRetryCount : 1; 
        unsigned int has_logMessageType : 1; 
    }  _flags;
    unsigned int  _groupRetryCount;
    int  _logMessageType;
    NSMutableArray * _logMsgEvents;
}

@property (nonatomic) unsigned int groupRetryCount;
@property (nonatomic) bool hasGroupRetryCount;
@property (nonatomic) bool hasLogMessageType;
@property (nonatomic) int logMessageType;
@property (nonatomic, retain) NSMutableArray *logMsgEvents;

+ (bool)isValid:(id)arg1;
+ (Class)logMsgEventType;

- (void).cxx_destruct;
- (int)StringAsLogMessageType:(id)arg1;
- (void)addLogMsgEvent:(id)arg1;
- (void)clearLogMsgEvents;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)groupRetryCount;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasGroupRetryCount;
- (bool)hasLogMessageType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)logMessageType;
- (id)logMessageTypeAsString:(int)arg1;
- (id)logMsgEventAtIndex:(unsigned long long)arg1;
- (id)logMsgEvents;
- (unsigned long long)logMsgEventsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGroupRetryCount:(unsigned int)arg1;
- (void)setHasGroupRetryCount:(bool)arg1;
- (void)setHasLogMessageType:(bool)arg1;
- (void)setLogMessageType:(int)arg1;
- (void)setLogMsgEvents:(id)arg1;
- (void)writeTo:(id)arg1;

@end
