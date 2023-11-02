
@interface BMPBSiriQueryEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSString * _contentProtection;
    struct { 
        unsigned int absoluteTimestamp : 1; 
    }  _has;
    NSString * _personaId;
    NSString * _query;
    NSMutableArray * _results;
    NSString * _uniqueId;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSString *contentProtection;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasContentProtection;
@property (nonatomic, readonly) bool hasPersonaId;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic, readonly) bool hasUniqueId;
@property (nonatomic, retain) NSString *personaId;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, retain) NSMutableArray *results;
@property (nonatomic, retain) NSString *uniqueId;

+ (Class)resultsType;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (id)contentProtection;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsoluteTimestamp;
- (bool)hasContentProtection;
- (bool)hasPersonaId;
- (bool)hasQuery;
- (bool)hasUniqueId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)personaId;
- (id)query;
- (bool)readFrom:(id)arg1;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setContentProtection:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setPersonaId:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (id)uniqueId;
- (void)writeTo:(id)arg1;

@end
