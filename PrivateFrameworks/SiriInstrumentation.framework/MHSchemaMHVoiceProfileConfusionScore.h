
@interface MHSchemaMHVoiceProfileConfusionScore : SISchemaInstrumentationMessage {
    struct { 
        unsigned int similarityScore : 1; 
    }  _has;
    bool  _hasHomeMemberUserId;
    NSString * _homeMemberUserId;
    unsigned int  _similarityScore;
}

@property (nonatomic) bool hasHomeMemberUserId;
@property (nonatomic) bool hasSimilarityScore;
@property (nonatomic, copy) NSString *homeMemberUserId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int similarityScore;

- (void).cxx_destruct;
- (void)deleteHomeMemberUserId;
- (void)deleteSimilarityScore;
- (id)dictionaryRepresentation;
- (bool)hasHomeMemberUserId;
- (bool)hasSimilarityScore;
- (unsigned long long)hash;
- (id)homeMemberUserId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasHomeMemberUserId:(bool)arg1;
- (void)setHasSimilarityScore:(bool)arg1;
- (void)setHomeMemberUserId:(id)arg1;
- (void)setSimilarityScore:(unsigned int)arg1;
- (unsigned int)similarityScore;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
