
@interface CPLFaceAnalysis : PBCodable <NSCopying> {
    bool  _completed;
    NSMutableArray * _faceInstances;
    struct { 
        unsigned int completed : 1; 
    }  _has;
    NSMutableArray * _petFaceInstances;
    NSMutableArray * _torsoFaceInstances;
}

@property (nonatomic) bool completed;
@property (nonatomic, retain) NSMutableArray *faceInstances;
@property (nonatomic) bool hasCompleted;
@property (nonatomic, retain) NSMutableArray *petFaceInstances;
@property (nonatomic, retain) NSMutableArray *torsoFaceInstances;

+ (Class)faceInstancesType;
+ (Class)petFaceInstancesType;
+ (Class)torsoFaceInstancesType;

- (void).cxx_destruct;
- (void)addFaceInstances:(id)arg1;
- (void)addPetFaceInstances:(id)arg1;
- (void)addTorsoFaceInstances:(id)arg1;
- (void)clearFaceInstances;
- (void)clearPetFaceInstances;
- (void)clearTorsoFaceInstances;
- (bool)completed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)faceInstances;
- (id)faceInstancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceInstancesCount;
- (bool)hasCompleted;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)petFaceInstances;
- (id)petFaceInstancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)petFaceInstancesCount;
- (bool)readFrom:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setFaceInstances:(id)arg1;
- (void)setHasCompleted:(bool)arg1;
- (void)setPetFaceInstances:(id)arg1;
- (void)setTorsoFaceInstances:(id)arg1;
- (id)torsoFaceInstances;
- (id)torsoFaceInstancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)torsoFaceInstancesCount;
- (void)writeTo:(id)arg1;

@end
