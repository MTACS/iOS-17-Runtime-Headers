
@interface CAARSchemaCAARTieBreaker : SISchemaInstrumentationMessage {
    NSArray * _actionCandidateBoosts;
    struct { 
        unsigned int isTieBreakerSupported : 1; 
        unsigned int wasTieBreakerForcedSkipped : 1; 
    }  _has;
    bool  _hasTieBreakerName;
    bool  _isTieBreakerSupported;
    NSString * _tieBreakerName;
    bool  _wasTieBreakerForcedSkipped;
}

@property (nonatomic, copy) NSArray *actionCandidateBoosts;
@property (nonatomic) bool hasIsTieBreakerSupported;
@property (nonatomic) bool hasTieBreakerName;
@property (nonatomic) bool hasWasTieBreakerForcedSkipped;
@property (nonatomic) bool isTieBreakerSupported;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *tieBreakerName;
@property (nonatomic) bool wasTieBreakerForcedSkipped;

- (void).cxx_destruct;
- (id)actionCandidateBoosts;
- (id)actionCandidateBoostsAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionCandidateBoostsCount;
- (void)addActionCandidateBoosts:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearActionCandidateBoosts;
- (void)deleteActionCandidateBoosts;
- (void)deleteIsTieBreakerSupported;
- (void)deleteTieBreakerName;
- (void)deleteWasTieBreakerForcedSkipped;
- (id)dictionaryRepresentation;
- (bool)hasIsTieBreakerSupported;
- (bool)hasTieBreakerName;
- (bool)hasWasTieBreakerForcedSkipped;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTieBreakerSupported;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setActionCandidateBoosts:(id)arg1;
- (void)setHasIsTieBreakerSupported:(bool)arg1;
- (void)setHasTieBreakerName:(bool)arg1;
- (void)setHasWasTieBreakerForcedSkipped:(bool)arg1;
- (void)setIsTieBreakerSupported:(bool)arg1;
- (void)setTieBreakerName:(id)arg1;
- (void)setWasTieBreakerForcedSkipped:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (id)tieBreakerName;
- (bool)wasTieBreakerForcedSkipped;
- (void)writeTo:(id)arg1;

@end
