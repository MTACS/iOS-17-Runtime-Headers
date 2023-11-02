
@interface NMSMusicRecommendation : NSObject <NSCopying> {
    MPArtworkCatalog * _artworkCatalog;
    NSString * _identifier;
    NSMapTable * _itemSectionMap;
    NSOrderedSet * _items;
    NSDate * _lastModifiedDate;
    bool  _selected;
    NSObject<OS_dispatch_queue> * _serializerQueue;
    NSString * _title;
}

@property (nonatomic, readonly) MPArtworkCatalog *artworkCatalog;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSOrderedSet *items;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) NSArray *storeRecommendationModelObjects;
@property (nonatomic, readonly) NSString *title;

+ (void)_fillArtworkMutableArray:(id)arg1 toCount:(unsigned long long)arg2;
+ (id)_missingArtImage;

- (void).cxx_destruct;
- (id)_tiledArtworkRequestForPlaylists:(id)arg1 albums:(id)arg2;
- (id)artworkCatalog;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)initRecentMusicRecommendationWithItems:(id)arg1 itemSectionMap:(id)arg2;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 items:(id)arg3 itemSectionMap:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isSelected;
- (id)items;
- (id)lastModifiedDate;
- (bool)nms_isRecentMusic;
- (unsigned long long)recommendationSectionTypeForModelObject:(id)arg1;
- (id)sectionForItemWithIdentifiers:(id)arg1;
- (void)setSelected:(bool)arg1;
- (id)storeRecommendationModelObjects;
- (id)title;

@end
