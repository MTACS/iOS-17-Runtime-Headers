
@interface ATXModePBRecord : PBCodable <NSCopying> {
    NSMutableArray * _events;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int timezone : 1; 
    }  _has;
    unsigned long long  _timestamp;
    int  _timezone;
    NSString * _userID;
}

@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTimezone;
@property (nonatomic, readonly) bool hasUserID;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int timezone;
@property (nonatomic, retain) NSString *userID;

+ (Class)eventsType;

- (void).cxx_destruct;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)events;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (bool)hasTimestamp;
- (bool)hasTimezone;
- (bool)hasUserID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTimezone:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTimezone:(int)arg1;
- (void)setUserID:(id)arg1;
- (unsigned long long)timestamp;
- (int)timezone;
- (id)userID;
- (void)writeTo:(id)arg1;

@end
