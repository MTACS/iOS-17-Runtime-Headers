
@interface ATXAnchorModelPBModeMetadata : PBCodable <NSCopying> {
    struct { 
        unsigned int relativeTimeSinceAnchorInSeconds : 1; 
        unsigned int isStart : 1; 
    }  _has;
    bool  _isStart;
    ATXAnchorModelPBLaunchHistoryMetadata * _modeHistory;
    NSString * _modeId;
    int  _relativeTimeSinceAnchorInSeconds;
}

@property (nonatomic) bool hasIsStart;
@property (nonatomic, readonly) bool hasModeHistory;
@property (nonatomic, readonly) bool hasModeId;
@property (nonatomic) bool hasRelativeTimeSinceAnchorInSeconds;
@property (nonatomic) bool isStart;
@property (nonatomic, retain) ATXAnchorModelPBLaunchHistoryMetadata *modeHistory;
@property (nonatomic, retain) NSString *modeId;
@property (nonatomic) int relativeTimeSinceAnchorInSeconds;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsStart;
- (bool)hasModeHistory;
- (bool)hasModeId;
- (bool)hasRelativeTimeSinceAnchorInSeconds;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isStart;
- (void)mergeFrom:(id)arg1;
- (id)modeHistory;
- (id)modeId;
- (bool)readFrom:(id)arg1;
- (int)relativeTimeSinceAnchorInSeconds;
- (void)setHasIsStart:(bool)arg1;
- (void)setHasRelativeTimeSinceAnchorInSeconds:(bool)arg1;
- (void)setIsStart:(bool)arg1;
- (void)setModeHistory:(id)arg1;
- (void)setModeId:(id)arg1;
- (void)setRelativeTimeSinceAnchorInSeconds:(int)arg1;
- (void)writeTo:(id)arg1;

@end
