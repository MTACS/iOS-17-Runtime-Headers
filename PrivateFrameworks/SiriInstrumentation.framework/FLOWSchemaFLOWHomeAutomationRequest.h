
@interface FLOWSchemaFLOWHomeAutomationRequest : SISchemaInstrumentationMessage {
    struct { 
        unsigned int homeAutomationRequestType : 1; 
        unsigned int homeAutomationRequestOutcome : 1; 
        unsigned int homeAutomationRequestDuration : 1; 
    }  _has;
    bool  _hasHomeAutomationRequestId;
    bool  _hasHomeAutomationRequestMetadata;
    unsigned int  _homeAutomationRequestDuration;
    NSArray * _homeAutomationRequestErrorReasons;
    SISchemaUUID * _homeAutomationRequestId;
    FLOWSchemaFLOWHomeAutomationRequestMetadata * _homeAutomationRequestMetadata;
    int  _homeAutomationRequestOutcome;
    int  _homeAutomationRequestType;
}

@property (nonatomic) bool hasHomeAutomationRequestDuration;
@property (nonatomic) bool hasHomeAutomationRequestId;
@property (nonatomic) bool hasHomeAutomationRequestMetadata;
@property (nonatomic) bool hasHomeAutomationRequestOutcome;
@property (nonatomic) bool hasHomeAutomationRequestType;
@property (nonatomic) unsigned int homeAutomationRequestDuration;
@property (nonatomic, copy) NSArray *homeAutomationRequestErrorReasons;
@property (nonatomic, retain) SISchemaUUID *homeAutomationRequestId;
@property (nonatomic, retain) FLOWSchemaFLOWHomeAutomationRequestMetadata *homeAutomationRequestMetadata;
@property (nonatomic) int homeAutomationRequestOutcome;
@property (nonatomic) int homeAutomationRequestType;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addHomeAutomationRequestErrorReason:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearHomeAutomationRequestErrorReason;
- (void)deleteHomeAutomationRequestDuration;
- (void)deleteHomeAutomationRequestErrorReason;
- (void)deleteHomeAutomationRequestId;
- (void)deleteHomeAutomationRequestMetadata;
- (void)deleteHomeAutomationRequestOutcome;
- (void)deleteHomeAutomationRequestType;
- (id)dictionaryRepresentation;
- (bool)hasHomeAutomationRequestDuration;
- (bool)hasHomeAutomationRequestId;
- (bool)hasHomeAutomationRequestMetadata;
- (bool)hasHomeAutomationRequestOutcome;
- (bool)hasHomeAutomationRequestType;
- (unsigned long long)hash;
- (unsigned int)homeAutomationRequestDuration;
- (id)homeAutomationRequestErrorReasonAtIndex:(unsigned long long)arg1;
- (unsigned long long)homeAutomationRequestErrorReasonCount;
- (id)homeAutomationRequestErrorReasons;
- (id)homeAutomationRequestId;
- (id)homeAutomationRequestMetadata;
- (int)homeAutomationRequestOutcome;
- (int)homeAutomationRequestType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasHomeAutomationRequestDuration:(bool)arg1;
- (void)setHasHomeAutomationRequestId:(bool)arg1;
- (void)setHasHomeAutomationRequestMetadata:(bool)arg1;
- (void)setHasHomeAutomationRequestOutcome:(bool)arg1;
- (void)setHasHomeAutomationRequestType:(bool)arg1;
- (void)setHomeAutomationRequestDuration:(unsigned int)arg1;
- (void)setHomeAutomationRequestErrorReasons:(id)arg1;
- (void)setHomeAutomationRequestId:(id)arg1;
- (void)setHomeAutomationRequestMetadata:(id)arg1;
- (void)setHomeAutomationRequestOutcome:(int)arg1;
- (void)setHomeAutomationRequestType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
