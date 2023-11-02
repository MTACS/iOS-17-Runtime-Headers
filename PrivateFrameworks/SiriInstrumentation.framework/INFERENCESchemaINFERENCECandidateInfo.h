
@interface INFERENCESchemaINFERENCECandidateInfo : SISchemaInstrumentationMessage {
    NSString * _anonymizedEntityIdentifier;
    int  _candidateType;
    struct { 
        unsigned int searchProvider : 1; 
        unsigned int rank : 1; 
        unsigned int score : 1; 
        unsigned int isShownToUser : 1; 
        unsigned int candidateType : 1; 
    }  _has;
    bool  _hasAnonymizedEntityIdentifier;
    bool  _isShownToUser;
    unsigned int  _rank;
    float  _score;
    int  _searchProvider;
}

@property (nonatomic, copy) NSString *anonymizedEntityIdentifier;
@property (nonatomic) int candidateType;
@property (nonatomic) bool hasAnonymizedEntityIdentifier;
@property (nonatomic) bool hasCandidateType;
@property (nonatomic) bool hasIsShownToUser;
@property (nonatomic) bool hasRank;
@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasSearchProvider;
@property (nonatomic) bool isShownToUser;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int rank;
@property (nonatomic) float score;
@property (nonatomic) int searchProvider;

- (void).cxx_destruct;
- (id)anonymizedEntityIdentifier;
- (int)candidateType;
- (void)deleteAnonymizedEntityIdentifier;
- (void)deleteCandidateType;
- (void)deleteIsShownToUser;
- (void)deleteRank;
- (void)deleteScore;
- (void)deleteSearchProvider;
- (id)dictionaryRepresentation;
- (bool)hasAnonymizedEntityIdentifier;
- (bool)hasCandidateType;
- (bool)hasIsShownToUser;
- (bool)hasRank;
- (bool)hasScore;
- (bool)hasSearchProvider;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isShownToUser;
- (id)jsonData;
- (unsigned int)rank;
- (bool)readFrom:(id)arg1;
- (float)score;
- (int)searchProvider;
- (void)setAnonymizedEntityIdentifier:(id)arg1;
- (void)setCandidateType:(int)arg1;
- (void)setHasAnonymizedEntityIdentifier:(bool)arg1;
- (void)setHasCandidateType:(bool)arg1;
- (void)setHasIsShownToUser:(bool)arg1;
- (void)setHasRank:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasSearchProvider:(bool)arg1;
- (void)setIsShownToUser:(bool)arg1;
- (void)setRank:(unsigned int)arg1;
- (void)setScore:(float)arg1;
- (void)setSearchProvider:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
