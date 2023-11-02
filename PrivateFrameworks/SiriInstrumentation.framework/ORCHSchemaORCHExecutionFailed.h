
@interface ORCHSchemaORCHExecutionFailed : SISchemaInstrumentationMessage {
    NSString * _errorString;
    bool  _hasErrorString;
}

@property (nonatomic, copy) NSString *errorString;
@property (nonatomic) bool hasErrorString;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)deleteErrorString;
- (id)dictionaryRepresentation;
- (id)errorString;
- (bool)hasErrorString;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setErrorString:(id)arg1;
- (void)setHasErrorString:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
