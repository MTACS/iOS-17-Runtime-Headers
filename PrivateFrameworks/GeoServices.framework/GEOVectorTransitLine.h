
@interface GEOVectorTransitLine : NSObject {
    GEOFeature * _feature;
    void * _vectorTransitLine;
}

@property (nonatomic, readonly) unsigned int cartoId;
@property (nonatomic, readonly) struct GeoCodecsRGBAColor8 { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*color;
@property (nonatomic, readonly) GEOFeature *feature;
@property (nonatomic, readonly) float minZoom;
@property (nonatomic, readonly) unsigned int order;
@property (nonatomic, readonly) unsigned int subtitleOffset;
@property (nonatomic, readonly) unsigned int systemIndex;

- (void).cxx_destruct;
- (unsigned int)cartoId;
- (struct GeoCodecsRGBAColor8 { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)color;
- (id)feature;
- (void*)get;
- (id)init:(void*)arg1 withVectorTile:(id)arg2;
- (float)minZoom;
- (unsigned int)order;
- (unsigned int)subtitleOffset;
- (unsigned int)systemIndex;

@end
