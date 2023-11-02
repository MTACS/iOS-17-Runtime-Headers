
@interface FLOWSchemaFLOWHomeAutomationCommand : SISchemaInstrumentationMessage {
    unsigned int  _commandDuration;
    int  _commandErrorReason;
    SISchemaUUID * _commandId;
    int  _commandOutcome;
    int  _commandType;
    struct { 
        unsigned int commandType : 1; 
        unsigned int commandOutcome : 1; 
        unsigned int commandErrorReason : 1; 
        unsigned int commandDuration : 1; 
    }  _has;
    bool  _hasCommandId;
    NSArray * _homeAutomationRequests;
}

@property (nonatomic) unsigned int commandDuration;
@property (nonatomic) int commandErrorReason;
@property (nonatomic, retain) SISchemaUUID *commandId;
@property (nonatomic) int commandOutcome;
@property (nonatomic) int commandType;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) bool hasCommandDuration;
@property (nonatomic) bool hasCommandErrorReason;
@property (nonatomic) bool hasCommandId;
@property (nonatomic) bool hasCommandOutcome;
@property (nonatomic) bool hasCommandType;
@property (nonatomic, copy) NSArray *homeAutomationRequests;
@property (nonatomic, readonly) NSData *jsonData;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (void)addHomeAutomationRequests:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearHomeAutomationRequests;
- (unsigned int)commandDuration;
- (int)commandErrorReason;
- (id)commandId;
- (int)commandOutcome;
- (int)commandType;
- (void)deleteCommandDuration;
- (void)deleteCommandErrorReason;
- (void)deleteCommandId;
- (void)deleteCommandOutcome;
- (void)deleteCommandType;
- (void)deleteHomeAutomationRequests;
- (id)dictionaryRepresentation;
- (bool)hasCommandDuration;
- (bool)hasCommandErrorReason;
- (bool)hasCommandId;
- (bool)hasCommandOutcome;
- (bool)hasCommandType;
- (unsigned long long)hash;
- (id)homeAutomationRequests;
- (id)homeAutomationRequestsAtIndex:(unsigned long long)arg1;
- (unsigned long long)homeAutomationRequestsCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCommandDuration:(unsigned int)arg1;
- (void)setCommandErrorReason:(int)arg1;
- (void)setCommandId:(id)arg1;
- (void)setCommandOutcome:(int)arg1;
- (void)setCommandType:(int)arg1;
- (void)setHasCommandDuration:(bool)arg1;
- (void)setHasCommandErrorReason:(bool)arg1;
- (void)setHasCommandId:(bool)arg1;
- (void)setHasCommandOutcome:(bool)arg1;
- (void)setHasCommandType:(bool)arg1;
- (void)setHomeAutomationRequests:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end
