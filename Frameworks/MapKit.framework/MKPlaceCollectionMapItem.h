
@interface MKPlaceCollectionMapItem : NSObject {
    MKMapItem * _mapItem;
    GEOPlaceCollectionItem * _placeCollectionItem;
}

@property (nonatomic, readonly) GEOQuickLink *appClip;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly) GEOPlaceCollectionItem *placeCollectionItem;

- (void).cxx_destruct;
- (id)appClip;
- (id)description;
- (id)initWithMapItem:(id)arg1 placeCollectionItem:(id)arg2;
- (id)mapItem;
- (id)placeCollectionItem;

@end
