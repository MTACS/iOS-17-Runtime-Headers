
@interface MKGeoJSONDecoder : NSObject

+ (id)_decodeGeometry:(id)arg1 error:(id*)arg2;
+ (id)_decodeGeometryCollection:(id)arg1 error:(id*)arg2;

- (id)_decodeFeatureCollection:(id)arg1 error:(id*)arg2;
- (id)geoJSONObjectsWithData:(id)arg1 error:(id*)arg2;
- (id)init;

@end
