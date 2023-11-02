
@interface MPModelForYouRecommendationMusicKitItemBuilder : NSObject {
    MPModelStoreBrowseContentItemBuilder * _contentItemBuilder;
    MPMutableSectionedCollection * _flatSectionedItems;
    bool  _isListenNow;
    struct { 
        bool isInitialized; 
        bool itemType; 
        bool url; 
        bool reason; 
        bool utterance; 
        bool backedByStoreItemMetadata; 
        bool album; 
        bool playlist; 
        bool radioStation; 
        bool subgroup; 
    }  _requestedItemProperties;
    MPPropertySet * _requestedPropertySet;
    NSDictionary * _storeItemMetadataResults;
    ICURLBag * _storeURLBag;
    MPModelForYouRecommendationMusicKitGroupBuilder * _subgroupBuilder;
}

@property (nonatomic, readonly) MPMutableSectionedCollection *flatSectionedItems;
@property (nonatomic, readonly) MPPropertySet *requestedPropertySet;
@property (nonatomic, readonly) NSDictionary *storeItemMetadataResults;

+ (id)allSupportedProperties;

- (void).cxx_destruct;
- (id)convertToStoreItemMetadataDictionary:(id)arg1;
- (id)flatSectionedItems;
- (id)initWithRequestedPropertySet:(id)arg1 storeItemMetadataResults:(id)arg2 flatSectionedItems:(id)arg3 storeURLBag:(id)arg4 isListenNow:(bool)arg5;
- (id)modelObjectForRecommendationChildDictionary:(id)arg1 parentGroup:(id)arg2 subgroupsAccumulator:(id)arg3 userIdentity:(id)arg4;
- (id)requestedPropertySet;
- (id)storeItemMetadataResults;
- (id)storeItemMetadataWithMusicAPIMetadataDictionary:(id)arg1;

@end
