
@interface INFERENCESchemaINFERENCEResolutionRequestStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int slotType : 1; 
    }  _has;
    bool  _hasResolverConfig;
    INFERENCESchemaINFERENCEResolverConfig * _resolverConfig;
    int  _slotType;
}

@property (nonatomic) bool hasResolverConfig;
@property (nonatomic) bool hasSlotType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) INFERENCESchemaINFERENCEResolverConfig *resolverConfig;
@property (nonatomic) int slotType;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteResolverConfig;
- (void)deleteSlotType;
- (id)dictionaryRepresentation;
- (bool)hasResolverConfig;
- (bool)hasSlotType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resolverConfig;
- (void)setHasResolverConfig:(bool)arg1;
- (void)setHasSlotType:(bool)arg1;
- (void)setResolverConfig:(id)arg1;
- (void)setSlotType:(int)arg1;
- (int)slotType;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
