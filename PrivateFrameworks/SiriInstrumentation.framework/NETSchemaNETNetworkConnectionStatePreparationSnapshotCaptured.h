
@interface NETSchemaNETNetworkConnectionStatePreparationSnapshotCaptured : SISchemaInstrumentationMessage {
    struct { 
        unsigned int hasDNS : 1; 
    }  _has;
    bool  _hasDNS;
}

@property (nonatomic) bool hasDNS;
@property (nonatomic) bool hasHasDNS;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteHasDNS;
- (id)dictionaryRepresentation;
- (bool)hasDNS;
- (bool)hasHasDNS;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasDNS:(bool)arg1;
- (void)setHasHasDNS:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
