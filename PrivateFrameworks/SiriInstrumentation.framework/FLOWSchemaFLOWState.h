
@interface FLOWSchemaFLOWState : SISchemaInstrumentationMessage {
    NSString * _currentTaskName;
    NSString * _currentTaskType;
    FLOWSchemaFLOWStateReason * _flowStateReason;
    NSString * _flowStateReasonDescription;
    int  _flowStateType;
    struct { 
        unsigned int flowStateType : 1; 
    }  _has;
    bool  _hasCurrentTaskName;
    bool  _hasCurrentTaskType;
    bool  _hasFlowStateReason;
    bool  _hasFlowStateReasonDescription;
    bool  _hasResolvedSlotName;
    NSString * _resolvedSlotName;
}

@property (nonatomic, copy) NSString *currentTaskName;
@property (nonatomic, copy) NSString *currentTaskType;
@property (nonatomic, retain) FLOWSchemaFLOWStateReason *flowStateReason;
@property (nonatomic, copy) NSString *flowStateReasonDescription;
@property (nonatomic) int flowStateType;
@property (nonatomic) bool hasCurrentTaskName;
@property (nonatomic) bool hasCurrentTaskType;
@property (nonatomic) bool hasFlowStateReason;
@property (nonatomic) bool hasFlowStateReasonDescription;
@property (nonatomic) bool hasFlowStateType;
@property (nonatomic) bool hasResolvedSlotName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *resolvedSlotName;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)currentTaskName;
- (id)currentTaskType;
- (void)deleteCurrentTaskName;
- (void)deleteCurrentTaskType;
- (void)deleteFlowStateReason;
- (void)deleteFlowStateReasonDescription;
- (void)deleteFlowStateType;
- (void)deleteResolvedSlotName;
- (id)dictionaryRepresentation;
- (id)flowStateReason;
- (id)flowStateReasonDescription;
- (int)flowStateType;
- (bool)hasCurrentTaskName;
- (bool)hasCurrentTaskType;
- (bool)hasFlowStateReason;
- (bool)hasFlowStateReasonDescription;
- (bool)hasFlowStateType;
- (bool)hasResolvedSlotName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resolvedSlotName;
- (void)setCurrentTaskName:(id)arg1;
- (void)setCurrentTaskType:(id)arg1;
- (void)setFlowStateReason:(id)arg1;
- (void)setFlowStateReasonDescription:(id)arg1;
- (void)setFlowStateType:(int)arg1;
- (void)setHasCurrentTaskName:(bool)arg1;
- (void)setHasCurrentTaskType:(bool)arg1;
- (void)setHasFlowStateReason:(bool)arg1;
- (void)setHasFlowStateReasonDescription:(bool)arg1;
- (void)setHasFlowStateType:(bool)arg1;
- (void)setHasResolvedSlotName:(bool)arg1;
- (void)setResolvedSlotName:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
