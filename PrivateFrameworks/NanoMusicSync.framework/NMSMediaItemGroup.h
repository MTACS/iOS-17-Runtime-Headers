
@interface NMSMediaItemGroup : NSObject {
    bool  _downloadedItemsOnly;
    bool  _manuallyAdded;
    NMSMediaContainerQuotaData * _quotaData;
    id  _referenceObj;
    unsigned long long  _type;
}

@property (nonatomic) bool downloadedItemsOnly;
@property (nonatomic, readonly) bool isEstimate;
@property (nonatomic) bool manuallyAdded;
@property (nonatomic, retain) NMSMediaContainerQuotaData *quotaData;
@property (nonatomic, retain) id referenceObj;
@property (nonatomic) unsigned long long type;

+ (id)_itemsForContainerClass:(Class)arg1 containerIDs:(id)arg2 includingNonLibraryContent:(bool)arg3 includingDownloadedContentOnly:(bool)arg4 manuallyAdded:(bool)arg5;
+ (id)_legacyItemsForContainerClass:(Class)arg1 containerIDs:(id)arg2 includingNonLibraryContent:(bool)arg3 includingDownloadedContentOnly:(bool)arg4 manuallyAdded:(bool)arg5;
+ (id)itemGroupWithAudiobookIdentifier:(id)arg1 downloadLimit:(unsigned long long)arg2 manuallyAdded:(bool)arg3 downloadedItemsOnly:(bool)arg4;
+ (id)itemGroupWithCustomPodcastFeedURL:(id)arg1 downloadedItemsOnly:(bool)arg2;
+ (id)itemGroupWithPodcastFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2 episodeLimit:(unsigned long long)arg3 manuallyAdded:(bool)arg4 downloadedItemsOnly:(bool)arg5;
+ (id)itemGroupWithPodcastStationUUID:(id)arg1 downloadedItemsOnly:(bool)arg2;
+ (id)itemGroupWithQuotaRefObj:(id)arg1;
+ (id)itemGroupWithRecommendation:(id)arg1 downloadedItemsOnly:(bool)arg2;
+ (id)itemGroupWithSavedEpisodesDownloadedItemsOnly:(bool)arg1;
+ (id)itemGroupWithSyncedAlbumID:(id)arg1 downloadedItemsOnly:(bool)arg2;
+ (id)itemGroupWithSyncedPlaylistID:(id)arg1 downloadedItemsOnly:(bool)arg2;
+ (id)itemGroupWithUpNextEpisodesDownloadedItemsOnly:(bool)arg1;
+ (id)sharedLibraryRequestQueue;

- (void).cxx_destruct;
- (id)description;
- (bool)downloadedItemsOnly;
- (unsigned long long)hash;
- (id)identifiers;
- (id)identifiersForContainerType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 refObj:(id)arg2 manuallyAdded:(bool)arg3 quotaRefObj:(id)arg4 downloadedItemsOnly:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContainer:(id)arg1;
- (bool)isEstimate;
- (id)itemList;
- (bool)manuallyAdded;
- (id)quotaData;
- (id)referenceObj;
- (void)setDownloadedItemsOnly:(bool)arg1;
- (void)setManuallyAdded:(bool)arg1;
- (void)setQuotaData:(id)arg1;
- (void)setReferenceObj:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
