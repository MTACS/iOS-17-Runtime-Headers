
@interface NLXSchemaSSUUserRequestMatchInfo : SISchemaInstrumentationMessage {
    struct { 
        unsigned int matchingUtteranceCandidateType : 1; 
        unsigned int numEntities : 1; 
    }  _has;
    int  _matchingUtteranceCandidateType;
    unsigned int  _numEntities;
}

@property (nonatomic) bool hasMatchingUtteranceCandidateType;
@property (nonatomic) bool hasNumEntities;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int matchingUtteranceCandidateType;
@property (nonatomic) unsigned int numEntities;

- (void)deleteMatchingUtteranceCandidateType;
- (void)deleteNumEntities;
- (id)dictionaryRepresentation;
- (bool)hasMatchingUtteranceCandidateType;
- (bool)hasNumEntities;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)matchingUtteranceCandidateType;
- (unsigned int)numEntities;
- (bool)readFrom:(id)arg1;
- (void)setHasMatchingUtteranceCandidateType:(bool)arg1;
- (void)setHasNumEntities:(bool)arg1;
- (void)setMatchingUtteranceCandidateType:(int)arg1;
- (void)setNumEntities:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
