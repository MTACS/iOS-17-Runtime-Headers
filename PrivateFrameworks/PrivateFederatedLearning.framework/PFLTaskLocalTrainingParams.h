
@interface PFLTaskLocalTrainingParams : PBCodable <NSCopying> {
    long long  _epochs;
    struct { 
        unsigned int epochs : 1; 
        unsigned int learningRate : 1; 
        unsigned int validationSplit : 1; 
    }  _has;
    double  _learningRate;
    NSMutableArray * _orderedTrainableLayers;
    double  _validationSplit;
}

@property (nonatomic) long long epochs;
@property (nonatomic) bool hasEpochs;
@property (nonatomic) bool hasLearningRate;
@property (nonatomic) bool hasValidationSplit;
@property (nonatomic) double learningRate;
@property (nonatomic, retain) NSMutableArray *orderedTrainableLayers;
@property (nonatomic) double validationSplit;

+ (Class)orderedTrainableLayersType;

- (void).cxx_destruct;
- (void)addOrderedTrainableLayers:(id)arg1;
- (void)clearOrderedTrainableLayers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)epochs;
- (bool)hasEpochs;
- (bool)hasLearningRate;
- (bool)hasValidationSplit;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)learningRate;
- (void)mergeFrom:(id)arg1;
- (id)orderedTrainableLayers;
- (id)orderedTrainableLayersAtIndex:(unsigned long long)arg1;
- (unsigned long long)orderedTrainableLayersCount;
- (bool)readFrom:(id)arg1;
- (void)setEpochs:(long long)arg1;
- (void)setHasEpochs:(bool)arg1;
- (void)setHasLearningRate:(bool)arg1;
- (void)setHasValidationSplit:(bool)arg1;
- (void)setLearningRate:(double)arg1;
- (void)setOrderedTrainableLayers:(id)arg1;
- (void)setValidationSplit:(double)arg1;
- (double)validationSplit;
- (void)writeTo:(id)arg1;

@end
