
@interface NMSMusicRecommendationsResponse : NSObject {
    NSData * _cachedData;
    NMSMutableMediaSyncInfo * _importedStoreContainerItemMappings;
    NSOrderedSet * _recommendations;
}

@property (nonatomic, readonly) NSData *cachedData;
@property (nonatomic, readonly) NMSMutableMediaSyncInfo *importedStoreContainerItemMappings;
@property (nonatomic, readonly) NSOrderedSet *recommendations;

- (void).cxx_destruct;
- (id)cachedData;
- (id)importedStoreContainerItemMappings;
- (id)initWithCachedData:(id)arg1 importedStoreContainerItemMappings:(id)arg2 recommendations:(id)arg3;
- (id)recommendations;

@end
