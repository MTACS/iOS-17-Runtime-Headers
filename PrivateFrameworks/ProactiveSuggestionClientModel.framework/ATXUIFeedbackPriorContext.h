
@interface ATXUIFeedbackPriorContext : NSObject <ATXProtoBufWrapper, NSSecureCoding> {
    NSMutableDictionary * _blendingModelCacheUpdates;
    NSMutableOrderedSet * _cacheUpdateOrdering;
    NSMutableDictionary * _clientModelCacheUpdates;
    <ATXProactiveSuggestionFeedbackContextProtocol> * _context;
    NSUUID * _pinnedBlendingModelUICacheUpdateUUID;
}

@property (nonatomic, readonly) NSDictionary *blendingModelCacheUpdates;
@property (nonatomic, readonly) NSOrderedSet *cacheUpdateOrdering;
@property (nonatomic, readonly) NSDictionary *clientModelCacheUpdates;
@property (nonatomic, readonly) <ATXProactiveSuggestionFeedbackContextProtocol> *context;
@property (nonatomic, readonly) NSUUID *pinnedBlendingModelUICacheUpdateUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_pruneBlendingModelCachesOlderThanUUID:(id)arg1;
- (id)_referencedClientModelCaches;
- (void)_validateCacheUpdateOrderingAndCacheDictMapping;
- (void)addBlendingModelUICacheUpdate:(id)arg1;
- (void)addClientModelCacheUpdate:(id)arg1;
- (void)addContext:(id)arg1;
- (id)blendingModelCacheUpdates;
- (id)blendingModelUICacheUpdateForUUID:(id)arg1;
- (id)cacheUpdateOrdering;
- (id)clientModelCacheUpdates;
- (id)clientModelCacheUpdatesForUICacheUpdateUUID:(id)arg1;
- (id)context;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCacheUpdateOrdering:(id)arg1 blendingModelCacheUpdates:(id)arg2 clientModelCacheUpdates:(id)arg3 context:(id)arg4 pinnedBlendingModelUICacheUpdateUUID:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXUIFeedbackPriorContext:(id)arg1;
- (id)pinnedBlendingModelUICacheUpdateUUID;
- (id)proto;
- (void)pruneBlendingModelCachesOverMaxNum;
- (void)pruneContextStateOlderThanBlendingUUID:(id)arg1;
- (void)pruneUnreferencedClientModelCachesIfPossible;
- (void)updatePinnedBlendingModelUICacheUpdateUUID:(id)arg1;
- (id)validContextClassNames;

@end
