
@interface SIRINLUINTERNALSNLP_INTERMEDIATELinearizedTensor : PBCodable <NSCopying> {
    NSMutableArray * _features;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _numericalizedFeatures;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _shapes;
}

@property (nonatomic, retain) NSMutableArray *features;
@property (nonatomic, readonly) unsigned int*numericalizedFeatures;
@property (nonatomic, readonly) unsigned long long numericalizedFeaturesCount;
@property (nonatomic, readonly) unsigned int*shapes;
@property (nonatomic, readonly) unsigned long long shapesCount;

+ (Class)featureType;

- (void).cxx_destruct;
- (void)addFeature:(id)arg1;
- (void)addNumericalizedFeature:(unsigned int)arg1;
- (void)addShape:(unsigned int)arg1;
- (void)clearFeatures;
- (void)clearNumericalizedFeatures;
- (void)clearShapes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureAtIndex:(unsigned long long)arg1;
- (id)features;
- (unsigned long long)featuresCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numericalizedFeatureAtIndex:(unsigned long long)arg1;
- (unsigned int*)numericalizedFeatures;
- (unsigned long long)numericalizedFeaturesCount;
- (bool)readFrom:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setNumericalizedFeatures:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setShapes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int)shapeAtIndex:(unsigned long long)arg1;
- (unsigned int*)shapes;
- (unsigned long long)shapesCount;
- (void)writeTo:(id)arg1;

@end
