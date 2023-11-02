
@interface GEODotPlace : NSObject {
    GEOMapItemIdentifier * _identifier;
    GEOLatLng * _latLng;
    NSString * _name;
    GEOStyleAttributes * _styleAttributes;
}

@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) GEOLatLng *latLng;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initWithDotPlace:(id)arg1;
- (id)latLng;
- (id)name;
- (id)styleAttributes;

@end
