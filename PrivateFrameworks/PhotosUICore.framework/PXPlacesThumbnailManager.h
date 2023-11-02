
@interface PXPlacesThumbnailManager : NSObject {
    NSCache * _cache;
    NSTimer * _diskTimer;
    NSMutableDictionary * _metadataPlist;
    NSObject<OS_dispatch_queue> * _metadataQueue;
    PXPlacesSearchProvider * _placesProvider;
    NSMutableDictionary * _thumbnailsToWrite;
}

@property (nonatomic, retain) NSCache *cache;
@property (nonatomic, retain) NSTimer *diskTimer;
@property (nonatomic, retain) NSMutableDictionary *metadataPlist;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *metadataQueue;
@property (nonatomic, retain) PXPlacesSearchProvider *placesProvider;
@property (nonatomic, retain) NSMutableDictionary *thumbnailsToWrite;

+ (id)_descriptionForBoundingRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)_filePathForHash:(id)arg1;
+ (id)_filePathForMetadataPlist;
+ (id)_thumbnailFilePath;
+ (id)hashStringForBoundingRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 interfaceStyle:(long long)arg3 displayScale:(double)arg4;

- (void).cxx_destruct;
- (void)_createThumbnailDirectoryIfNeeded;
- (void)_fetchDiskOrMemoryPlacesThumbnailForHashString:(id)arg1 placeIsHome:(bool)arg2 traitCollection:(id)arg3 withSize:(struct CGSize { double x1; double x2; })arg4 completion:(id /* block */)arg5;
- (id)_hashStringForKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 interfaceStyle:(long long)arg3 displayScale:(double)arg4;
- (id)_imageForHomeZeroKeywordWithMapImage:(id)arg1;
- (id)_processFetchedSnapshot:(id)arg1 withHashString:(id)arg2 placeIsHome:(bool)arg3;
- (void)_setInMemoryAndPersistToDiskThumbnail:(id)arg1 forHashString:(id)arg2;
- (void)_setInMemoryThumbnail:(id)arg1 forHashString:(id)arg2;
- (void)_setMetadataDate:(id)arg1 forKey:(id)arg2;
- (void)_writeMetadataPlistToDisk;
- (id)cache;
- (id)diskTimer;
- (void)fetchPlacesThumbnailForBoundingRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 placeIsHome:(bool)arg2 traitCollection:(id)arg3 withSize:(struct CGSize { double x1; double x2; })arg4 completion:(id /* block */)arg5;
- (void)fetchPlacesThumbnailForPlaceName:(id)arg1 placeIsHome:(bool)arg2 traitCollection:(id)arg3 withSize:(struct CGSize { double x1; double x2; })arg4 completion:(id /* block */)arg5;
- (id)init;
- (id)metadataPlist;
- (id)metadataQueue;
- (id)placesProvider;
- (void)setCache:(id)arg1;
- (void)setDiskTimer:(id)arg1;
- (void)setMetadataPlist:(id)arg1;
- (void)setMetadataQueue:(id)arg1;
- (void)setPlacesProvider:(id)arg1;
- (void)setThumbnailsToWrite:(id)arg1;
- (id)thumbnailsToWrite;

@end
