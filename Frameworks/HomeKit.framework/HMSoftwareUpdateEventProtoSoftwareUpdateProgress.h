
@interface HMSoftwareUpdateEventProtoSoftwareUpdateProgress : PBCodable <NSCopying> {
    double  _estimatedTimeRemaining;
    struct { 
        unsigned int estimatedTimeRemaining : 1; 
        unsigned int percentageComplete : 1; 
    }  _has;
    float  _percentageComplete;
}

@property (nonatomic) double estimatedTimeRemaining;
@property (nonatomic) bool hasEstimatedTimeRemaining;
@property (nonatomic) bool hasPercentageComplete;
@property (nonatomic) float percentageComplete;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)estimatedTimeRemaining;
- (bool)hasEstimatedTimeRemaining;
- (bool)hasPercentageComplete;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)percentageComplete;
- (bool)readFrom:(id)arg1;
- (void)setEstimatedTimeRemaining:(double)arg1;
- (void)setHasEstimatedTimeRemaining:(bool)arg1;
- (void)setHasPercentageComplete:(bool)arg1;
- (void)setPercentageComplete:(float)arg1;
- (void)writeTo:(id)arg1;

@end
