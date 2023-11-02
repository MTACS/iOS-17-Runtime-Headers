
@interface HDCodableWorkoutSessionGlobalState : PBCodable <NSCopying> {
    HDCodableWorkoutActivity * _currentActivity;
    double  _endDate;
    NSMutableArray * _events;
    struct { 
        unsigned int endDate : 1; 
        unsigned int sessionState : 1; 
        unsigned int sessionStateChangeDate : 1; 
        unsigned int sessionStateEvent : 1; 
        unsigned int sessionStateEventDate : 1; 
        unsigned int startDate : 1; 
    }  _has;
    long long  _sessionState;
    double  _sessionStateChangeDate;
    long long  _sessionStateEvent;
    double  _sessionStateEventDate;
    double  _startDate;
}

@property (nonatomic, retain) HDCodableWorkoutActivity *currentActivity;
@property (nonatomic) double endDate;
@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic, readonly) bool hasCurrentActivity;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasSessionState;
@property (nonatomic) bool hasSessionStateChangeDate;
@property (nonatomic) bool hasSessionStateEvent;
@property (nonatomic) bool hasSessionStateEventDate;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) long long sessionState;
@property (nonatomic) double sessionStateChangeDate;
@property (nonatomic) long long sessionStateEvent;
@property (nonatomic) double sessionStateEventDate;
@property (nonatomic) double startDate;

+ (Class)eventsType;

- (void).cxx_destruct;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentActivity;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (id)events;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (bool)hasCurrentActivity;
- (bool)hasEndDate;
- (bool)hasSessionState;
- (bool)hasSessionStateChangeDate;
- (bool)hasSessionStateEvent;
- (bool)hasSessionStateEventDate;
- (bool)hasStartDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)sessionState;
- (double)sessionStateChangeDate;
- (long long)sessionStateEvent;
- (double)sessionStateEventDate;
- (void)setCurrentActivity:(id)arg1;
- (void)setEndDate:(double)arg1;
- (void)setEvents:(id)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasSessionState:(bool)arg1;
- (void)setHasSessionStateChangeDate:(bool)arg1;
- (void)setHasSessionStateEvent:(bool)arg1;
- (void)setHasSessionStateEventDate:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setSessionState:(long long)arg1;
- (void)setSessionStateChangeDate:(double)arg1;
- (void)setSessionStateEvent:(long long)arg1;
- (void)setSessionStateEventDate:(double)arg1;
- (void)setStartDate:(double)arg1;
- (double)startDate;
- (void)writeTo:(id)arg1;

@end
