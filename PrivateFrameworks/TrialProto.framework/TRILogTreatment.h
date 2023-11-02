
@interface TRILogTreatment : PBCodable <NSCopying> {
    unsigned int  _deploymentId;
    NSString * _experimentId;
    struct { 
        unsigned int deploymentId : 1; 
    }  _has;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _namespaceIds;
    NSMutableArray * _namespaceNames;
    NSMutableArray * _namespaces;
    NSString * _treatmentId;
}

@property (nonatomic) unsigned int deploymentId;
@property (nonatomic, retain) NSString *experimentId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic, readonly) bool hasExperimentId;
@property (nonatomic, readonly) bool hasTreatmentId;
@property (nonatomic, readonly) unsigned int*namespaceIds;
@property (nonatomic, readonly) unsigned long long namespaceIdsCount;
@property (nonatomic, retain) NSMutableArray *namespaceNames;
@property (nonatomic, retain) NSMutableArray *namespaces;
@property (nonatomic, retain) NSString *treatmentId;

+ (Class)namespaceNameType;
+ (Class)namespaceType;

- (void).cxx_destruct;
- (void)addNamespace:(id)arg1;
- (void)addNamespaceId:(unsigned int)arg1;
- (void)addNamespaceName:(id)arg1;
- (void)clearNamespaceIds;
- (void)clearNamespaceNames;
- (void)clearNamespaces;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)deploymentId;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentId;
- (bool)hasDeploymentId;
- (bool)hasExperimentId;
- (bool)hasTreatmentId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)namespaceAtIndex:(unsigned long long)arg1;
- (unsigned int)namespaceIdAtIndex:(unsigned long long)arg1;
- (unsigned int*)namespaceIds;
- (unsigned long long)namespaceIdsCount;
- (id)namespaceNameAtIndex:(unsigned long long)arg1;
- (id)namespaceNames;
- (unsigned long long)namespaceNamesCount;
- (id)namespaces;
- (unsigned long long)namespacesCount;
- (bool)readFrom:(id)arg1;
- (void)setDeploymentId:(unsigned int)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setHasDeploymentId:(bool)arg1;
- (void)setNamespaceIds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setNamespaceNames:(id)arg1;
- (void)setNamespaces:(id)arg1;
- (void)setTreatmentId:(id)arg1;
- (id)treatmentId;
- (void)writeTo:(id)arg1;

@end
