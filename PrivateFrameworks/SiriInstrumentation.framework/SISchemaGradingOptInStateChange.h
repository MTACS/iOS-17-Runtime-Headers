
@interface SISchemaGradingOptInStateChange : SISchemaTopLevelUnionType {
    unsigned long long  _epochEventTimestampInSeconds;
    struct { 
        unsigned int prevOptInState : 1; 
        unsigned int newOptInState : 1; 
        unsigned int source : 1; 
        unsigned int epochEventTimestampInSeconds : 1; 
    }  _has;
    bool  _hasReason;
    bool  _hasSystemBuild;
    int  _newOptInState;
    int  _prevOptInState;
    NSString * _reason;
    int  _source;
    NSString * _systemBuild;
}

@property (nonatomic) unsigned long long epochEventTimestampInSeconds;
@property (nonatomic) bool hasEpochEventTimestampInSeconds;
@property (nonatomic) bool hasNewOptInState;
@property (nonatomic) bool hasPrevOptInState;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasSource;
@property (nonatomic) bool hasSystemBuild;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int newOptInState;
@property (nonatomic) int prevOptInState;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) int source;
@property (nonatomic, copy) NSString *systemBuild;

- (void).cxx_destruct;
- (void)deleteEpochEventTimestampInSeconds;
- (void)deleteNewOptInState;
- (void)deletePrevOptInState;
- (void)deleteReason;
- (void)deleteSource;
- (void)deleteSystemBuild;
- (id)dictionaryRepresentation;
- (unsigned long long)epochEventTimestampInSeconds;
- (int)getAnyEventType;
- (bool)hasEpochEventTimestampInSeconds;
- (bool)hasNewOptInState;
- (bool)hasPrevOptInState;
- (bool)hasReason;
- (bool)hasSource;
- (bool)hasSystemBuild;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)newOptInState;
- (int)prevOptInState;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)reason;
- (void)setEpochEventTimestampInSeconds:(unsigned long long)arg1;
- (void)setHasEpochEventTimestampInSeconds:(bool)arg1;
- (void)setHasNewOptInState:(bool)arg1;
- (void)setHasPrevOptInState:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setHasSystemBuild:(bool)arg1;
- (void)setNewOptInState:(int)arg1;
- (void)setPrevOptInState:(int)arg1;
- (void)setReason:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setSystemBuild:(id)arg1;
- (int)source;
- (id)suppressMessageUnderConditions;
- (id)systemBuild;
- (void)writeTo:(id)arg1;

@end
