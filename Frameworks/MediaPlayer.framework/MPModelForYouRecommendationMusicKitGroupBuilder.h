
@interface MPModelForYouRecommendationMusicKitGroupBuilder : NSObject {
    MPMutableSectionedCollection * _flatSectionedItems;
    bool  _isListenNow;
    MPModelForYouRecommendationMusicKitItemBuilder * _itemBuilder;
    NSDateFormatter * _lastUpdatedDateFormatter;
    struct { 
        unsigned int initialized : 1; 
        unsigned int groupType : 1; 
        unsigned int lastUpdatedDate : 1; 
        unsigned int title : 1; 
        unsigned int subgroups : 1; 
        unsigned int loadAdditionalContentURL : 1; 
        unsigned int hrefURL : 1; 
        unsigned int refreshURL : 1; 
        unsigned int traits : 1; 
        unsigned int displaysAsGridCellInCarPlay : 1; 
        unsigned int displaysAsTitledSectionWithRowsInCarPlay : 1; 
    }  _requestedGroupProperties;
    MPPropertySet * _requestedGroupPropertySet;
    MPPropertySet * _requestedItemPropertySet;
    NSDictionary * _storeItemMetadataResults;
    ICURLBag * _storeURLBag;
}

@property (nonatomic, readonly) MPMutableSectionedCollection *flatSectionedItems;
@property (nonatomic, readonly) MPPropertySet *requestedGroupPropertySet;
@property (nonatomic, readonly) MPPropertySet *requestedItemPropertySet;
@property (nonatomic, readonly) NSDictionary *storeItemMetadataResults;

+ (id)allSupportedGroupProperties;
+ (id)allSupportedItemProperties;

- (void).cxx_destruct;
- (id)flatSectionedItems;
- (id)initWithRequestedGroupPropertySet:(id)arg1 requestedItemPropertySet:(id)arg2 storeItemMetadataResults:(id)arg3 flatSectionedItems:(id)arg4 storeURLBag:(id)arg5 isListenNow:(bool)arg6;
- (void)initializeRequestedGroupProperties;
- (id)modelObjectForItemsArray:(id)arg1 userIdentity:(id)arg2;
- (id)modelObjectForRecentlyPlayedArray:(id)arg1 userIdentity:(id)arg2;
- (id)modelObjectForRecommendationDictionary:(id)arg1 userIdentity:(id)arg2;
- (id)requestedGroupPropertySet;
- (id)requestedItemPropertySet;
- (id)storeItemMetadataResults;

@end
