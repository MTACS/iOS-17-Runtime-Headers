
@interface GEOMapItemTip : NSObject {
    GEOPDTip * _geoTip;
}

@property (nonatomic, readonly) NSString *bestImageURL;
@property (nonatomic, retain) GEOPDTip *geoTip;
@property (nonatomic, readonly) bool hasTipId;
@property (nonatomic, readonly) bool hasTipTime;
@property (nonatomic, readonly) NSString *localizedSnippet;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *tipId;
@property (nonatomic, readonly) double tipTime;

- (void).cxx_destruct;
- (id)bestImageURL;
- (id)geoTip;
- (bool)hasTipId;
- (bool)hasTipTime;
- (id)initWithGEOPDTip:(id)arg1;
- (id)localizedSnippet;
- (id)name;
- (void)setGeoTip:(id)arg1;
- (id)tipId;
- (double)tipTime;

@end
