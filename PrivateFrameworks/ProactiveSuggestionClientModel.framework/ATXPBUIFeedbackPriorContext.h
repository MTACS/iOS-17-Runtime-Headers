
@interface ATXPBUIFeedbackPriorContext : PBCodable <NSCopying> {
    NSMutableArray * _blendingModelCacheUpdates;
    NSMutableArray * _cacheUpdateOrderings;
    NSMutableArray * _clientModelCacheUpdates;
    NSData * _context;
    NSString * _contextClassString;
    NSString * _pinnedBlendingModelUICacheUpdateUUID;
}

@property (nonatomic, retain) NSMutableArray *blendingModelCacheUpdates;
@property (nonatomic, retain) NSMutableArray *cacheUpdateOrderings;
@property (nonatomic, retain) NSMutableArray *clientModelCacheUpdates;
@property (nonatomic, retain) NSData *context;
@property (nonatomic, retain) NSString *contextClassString;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic, readonly) bool hasContextClassString;
@property (nonatomic, readonly) bool hasPinnedBlendingModelUICacheUpdateUUID;
@property (nonatomic, retain) NSString *pinnedBlendingModelUICacheUpdateUUID;

+ (Class)blendingModelCacheUpdatesType;
+ (Class)cacheUpdateOrderingType;
+ (Class)clientModelCacheUpdatesType;

- (void).cxx_destruct;
- (void)addBlendingModelCacheUpdates:(id)arg1;
- (void)addCacheUpdateOrdering:(id)arg1;
- (void)addClientModelCacheUpdates:(id)arg1;
- (id)blendingModelCacheUpdates;
- (id)blendingModelCacheUpdatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)blendingModelCacheUpdatesCount;
- (id)cacheUpdateOrderingAtIndex:(unsigned long long)arg1;
- (id)cacheUpdateOrderings;
- (unsigned long long)cacheUpdateOrderingsCount;
- (void)clearBlendingModelCacheUpdates;
- (void)clearCacheUpdateOrderings;
- (void)clearClientModelCacheUpdates;
- (id)clientModelCacheUpdates;
- (id)clientModelCacheUpdatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)clientModelCacheUpdatesCount;
- (id)context;
- (id)contextClassString;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContext;
- (bool)hasContextClassString;
- (bool)hasPinnedBlendingModelUICacheUpdateUUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pinnedBlendingModelUICacheUpdateUUID;
- (bool)readFrom:(id)arg1;
- (void)setBlendingModelCacheUpdates:(id)arg1;
- (void)setCacheUpdateOrderings:(id)arg1;
- (void)setClientModelCacheUpdates:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setContextClassString:(id)arg1;
- (void)setPinnedBlendingModelUICacheUpdateUUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
