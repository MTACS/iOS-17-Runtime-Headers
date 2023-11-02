
@interface FLOWSchemaFLOWHomeAutomationContext : SISchemaInstrumentationMessage {
    bool  _hasHomeAutomationCommand;
    bool  _hasHomeContext;
    FLOWSchemaFLOWHomeAutomationCommand * _homeAutomationCommand;
    FLOWSchemaFLOWHomeContext * _homeContext;
    NSArray * _homeKitServiceResponses;
}

@property (nonatomic) bool hasHomeAutomationCommand;
@property (nonatomic) bool hasHomeContext;
@property (nonatomic, retain) FLOWSchemaFLOWHomeAutomationCommand *homeAutomationCommand;
@property (nonatomic, retain) FLOWSchemaFLOWHomeContext *homeContext;
@property (nonatomic, copy) NSArray *homeKitServiceResponses;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addHomeKitServiceResponse:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearHomeKitServiceResponse;
- (void)deleteHomeAutomationCommand;
- (void)deleteHomeContext;
- (void)deleteHomeKitServiceResponse;
- (id)dictionaryRepresentation;
- (bool)hasHomeAutomationCommand;
- (bool)hasHomeContext;
- (unsigned long long)hash;
- (id)homeAutomationCommand;
- (id)homeContext;
- (id)homeKitServiceResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)homeKitServiceResponseCount;
- (id)homeKitServiceResponses;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasHomeAutomationCommand:(bool)arg1;
- (void)setHasHomeContext:(bool)arg1;
- (void)setHomeAutomationCommand:(id)arg1;
- (void)setHomeContext:(id)arg1;
- (void)setHomeKitServiceResponses:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
