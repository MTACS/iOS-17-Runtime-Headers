
@interface ATXNotificationsPBRecord : PBCodable <NSCopying> {
    NSString * _bundleId;
    ATXNotificationsPBContext * _context;
    NSMutableArray * _events;
    struct { 
        unsigned int suppActions : 1; 
        unsigned int timezone : 1; 
    }  _has;
    int  _suppActions;
    int  _timezone;
    NSString * _topic;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) ATXNotificationsPBContext *context;
@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic) bool hasSuppActions;
@property (nonatomic) bool hasTimezone;
@property (nonatomic, readonly) bool hasTopic;
@property (nonatomic) int suppActions;
@property (nonatomic) int timezone;
@property (nonatomic, retain) NSString *topic;

+ (Class)eventsType;

- (void).cxx_destruct;
- (void)addEvents:(id)arg1;
- (id)bundleId;
- (void)clearEvents;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)events;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (bool)hasBundleId;
- (bool)hasContext;
- (bool)hasSuppActions;
- (bool)hasTimezone;
- (bool)hasTopic;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setHasSuppActions:(bool)arg1;
- (void)setHasTimezone:(bool)arg1;
- (void)setSuppActions:(int)arg1;
- (void)setTimezone:(int)arg1;
- (void)setTopic:(id)arg1;
- (int)suppActions;
- (int)timezone;
- (id)topic;
- (void)writeTo:(id)arg1;

@end
