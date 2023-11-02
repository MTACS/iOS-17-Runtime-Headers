
@interface HKCodableLocationCoordinateSeries : PBCodable <NSCopying> {
    NSMutableArray * _coordinates;
    struct { 
        unsigned int resumeDate : 1; 
    }  _has;
    double  _resumeDate;
}

@property (nonatomic, retain) NSMutableArray *coordinates;
@property (nonatomic) bool hasResumeDate;
@property (nonatomic) double resumeDate;

+ (Class)coordinatesType;

- (void).cxx_destruct;
- (void)addCoordinates:(id)arg1;
- (void)clearCoordinates;
- (id)coordinates;
- (id)coordinatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)coordinatesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResumeDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)resumeDate;
- (void)setCoordinates:(id)arg1;
- (void)setHasResumeDate:(bool)arg1;
- (void)setResumeDate:(double)arg1;
- (void)writeTo:(id)arg1;

@end
