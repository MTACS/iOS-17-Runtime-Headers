
@interface NLXSchemaSSUUserRequestFailed : SISchemaInstrumentationMessage {
    int  _errorCode;
    struct { 
        unsigned int errorCode : 1; 
    }  _has;
}

@property (nonatomic) int errorCode;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteErrorCode;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (bool)hasErrorCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
