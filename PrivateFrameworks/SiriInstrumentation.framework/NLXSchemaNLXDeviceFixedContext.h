
@interface NLXSchemaNLXDeviceFixedContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isTestEvent : 1; 
    }  _has;
    bool  _isTestEvent;
}

@property (nonatomic) bool hasIsTestEvent;
@property (nonatomic) bool isTestEvent;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsTestEvent;
- (id)dictionaryRepresentation;
- (bool)hasIsTestEvent;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTestEvent;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsTestEvent:(bool)arg1;
- (void)setIsTestEvent:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
