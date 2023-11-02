
@interface SICSchemaSICInvocationStarted : SISchemaInstrumentationMessage {
    int  _callAppType;
    int  _callState;
    int  _callType;
    struct { 
        unsigned int isMuted : 1; 
        unsigned int callType : 1; 
        unsigned int callState : 1; 
        unsigned int callAppType : 1; 
        unsigned int participantCountBucket : 1; 
    }  _has;
    bool  _isMuted;
    int  _participantCountBucket;
}

@property (nonatomic) int callAppType;
@property (nonatomic) int callState;
@property (nonatomic) int callType;
@property (nonatomic) bool hasCallAppType;
@property (nonatomic) bool hasCallState;
@property (nonatomic) bool hasCallType;
@property (nonatomic) bool hasIsMuted;
@property (nonatomic) bool hasParticipantCountBucket;
@property (nonatomic) bool isMuted;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int participantCountBucket;

- (int)callAppType;
- (int)callState;
- (int)callType;
- (void)deleteCallAppType;
- (void)deleteCallState;
- (void)deleteCallType;
- (void)deleteIsMuted;
- (void)deleteParticipantCountBucket;
- (id)dictionaryRepresentation;
- (bool)hasCallAppType;
- (bool)hasCallState;
- (bool)hasCallType;
- (bool)hasIsMuted;
- (bool)hasParticipantCountBucket;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMuted;
- (id)jsonData;
- (int)participantCountBucket;
- (bool)readFrom:(id)arg1;
- (void)setCallAppType:(int)arg1;
- (void)setCallState:(int)arg1;
- (void)setCallType:(int)arg1;
- (void)setHasCallAppType:(bool)arg1;
- (void)setHasCallState:(bool)arg1;
- (void)setHasCallType:(bool)arg1;
- (void)setHasIsMuted:(bool)arg1;
- (void)setHasParticipantCountBucket:(bool)arg1;
- (void)setIsMuted:(bool)arg1;
- (void)setParticipantCountBucket:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
