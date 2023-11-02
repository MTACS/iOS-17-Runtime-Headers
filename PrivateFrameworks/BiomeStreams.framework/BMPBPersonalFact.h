
@interface BMPBPersonalFact : PBCodable <NSCopying> {
    NSString * _objectAlias;
    NSString * _objectId;
    NSString * _predicateId;
    NSString * _subjectAlias;
    NSString * _subjectId;
    NSMutableArray * _subjectIsas;
}

@property (nonatomic, readonly) bool hasObjectAlias;
@property (nonatomic, readonly) bool hasObjectId;
@property (nonatomic, readonly) bool hasPredicateId;
@property (nonatomic, readonly) bool hasSubjectAlias;
@property (nonatomic, readonly) bool hasSubjectId;
@property (nonatomic, retain) NSString *objectAlias;
@property (nonatomic, retain) NSString *objectId;
@property (nonatomic, retain) NSString *predicateId;
@property (nonatomic, retain) NSString *subjectAlias;
@property (nonatomic, retain) NSString *subjectId;
@property (nonatomic, retain) NSMutableArray *subjectIsas;

+ (Class)subjectIsaType;

- (void).cxx_destruct;
- (void)addSubjectIsa:(id)arg1;
- (void)clearSubjectIsas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasObjectAlias;
- (bool)hasObjectId;
- (bool)hasPredicateId;
- (bool)hasSubjectAlias;
- (bool)hasSubjectId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectAlias;
- (id)objectId;
- (id)predicateId;
- (bool)readFrom:(id)arg1;
- (void)setObjectAlias:(id)arg1;
- (void)setObjectId:(id)arg1;
- (void)setPredicateId:(id)arg1;
- (void)setSubjectAlias:(id)arg1;
- (void)setSubjectId:(id)arg1;
- (void)setSubjectIsas:(id)arg1;
- (id)subjectAlias;
- (id)subjectId;
- (id)subjectIsaAtIndex:(unsigned long long)arg1;
- (id)subjectIsas;
- (unsigned long long)subjectIsasCount;
- (void)writeTo:(id)arg1;

@end
