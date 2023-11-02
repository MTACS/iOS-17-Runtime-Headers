
@interface PPM2EngagementRatio : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    int  _domain;
    unsigned int  _engagedCount;
    unsigned int  _evaluatedCount;
    struct { 
        unsigned int domain : 1; 
        unsigned int engagedCount : 1; 
        unsigned int evaluatedCount : 1; 
        unsigned int k : 1; 
        unsigned int offeredCount : 1; 
        unsigned int rejectedCount : 1; 
    }  _has;
    unsigned int  _k;
    NSString * _mappingId;
    unsigned int  _offeredCount;
    unsigned int  _rejectedCount;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic) int domain;
@property (nonatomic) unsigned int engagedCount;
@property (nonatomic) unsigned int evaluatedCount;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic) bool hasDomain;
@property (nonatomic) bool hasEngagedCount;
@property (nonatomic) bool hasEvaluatedCount;
@property (nonatomic) bool hasK;
@property (nonatomic, readonly) bool hasMappingId;
@property (nonatomic) bool hasOfferedCount;
@property (nonatomic) bool hasRejectedCount;
@property (nonatomic) unsigned int k;
@property (nonatomic, retain) NSString *mappingId;
@property (nonatomic) unsigned int offeredCount;
@property (nonatomic) unsigned int rejectedCount;

- (void).cxx_destruct;
- (int)StringAsDomain:(id)arg1;
- (id)activeTreatments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)domain;
- (id)domainAsString:(int)arg1;
- (unsigned int)engagedCount;
- (unsigned int)evaluatedCount;
- (bool)hasActiveTreatments;
- (bool)hasDomain;
- (bool)hasEngagedCount;
- (bool)hasEvaluatedCount;
- (bool)hasK;
- (bool)hasMappingId;
- (bool)hasOfferedCount;
- (bool)hasRejectedCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)k;
- (id)mappingId;
- (void)mergeFrom:(id)arg1;
- (unsigned int)offeredCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)rejectedCount;
- (void)setActiveTreatments:(id)arg1;
- (void)setDomain:(int)arg1;
- (void)setEngagedCount:(unsigned int)arg1;
- (void)setEvaluatedCount:(unsigned int)arg1;
- (void)setHasDomain:(bool)arg1;
- (void)setHasEngagedCount:(bool)arg1;
- (void)setHasEvaluatedCount:(bool)arg1;
- (void)setHasK:(bool)arg1;
- (void)setHasOfferedCount:(bool)arg1;
- (void)setHasRejectedCount:(bool)arg1;
- (void)setK:(unsigned int)arg1;
- (void)setMappingId:(id)arg1;
- (void)setOfferedCount:(unsigned int)arg1;
- (void)setRejectedCount:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
