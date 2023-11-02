
@interface ATXAnchorModelPBActionKeyMetadata : PBCodable <NSCopying> {
    ATXAnchorModelPBLaunchHistoryMetadata * _actionKeyLaunchHistory;
    NSString * _actionType;
}

@property (nonatomic, retain) ATXAnchorModelPBLaunchHistoryMetadata *actionKeyLaunchHistory;
@property (nonatomic, retain) NSString *actionType;
@property (nonatomic, readonly) bool hasActionKeyLaunchHistory;
@property (nonatomic, readonly) bool hasActionType;

- (void).cxx_destruct;
- (id)actionKeyLaunchHistory;
- (id)actionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionKeyLaunchHistory;
- (bool)hasActionType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionKeyLaunchHistory:(id)arg1;
- (void)setActionType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
