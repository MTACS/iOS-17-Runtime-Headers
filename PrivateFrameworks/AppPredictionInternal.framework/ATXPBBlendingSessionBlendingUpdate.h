
@interface ATXPBBlendingSessionBlendingUpdate : PBCodable <NSCopying> {
    NSString * _blendingABGroup;
    NSString * _blendingUpdateUUID;
    NSMutableArray * _clientModelUpdates;
    NSString * _consumerSubType;
    ATXPBBlendingSessionDeviceContext * _deviceContext;
    ATXPBBlendingSessionUICache * _uiCache;
}

@property (nonatomic, retain) NSString *blendingABGroup;
@property (nonatomic, retain) NSString *blendingUpdateUUID;
@property (nonatomic, retain) NSMutableArray *clientModelUpdates;
@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic, retain) ATXPBBlendingSessionDeviceContext *deviceContext;
@property (nonatomic, readonly) bool hasBlendingABGroup;
@property (nonatomic, readonly) bool hasBlendingUpdateUUID;
@property (nonatomic, readonly) bool hasConsumerSubType;
@property (nonatomic, readonly) bool hasDeviceContext;
@property (nonatomic, readonly) bool hasUiCache;
@property (nonatomic, retain) ATXPBBlendingSessionUICache *uiCache;

+ (Class)clientModelUpdateType;

- (void).cxx_destruct;
- (void)addClientModelUpdate:(id)arg1;
- (id)blendingABGroup;
- (id)blendingUpdateUUID;
- (void)clearClientModelUpdates;
- (id)clientModelUpdateAtIndex:(unsigned long long)arg1;
- (id)clientModelUpdates;
- (unsigned long long)clientModelUpdatesCount;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceContext;
- (id)dictionaryRepresentation;
- (bool)hasBlendingABGroup;
- (bool)hasBlendingUpdateUUID;
- (bool)hasConsumerSubType;
- (bool)hasDeviceContext;
- (bool)hasUiCache;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBlendingABGroup:(id)arg1;
- (void)setBlendingUpdateUUID:(id)arg1;
- (void)setClientModelUpdates:(id)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setDeviceContext:(id)arg1;
- (void)setUiCache:(id)arg1;
- (id)uiCache;
- (void)writeTo:(id)arg1;

@end
