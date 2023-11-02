
@interface SIRINLUEXTERNALSystemInformed : PBCodable <NSCopying> {
    NSMutableArray * _entities;
    SIRINLUEXTERNALUUID * _taskId;
}

@property (nonatomic, retain) NSMutableArray *entities;
@property (nonatomic, readonly) bool hasTaskId;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *taskId;

+ (Class)entitiesType;

- (void).cxx_destruct;
- (void)addEntities:(id)arg1;
- (void)clearEntities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entities;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (bool)hasTaskId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)setTaskId:(id)arg1;
- (id)taskId;
- (void)writeTo:(id)arg1;

@end
