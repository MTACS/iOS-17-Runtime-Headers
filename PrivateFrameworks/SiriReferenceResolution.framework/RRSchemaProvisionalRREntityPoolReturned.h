
@interface RRSchemaProvisionalRREntityPoolReturned : SISchemaInstrumentationMessage {
    NSArray * _candidateEntities;
    unsigned int  _entityCount;
    struct { 
        unsigned int entityCount : 1; 
    }  _has;
}

@property (nonatomic, copy) NSArray *candidateEntities;
@property (nonatomic) unsigned int entityCount;
@property (nonatomic) bool hasEntityCount;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addCandidateEntities:(id)arg1;
- (id)candidateEntities;
- (id)candidateEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)candidateEntitiesCount;
- (void)clearCandidateEntities;
- (id)dictionaryRepresentation;
- (unsigned int)entityCount;
- (bool)hasEntityCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCandidateEntities:(id)arg1;
- (void)setEntityCount:(unsigned int)arg1;
- (void)setHasEntityCount:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
