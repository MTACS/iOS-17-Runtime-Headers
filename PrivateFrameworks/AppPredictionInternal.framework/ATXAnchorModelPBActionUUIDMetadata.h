
@interface ATXAnchorModelPBActionUUIDMetadata : PBCodable <NSCopying> {
    long long  _actionUUID;
    ATXAnchorModelPBLaunchHistoryMetadata * _actionUUIDLaunchHistory;
    struct { 
        unsigned int actionUUID : 1; 
        unsigned int slotHash : 1; 
        unsigned int paramCount : 1; 
    }  _has;
    unsigned int  _paramCount;
    long long  _slotHash;
}

@property (nonatomic) long long actionUUID;
@property (nonatomic, retain) ATXAnchorModelPBLaunchHistoryMetadata *actionUUIDLaunchHistory;
@property (nonatomic) bool hasActionUUID;
@property (nonatomic, readonly) bool hasActionUUIDLaunchHistory;
@property (nonatomic) bool hasParamCount;
@property (nonatomic) bool hasSlotHash;
@property (nonatomic) unsigned int paramCount;
@property (nonatomic) long long slotHash;

- (void).cxx_destruct;
- (long long)actionUUID;
- (id)actionUUIDLaunchHistory;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionUUID;
- (bool)hasActionUUIDLaunchHistory;
- (bool)hasParamCount;
- (bool)hasSlotHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)paramCount;
- (bool)readFrom:(id)arg1;
- (void)setActionUUID:(long long)arg1;
- (void)setActionUUIDLaunchHistory:(id)arg1;
- (void)setHasActionUUID:(bool)arg1;
- (void)setHasParamCount:(bool)arg1;
- (void)setHasSlotHash:(bool)arg1;
- (void)setParamCount:(unsigned int)arg1;
- (void)setSlotHash:(long long)arg1;
- (long long)slotHash;
- (void)writeTo:(id)arg1;

@end
