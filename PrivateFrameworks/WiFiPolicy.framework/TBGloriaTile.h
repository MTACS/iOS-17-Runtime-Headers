
@interface TBGloriaTile : NSObject <TBTile> {
    NSString * _WKTString;
    double  _east;
    unsigned long long  _key;
    double  _lat;
    double  _lng;
    double  _north;
    double  _south;
    double  _tileSize;
    double  _west;
    unsigned char  _zoom;
}

@property (nonatomic, copy) NSString *WKTString;
@property (nonatomic, readonly, copy) NSDate *created;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double east;
@property (nonatomic, retain) NSString *etag;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long key;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic, readonly) unsigned long long networkCount;
@property (nonatomic) double north;
@property (nonatomic) double south;
@property (readonly) Class superclass;
@property (nonatomic) double tileSize;
@property (nonatomic) double west;
@property (nonatomic) unsigned char zoom;

+ (unsigned char)defaultZoomLevel;
+ (id)gloriaTileWithLat:(double)arg1 lng:(double)arg2 zoom:(unsigned char)arg3;

- (void).cxx_destruct;
- (id)WKTString;
- (id)adjacentTileKeysWithLevel:(unsigned int)arg1;
- (double)east;
- (id)initWithEncodedKey:(unsigned long long)arg1 zoom:(unsigned char)arg2;
- (id)initWithLat:(double)arg1 lng:(double)arg2;
- (id)initWithLat:(double)arg1 lng:(double)arg2 zoom:(unsigned char)arg3;
- (unsigned long long)key;
- (double)lat;
- (double)lng;
- (id)neighborTileKeysWithRadius:(double)arg1;
- (double)north;
- (void)setEast:(double)arg1;
- (void)setKey:(unsigned long long)arg1;
- (void)setLat:(double)arg1;
- (void)setLng:(double)arg1;
- (void)setNorth:(double)arg1;
- (void)setSouth:(double)arg1;
- (void)setTileSize:(double)arg1;
- (void)setWKTString:(id)arg1;
- (void)setWest:(double)arg1;
- (void)setZoom:(unsigned char)arg1;
- (double)south;
- (double)tileSize;
- (double)west;
- (unsigned char)zoom;

@end
