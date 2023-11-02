
@interface DODMLASRSchemaDODMLASRAlignmentInfo : SISchemaInstrumentationMessage {
    unsigned int  _editDistance;
    struct { 
        unsigned int numDeletions : 1; 
        unsigned int numInsertions : 1; 
        unsigned int numSubstitutions : 1; 
        unsigned int editDistance : 1; 
        unsigned int referenceSize : 1; 
    }  _has;
    bool  _hasReferenceName;
    unsigned int  _numDeletions;
    unsigned int  _numInsertions;
    unsigned int  _numSubstitutions;
    NSString * _referenceName;
    unsigned int  _referenceSize;
}

@property (nonatomic) unsigned int editDistance;
@property (nonatomic) bool hasEditDistance;
@property (nonatomic) bool hasNumDeletions;
@property (nonatomic) bool hasNumInsertions;
@property (nonatomic) bool hasNumSubstitutions;
@property (nonatomic) bool hasReferenceName;
@property (nonatomic) bool hasReferenceSize;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numDeletions;
@property (nonatomic) unsigned int numInsertions;
@property (nonatomic) unsigned int numSubstitutions;
@property (nonatomic, copy) NSString *referenceName;
@property (nonatomic) unsigned int referenceSize;

- (void).cxx_destruct;
- (void)deleteEditDistance;
- (void)deleteNumDeletions;
- (void)deleteNumInsertions;
- (void)deleteNumSubstitutions;
- (void)deleteReferenceName;
- (void)deleteReferenceSize;
- (id)dictionaryRepresentation;
- (unsigned int)editDistance;
- (bool)hasEditDistance;
- (bool)hasNumDeletions;
- (bool)hasNumInsertions;
- (bool)hasNumSubstitutions;
- (bool)hasReferenceName;
- (bool)hasReferenceSize;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numDeletions;
- (unsigned int)numInsertions;
- (unsigned int)numSubstitutions;
- (bool)readFrom:(id)arg1;
- (id)referenceName;
- (unsigned int)referenceSize;
- (void)setEditDistance:(unsigned int)arg1;
- (void)setHasEditDistance:(bool)arg1;
- (void)setHasNumDeletions:(bool)arg1;
- (void)setHasNumInsertions:(bool)arg1;
- (void)setHasNumSubstitutions:(bool)arg1;
- (void)setHasReferenceName:(bool)arg1;
- (void)setHasReferenceSize:(bool)arg1;
- (void)setNumDeletions:(unsigned int)arg1;
- (void)setNumInsertions:(unsigned int)arg1;
- (void)setNumSubstitutions:(unsigned int)arg1;
- (void)setReferenceName:(id)arg1;
- (void)setReferenceSize:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
