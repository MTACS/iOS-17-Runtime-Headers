
@interface MapsSync.MapsSyncDataValidator : NSObject

+ (bool)doesMapItemExistInCollectionWithMapItem:(id)arg1 collection:(id)arg2;
+ (bool)doesMapItemExistInPlacesWithMapItem:(id)arg1 session:(id)arg2;
+ (id)findMapItemInPlacesWithMapItem:(id)arg1 session:(id)arg2;
+ (id)findPlaceInCollectionWithMapItem:(id)arg1 collection:(id)arg2;

- (id)init;

@end
