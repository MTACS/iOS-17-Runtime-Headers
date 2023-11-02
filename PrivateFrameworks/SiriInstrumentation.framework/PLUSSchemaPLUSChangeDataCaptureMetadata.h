
@interface PLUSSchemaPLUSChangeDataCaptureMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int operationType : 1; 
    }  _has;
    int  _operationType;
}

@property (nonatomic) bool hasOperationType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int operationType;

- (void)deleteOperationType;
- (id)dictionaryRepresentation;
- (bool)hasOperationType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)operationType;
- (bool)readFrom:(id)arg1;
- (void)setHasOperationType:(bool)arg1;
- (void)setOperationType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
