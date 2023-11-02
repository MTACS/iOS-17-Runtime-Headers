
@interface VKMapViewDescriptor : NSObject {
    bool  _allowsAntialiasing;
    GEOApplicationAuditToken * _auditToken;
    long long  _carDisplayType;
    double  _contentScale;
    bool  _inBackground;
    unsigned char  _mapKitClientMode;
    unsigned char  _mapKitUsage;
    long long  _mapViewPurpose;
    unsigned char  _mapsUsage;
    bool  _shouldRasterize;
}

@property (nonatomic) bool allowsAntialiasing;
@property (nonatomic, retain) GEOApplicationAuditToken *auditToken;
@property (nonatomic) long long carDisplayType;
@property (nonatomic) double contentScale;
@property (nonatomic) bool inBackground;
@property (nonatomic) unsigned char mapKitClientMode;
@property (nonatomic) unsigned char mapKitUsage;
@property (nonatomic) long long mapViewPurpose;
@property (nonatomic) unsigned char mapsUsage;
@property (nonatomic) bool shouldRasterize;

+ (id)descriptorWithShouldRasterize:(bool)arg1 inBackground:(bool)arg2 contentScale:(double)arg3 auditToken:(id)arg4 mapViewPurpose:(long long)arg5 allowsAntialiasing:(bool)arg6;

- (void).cxx_destruct;
- (bool)allowsAntialiasing;
- (id)auditToken;
- (long long)carDisplayType;
- (double)contentScale;
- (bool)inBackground;
- (id)init;
- (unsigned char)mapKitClientMode;
- (unsigned char)mapKitUsage;
- (long long)mapViewPurpose;
- (unsigned char)mapsUsage;
- (void)setAllowsAntialiasing:(bool)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setCarDisplayType:(long long)arg1;
- (void)setContentScale:(double)arg1;
- (void)setInBackground:(bool)arg1;
- (void)setMapKitClientMode:(unsigned char)arg1;
- (void)setMapKitUsage:(unsigned char)arg1;
- (void)setMapViewPurpose:(long long)arg1;
- (void)setMapsUsage:(unsigned char)arg1;
- (void)setShouldRasterize:(bool)arg1;
- (bool)shouldRasterize;

@end
