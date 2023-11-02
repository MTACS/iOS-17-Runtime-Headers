
@interface GEORPMapLocation : PBCodable <NSCopying> {
    GEOLatLng * _coordinate;
    struct { 
        unsigned int has_zoomLevel : 1; 
        unsigned int read_coordinate : 1; 
        unsigned int read_image : 1; 
        unsigned int read_mapScreenshotId : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSData * _image;
    NSString * _mapScreenshotId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDViewportInfo * _viewportInfo;
    float  _zoomLevel;
}

@property (nonatomic, retain) GEOLatLng *coordinate;
@property (nonatomic, readonly) bool hasCoordinate;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasMapScreenshotId;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) bool hasZoomLevel;
@property (nonatomic, retain) NSData *image;
@property (nonatomic, retain) NSString *mapScreenshotId;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;
@property (nonatomic) float zoomLevel;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_setMapMode:(int)arg1 region:(id)arg2;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCoordinate;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasImage;
- (bool)hasMapScreenshotId;
- (bool)hasViewportInfo;
- (bool)hasZoomLevel;
- (unsigned long long)hash;
- (id)image;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mapScreenshotId;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasZoomLevel:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setMapScreenshotId:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (void)setZoomLevel:(float)arg1;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;
- (float)zoomLevel;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_setMapType:(unsigned long long)arg1 region:(id)arg2;

@end
