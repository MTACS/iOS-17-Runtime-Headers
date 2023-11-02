
@interface ATXAnchorModelPBActionMetadata : PBCodable <NSCopying> {
    ATXAnchorModelPBActionKeyMetadata * _actionKeyMetadata;
    int  _actionType;
    NSMutableArray * _actionUUIDMetadatas;
    ATXAnchorModelPBAppLaunchMetadata * _appLaunchMetadata;
    struct { 
        unsigned int actionType : 1; 
    }  _has;
}

@property (nonatomic, retain) ATXAnchorModelPBActionKeyMetadata *actionKeyMetadata;
@property (nonatomic) int actionType;
@property (nonatomic, retain) NSMutableArray *actionUUIDMetadatas;
@property (nonatomic, retain) ATXAnchorModelPBAppLaunchMetadata *appLaunchMetadata;
@property (nonatomic, readonly) bool hasActionKeyMetadata;
@property (nonatomic) bool hasActionType;
@property (nonatomic, readonly) bool hasAppLaunchMetadata;

+ (Class)actionUUIDMetadataType;

- (void).cxx_destruct;
- (int)StringAsActionType:(id)arg1;
- (id)actionKeyMetadata;
- (int)actionType;
- (id)actionTypeAsString:(int)arg1;
- (id)actionUUIDMetadataAtIndex:(unsigned long long)arg1;
- (id)actionUUIDMetadatas;
- (unsigned long long)actionUUIDMetadatasCount;
- (void)addActionUUIDMetadata:(id)arg1;
- (id)appLaunchMetadata;
- (void)clearActionUUIDMetadatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionKeyMetadata;
- (bool)hasActionType;
- (bool)hasAppLaunchMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionKeyMetadata:(id)arg1;
- (void)setActionType:(int)arg1;
- (void)setActionUUIDMetadatas:(id)arg1;
- (void)setAppLaunchMetadata:(id)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
