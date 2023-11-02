
@interface SGMIMetricsMissingElementPrediction : PBCodable <NSCopying> {
    bool  _foundMatchingElement;
    struct { 
        unsigned int predictedMissingElementScore : 1; 
        unsigned int foundMatchingElement : 1; 
    }  _has;
    float  _predictedMissingElementScore;
}

@property (nonatomic) bool foundMatchingElement;
@property (nonatomic) bool hasFoundMatchingElement;
@property (nonatomic) bool hasPredictedMissingElementScore;
@property (nonatomic) float predictedMissingElementScore;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)foundMatchingElement;
- (bool)hasFoundMatchingElement;
- (bool)hasPredictedMissingElementScore;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)predictedMissingElementScore;
- (bool)readFrom:(id)arg1;
- (void)setFoundMatchingElement:(bool)arg1;
- (void)setHasFoundMatchingElement:(bool)arg1;
- (void)setHasPredictedMissingElementScore:(bool)arg1;
- (void)setPredictedMissingElementScore:(float)arg1;
- (void)writeTo:(id)arg1;

@end
