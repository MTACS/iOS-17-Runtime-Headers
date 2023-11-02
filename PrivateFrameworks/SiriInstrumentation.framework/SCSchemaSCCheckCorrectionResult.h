
@interface SCSchemaSCCheckCorrectionResult : SISchemaInstrumentationMessage {
    NSString * _correctedAttribute;
    int  _correctionType;
    struct { 
        unsigned int correctionType : 1; 
    }  _has;
    bool  _hasCorrectedAttribute;
    NSArray * _incomingEntities;
    NSArray * _referredEntities;
}

@property (nonatomic, copy) NSString *correctedAttribute;
@property (nonatomic) int correctionType;
@property (nonatomic) bool hasCorrectedAttribute;
@property (nonatomic) bool hasCorrectionType;
@property (nonatomic, copy) NSArray *incomingEntities;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *referredEntities;

- (void).cxx_destruct;
- (void)addIncomingEntities:(id)arg1;
- (void)addReferredEntities:(id)arg1;
- (void)clearIncomingEntities;
- (void)clearReferredEntities;
- (id)correctedAttribute;
- (int)correctionType;
- (void)deleteCorrectedAttribute;
- (void)deleteCorrectionType;
- (void)deleteIncomingEntities;
- (void)deleteReferredEntities;
- (id)dictionaryRepresentation;
- (bool)hasCorrectedAttribute;
- (bool)hasCorrectionType;
- (unsigned long long)hash;
- (id)incomingEntities;
- (id)incomingEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incomingEntitiesCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)referredEntities;
- (id)referredEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)referredEntitiesCount;
- (void)setCorrectedAttribute:(id)arg1;
- (void)setCorrectionType:(int)arg1;
- (void)setHasCorrectedAttribute:(bool)arg1;
- (void)setHasCorrectionType:(bool)arg1;
- (void)setIncomingEntities:(id)arg1;
- (void)setReferredEntities:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
