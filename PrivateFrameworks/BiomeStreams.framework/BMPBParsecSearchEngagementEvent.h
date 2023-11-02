
@interface BMPBParsecSearchEngagementEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSString * _completedQuery;
    NSString * _contentProtection;
    NSString * _domainId;
    NSMutableArray * _entities;
    struct { 
        unsigned int absoluteTimestamp : 1; 
    }  _has;
    NSString * _personaId;
    NSString * _resultId;
    NSString * _uniqueId;
    NSString * _userInput;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSString *completedQuery;
@property (nonatomic, retain) NSString *contentProtection;
@property (nonatomic, retain) NSString *domainId;
@property (nonatomic, retain) NSMutableArray *entities;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasCompletedQuery;
@property (nonatomic, readonly) bool hasContentProtection;
@property (nonatomic, readonly) bool hasDomainId;
@property (nonatomic, readonly) bool hasPersonaId;
@property (nonatomic, readonly) bool hasResultId;
@property (nonatomic, readonly) bool hasUniqueId;
@property (nonatomic, readonly) bool hasUserInput;
@property (nonatomic, retain) NSString *personaId;
@property (nonatomic, retain) NSString *resultId;
@property (nonatomic, retain) NSString *uniqueId;
@property (nonatomic, retain) NSString *userInput;

+ (Class)entitiesType;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (void)addEntities:(id)arg1;
- (void)clearEntities;
- (id)completedQuery;
- (id)contentProtection;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domainId;
- (id)entities;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (bool)hasAbsoluteTimestamp;
- (bool)hasCompletedQuery;
- (bool)hasContentProtection;
- (bool)hasDomainId;
- (bool)hasPersonaId;
- (bool)hasResultId;
- (bool)hasUniqueId;
- (bool)hasUserInput;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)personaId;
- (bool)readFrom:(id)arg1;
- (id)resultId;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setCompletedQuery:(id)arg1;
- (void)setContentProtection:(id)arg1;
- (void)setDomainId:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setPersonaId:(id)arg1;
- (void)setResultId:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (void)setUserInput:(id)arg1;
- (id)uniqueId;
- (id)userInput;
- (void)writeTo:(id)arg1;

@end
