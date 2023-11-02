
@interface MKURLSerializer : NSObject

+ (id)stringForDirectionsType:(unsigned long long)arg1;
+ (id)stringForMapType:(unsigned long long)arg1;

- (id)mapItemsFromUrl:(id)arg1 options:(id*)arg2;
- (id)urlForDirectionsFromMapItem:(id)arg1 toMapItem:(id)arg2 transportType:(unsigned long long)arg3 options:(id)arg4;
- (id)urlForDirectionsWithMapItems:(id)arg1 transportType:(unsigned long long)arg2 options:(id)arg3;
- (id)urlForOpeningMapItems:(id)arg1 options:(id)arg2;

@end
