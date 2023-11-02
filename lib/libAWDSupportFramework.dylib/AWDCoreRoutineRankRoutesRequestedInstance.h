
@interface AWDCoreRoutineRankRoutesRequestedInstance : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int highestRankedRouteScore : 1; 
        unsigned int numberOfInputRoutes : 1; 
    }  _has;
    int  _highestRankedRouteScore;
    int  _numberOfInputRoutes;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasHighestRankedRouteScore;
@property (nonatomic) bool hasNumberOfInputRoutes;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int highestRankedRouteScore;
@property (nonatomic) int numberOfInputRoutes;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHighestRankedRouteScore;
- (bool)hasNumberOfInputRoutes;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (int)highestRankedRouteScore;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)numberOfInputRoutes;
- (bool)readFrom:(id)arg1;
- (void)setHasHighestRankedRouteScore:(bool)arg1;
- (void)setHasNumberOfInputRoutes:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHighestRankedRouteScore:(int)arg1;
- (void)setNumberOfInputRoutes:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end