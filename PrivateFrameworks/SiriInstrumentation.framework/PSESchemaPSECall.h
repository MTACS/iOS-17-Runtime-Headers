
@interface PSESchemaPSECall : SISchemaInstrumentationMessage {
    double  _callDurationInSeconds;
    int  _disconnectedReason;
    struct { 
        unsigned int callDurationInSeconds : 1; 
        unsigned int hasUserInitiatedFollowup : 1; 
        unsigned int timeToEstablishInSeconds : 1; 
        unsigned int recentCallStatus : 1; 
        unsigned int disconnectedReason : 1; 
    }  _has;
    bool  _hasUserInitiatedFollowup;
    int  _recentCallStatus;
    double  _timeToEstablishInSeconds;
}

@property (nonatomic) double callDurationInSeconds;
@property (nonatomic) int disconnectedReason;
@property (nonatomic) bool hasCallDurationInSeconds;
@property (nonatomic) bool hasDisconnectedReason;
@property (nonatomic) bool hasHasUserInitiatedFollowup;
@property (nonatomic) bool hasRecentCallStatus;
@property (nonatomic) bool hasTimeToEstablishInSeconds;
@property (nonatomic) bool hasUserInitiatedFollowup;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int recentCallStatus;
@property (nonatomic) double timeToEstablishInSeconds;

- (double)callDurationInSeconds;
- (void)deleteCallDurationInSeconds;
- (void)deleteDisconnectedReason;
- (void)deleteHasUserInitiatedFollowup;
- (void)deleteRecentCallStatus;
- (void)deleteTimeToEstablishInSeconds;
- (id)dictionaryRepresentation;
- (int)disconnectedReason;
- (bool)hasCallDurationInSeconds;
- (bool)hasDisconnectedReason;
- (bool)hasHasUserInitiatedFollowup;
- (bool)hasRecentCallStatus;
- (bool)hasTimeToEstablishInSeconds;
- (bool)hasUserInitiatedFollowup;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)recentCallStatus;
- (void)setCallDurationInSeconds:(double)arg1;
- (void)setDisconnectedReason:(int)arg1;
- (void)setHasCallDurationInSeconds:(bool)arg1;
- (void)setHasDisconnectedReason:(bool)arg1;
- (void)setHasHasUserInitiatedFollowup:(bool)arg1;
- (void)setHasRecentCallStatus:(bool)arg1;
- (void)setHasTimeToEstablishInSeconds:(bool)arg1;
- (void)setHasUserInitiatedFollowup:(bool)arg1;
- (void)setRecentCallStatus:(int)arg1;
- (void)setTimeToEstablishInSeconds:(double)arg1;
- (id)suppressMessageUnderConditions;
- (double)timeToEstablishInSeconds;
- (void)writeTo:(id)arg1;

@end
