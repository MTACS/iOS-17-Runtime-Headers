
@interface SCSchemaSCSetUndoArgs : SISchemaInstrumentationMessage {
    NSString * _directInvocationId;
    bool  _hasDirectInvocationId;
}

@property (nonatomic, copy) NSString *directInvocationId;
@property (nonatomic) bool hasDirectInvocationId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)deleteDirectInvocationId;
- (id)dictionaryRepresentation;
- (id)directInvocationId;
- (bool)hasDirectInvocationId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDirectInvocationId:(id)arg1;
- (void)setHasDirectInvocationId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
