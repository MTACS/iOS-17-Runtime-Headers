
@interface GEOAssociatedApp : NSObject {
    GEOPDAssociatedApp * _geoAssociatedApp;
}

@property (nonatomic, readonly) NSArray *alternateAppAdamIds;
@property (nonatomic, retain) GEOPDAssociatedApp *geoAssociatedApp;
@property (nonatomic, readonly) bool hasPreferredAppAdamId;
@property (nonatomic, readonly) NSString *preferredAppAdamId;

- (void).cxx_destruct;
- (id)alternateAppAdamIds;
- (id)geoAssociatedApp;
- (bool)hasPreferredAppAdamId;
- (id)initWithGEOPDAssociatedApp:(id)arg1;
- (id)preferredAppAdamId;
- (void)setGeoAssociatedApp:(id)arg1;

@end
