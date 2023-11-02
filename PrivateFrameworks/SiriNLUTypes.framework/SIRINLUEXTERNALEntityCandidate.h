
@interface SIRINLUEXTERNALEntityCandidate : PBCodable <NSCopying> {
    NSMutableArray * _annotations;
    SIRICOMMONStringValue * _appBundleId;
    SIRINLUEXTERNALUsoGraph * _entity;
    SIRICOMMONStringValue * _entityId;
    SIRINLUEXTERNALRRGroupIdentifier * _groupId;
    SIRINLUEXTERNALRRMetadata * _metadata;
    SIRICOMMONDoubleValue * _score;
}

@property (nonatomic, retain) NSMutableArray *annotations;
@property (nonatomic, retain) SIRICOMMONStringValue *appBundleId;
@property (nonatomic, retain) SIRINLUEXTERNALUsoGraph *entity;
@property (nonatomic, retain) SIRICOMMONStringValue *entityId;
@property (nonatomic, retain) SIRINLUEXTERNALRRGroupIdentifier *groupId;
@property (nonatomic, readonly) bool hasAppBundleId;
@property (nonatomic, readonly) bool hasEntity;
@property (nonatomic, readonly) bool hasEntityId;
@property (nonatomic, readonly) bool hasGroupId;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, readonly) bool hasScore;
@property (nonatomic, retain) SIRINLUEXTERNALRRMetadata *metadata;
@property (nonatomic, retain) SIRICOMMONDoubleValue *score;

+ (Class)annotationsType;

- (void).cxx_destruct;
- (void)addAnnotations:(id)arg1;
- (id)annotations;
- (id)annotationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)annotationsCount;
- (id)appBundleId;
- (void)clearAnnotations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entity;
- (id)entityId;
- (id)groupId;
- (bool)hasAppBundleId;
- (bool)hasEntity;
- (bool)hasEntityId;
- (bool)hasGroupId;
- (bool)hasMetadata;
- (bool)hasScore;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (id)score;
- (void)setAnnotations:(id)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setEntityId:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setScore:(id)arg1;
- (void)writeTo:(id)arg1;

@end
