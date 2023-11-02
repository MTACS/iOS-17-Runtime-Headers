
@interface READSchemaREADPlaybackSessionFailed : SISchemaInstrumentationMessage {
    int  _errorCodes;
    struct { 
        unsigned int errorCodes : 1; 
    }  _has;
}

@property (nonatomic) int errorCodes;
@property (nonatomic) bool hasErrorCodes;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteErrorCodes;
- (id)dictionaryRepresentation;
- (int)errorCodes;
- (bool)hasErrorCodes;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setErrorCodes:(int)arg1;
- (void)setHasErrorCodes:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
