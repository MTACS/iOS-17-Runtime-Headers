
@interface ODCurareReportFillerModelHyperparameters : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _hyperparameterIndices;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _hyperparameterValues;
    unsigned int  _versionNumber;
}

@property (nonatomic, readonly) unsigned int*hyperparameterIndices;
@property (nonatomic, readonly) unsigned long long hyperparameterIndicesCount;
@property (nonatomic, readonly) float*hyperparameterValues;
@property (nonatomic, readonly) unsigned long long hyperparameterValuesCount;
@property (nonatomic) unsigned int versionNumber;

- (void)addHyperparameterIndices:(unsigned int)arg1;
- (void)addHyperparameterValues:(float)arg1;
- (void)clearHyperparameterIndices;
- (void)clearHyperparameterValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (unsigned int*)hyperparameterIndices;
- (unsigned int)hyperparameterIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)hyperparameterIndicesCount;
- (float*)hyperparameterValues;
- (float)hyperparameterValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)hyperparameterValuesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHyperparameterIndices:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHyperparameterValues:(float*)arg1 count:(unsigned long long)arg2;
- (void)setVersionNumber:(unsigned int)arg1;
- (unsigned int)versionNumber;
- (void)writeTo:(id)arg1;

@end
