
@interface AWDCoreRoutineLearnedLocationReconciliationVisitDensity : PBCodable <NSCopying> {
    int  _countDeviceLost;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int countDeviceLost : 1; 
        unsigned int totalBranchCount : 1; 
    }  _has;
    unsigned long long  _timestamp;
    int  _totalBranchCount;
}

@property (nonatomic) int countDeviceLost;
@property (nonatomic) bool hasCountDeviceLost;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalBranchCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int totalBranchCount;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)countDeviceLost;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCountDeviceLost;
- (bool)hasTimestamp;
- (bool)hasTotalBranchCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCountDeviceLost:(int)arg1;
- (void)setHasCountDeviceLost:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalBranchCount:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalBranchCount:(int)arg1;
- (unsigned long long)timestamp;
- (int)totalBranchCount;
- (void)writeTo:(id)arg1;

@end
