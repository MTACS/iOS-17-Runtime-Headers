
@interface MUPlaceHikingTileViewModel : NSObject <MUPlaceTileViewModel> {
    GEOTrail * _geoTrail;
    int  _hikingItemType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long expectedNumberOfFooterLines;
@property (nonatomic, retain) GEOTrail *geoTrail;
@property (readonly) unsigned long long hash;
@property (nonatomic) int hikingItemType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *tileName;

- (void).cxx_destruct;
- (unsigned long long)expectedNumberOfFooterLines;
- (void)fetchBadgeIconWithCompletion:(id /* block */)arg1;
- (void)fetchFallbackIconWithCompletion:(id /* block */)arg1;
- (void)fetchImageTilewWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)footerAttributedStringForFont:(id)arg1;
- (id)geoTrail;
- (int)hikingItemType;
- (id)initWithGEOTrail:(id)arg1 hikingItemType:(int)arg2;
- (void)setGeoTrail:(id)arg1;
- (void)setHikingItemType:(int)arg1;
- (id)subtitleAttributedStringForFont:(id)arg1;
- (id)tileName;

@end
