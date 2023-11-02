
@interface FLOWSchemaFLOWHomeCommunicationSendOrReply : SISchemaInstrumentationMessage {
    NSArray * _targetTypes;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *targetTypes;

- (void).cxx_destruct;
- (void)addTargetType:(int)arg1;
- (void)clearTargetType;
- (void)deleteTargetType;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setTargetTypes:(id)arg1;
- (id)suppressMessageUnderConditions;
- (int)targetTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)targetTypeCount;
- (id)targetTypes;
- (void)writeTo:(id)arg1;

@end
