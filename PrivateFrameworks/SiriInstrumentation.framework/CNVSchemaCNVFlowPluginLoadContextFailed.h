
@interface CNVSchemaCNVFlowPluginLoadContextFailed : SISchemaInstrumentationMessage {
    unsigned int  _errorCode;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int hasPluginCached : 1; 
    }  _has;
    bool  _hasPluginCached;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasHasPluginCached;
@property (nonatomic) bool hasPluginCached;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteErrorCode;
- (void)deleteHasPluginCached;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (bool)hasErrorCode;
- (bool)hasHasPluginCached;
- (bool)hasPluginCached;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasHasPluginCached:(bool)arg1;
- (void)setHasPluginCached:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
