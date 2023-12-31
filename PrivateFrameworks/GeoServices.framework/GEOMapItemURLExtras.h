
@interface GEOMapItemURLExtras : NSObject

+ (id)_mapItemsFromDirectionsAction:(id)arg1 currentLocationIndices:(id*)arg2 options:(id*)arg3;
+ (id)_mapItemsFromDirectionsAction:(id)arg1 hasCurrentLocation:(bool*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4;
+ (id)_mapItemsFromPresentAction:(id)arg1 currentLocationIndices:(id*)arg2 options:(id*)arg3;
+ (id)_mapItemsFromPresentAction:(id)arg1 hasCurrentLocation:(bool*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4;
+ (id)mapItemsFromURL:(id)arg1 currentLocationIndices:(id*)arg2 options:(id*)arg3;
+ (id)mapItemsFromURL:(id)arg1 hasCurrentLocation:(bool*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4;
+ (id)urlToPresentAction:(id)arg1 present:(id)arg2;
+ (id)urlToPresentDirectionsForItems:(id)arg1 options:(id)arg2;
+ (id)urlToPresentDirectionsFromCurrentLocationToMapItem:(id)arg1 withOptions:(id)arg2;

@end
