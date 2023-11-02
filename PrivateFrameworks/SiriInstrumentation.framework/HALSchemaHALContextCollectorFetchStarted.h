
@interface HALSchemaHALContextCollectorFetchStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isContextCollectorLocal : 1; 
    }  _has;
    bool  _isContextCollectorLocal;
}

@property (nonatomic) bool hasIsContextCollectorLocal;
@property (nonatomic) bool isContextCollectorLocal;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsContextCollectorLocal;
- (id)dictionaryRepresentation;
- (bool)hasIsContextCollectorLocal;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isContextCollectorLocal;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsContextCollectorLocal:(bool)arg1;
- (void)setIsContextCollectorLocal:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
