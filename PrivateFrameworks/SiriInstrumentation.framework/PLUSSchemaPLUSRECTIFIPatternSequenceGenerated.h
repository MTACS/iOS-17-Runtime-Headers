
@interface PLUSSchemaPLUSRECTIFIPatternSequenceGenerated : SISchemaInstrumentationMessage {
    NSArray * _constraints;
    struct { 
        unsigned int numberOfRequestsReviewed : 1; 
        unsigned int numberOfUniqueRequestsReviewed : 1; 
    }  _has;
    bool  _hasOriginalRequestId;
    bool  _hasPatternId;
    unsigned int  _numberOfRequestsReviewed;
    unsigned int  _numberOfUniqueRequestsReviewed;
    SISchemaUUID * _originalRequestId;
    SISchemaUUID * _patternId;
    NSArray * _sequences;
}

@property (nonatomic, copy) NSArray *constraints;
@property (nonatomic) bool hasNumberOfRequestsReviewed;
@property (nonatomic) bool hasNumberOfUniqueRequestsReviewed;
@property (nonatomic) bool hasOriginalRequestId;
@property (nonatomic) bool hasPatternId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numberOfRequestsReviewed;
@property (nonatomic) unsigned int numberOfUniqueRequestsReviewed;
@property (nonatomic, retain) SISchemaUUID *originalRequestId;
@property (nonatomic, retain) SISchemaUUID *patternId;
@property (nonatomic, copy) NSArray *sequences;

- (void).cxx_destruct;
- (void)addConstraints:(id)arg1;
- (void)addSequence:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearConstraints;
- (void)clearSequence;
- (id)constraints;
- (id)constraintsAtIndex:(unsigned long long)arg1;
- (unsigned long long)constraintsCount;
- (void)deleteConstraints;
- (void)deleteNumberOfRequestsReviewed;
- (void)deleteNumberOfUniqueRequestsReviewed;
- (void)deleteOriginalRequestId;
- (void)deletePatternId;
- (void)deleteSequence;
- (id)dictionaryRepresentation;
- (bool)hasNumberOfRequestsReviewed;
- (bool)hasNumberOfUniqueRequestsReviewed;
- (bool)hasOriginalRequestId;
- (bool)hasPatternId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numberOfRequestsReviewed;
- (unsigned int)numberOfUniqueRequestsReviewed;
- (id)originalRequestId;
- (id)patternId;
- (bool)readFrom:(id)arg1;
- (id)sequenceAtIndex:(unsigned long long)arg1;
- (unsigned long long)sequenceCount;
- (id)sequences;
- (void)setConstraints:(id)arg1;
- (void)setHasNumberOfRequestsReviewed:(bool)arg1;
- (void)setHasNumberOfUniqueRequestsReviewed:(bool)arg1;
- (void)setHasOriginalRequestId:(bool)arg1;
- (void)setHasPatternId:(bool)arg1;
- (void)setNumberOfRequestsReviewed:(unsigned int)arg1;
- (void)setNumberOfUniqueRequestsReviewed:(unsigned int)arg1;
- (void)setOriginalRequestId:(id)arg1;
- (void)setPatternId:(id)arg1;
- (void)setSequences:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
