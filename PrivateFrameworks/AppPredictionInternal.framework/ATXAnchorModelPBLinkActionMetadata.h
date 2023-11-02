
@interface ATXAnchorModelPBLinkActionMetadata : PBCodable <NSCopying> {
    ATXAnchorModelPBLaunchHistoryMetadata * _actionHistory;
    NSString * _actionId;
    NSString * _bundleId;
    struct { 
        unsigned int relativeTimeSinceAnchorInSeconds : 1; 
    }  _has;
    int  _relativeTimeSinceAnchorInSeconds;
}

@property (nonatomic, retain) ATXAnchorModelPBLaunchHistoryMetadata *actionHistory;
@property (nonatomic, retain) NSString *actionId;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, readonly) bool hasActionHistory;
@property (nonatomic, readonly) bool hasActionId;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasRelativeTimeSinceAnchorInSeconds;
@property (nonatomic) int relativeTimeSinceAnchorInSeconds;

- (void).cxx_destruct;
- (id)actionHistory;
- (id)actionId;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionHistory;
- (bool)hasActionId;
- (bool)hasBundleId;
- (bool)hasRelativeTimeSinceAnchorInSeconds;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)relativeTimeSinceAnchorInSeconds;
- (void)setActionHistory:(id)arg1;
- (void)setActionId:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setHasRelativeTimeSinceAnchorInSeconds:(bool)arg1;
- (void)setRelativeTimeSinceAnchorInSeconds:(int)arg1;
- (void)writeTo:(id)arg1;

@end
