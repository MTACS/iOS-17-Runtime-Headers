
@interface GEOBusinessAssets : NSObject {
    GEOPDBusinessAssets * _businessAssets;
    NSArray * _coverPhotos;
    NSArray * _croppedPhotos;
}

@property (nonatomic, readonly) <GEOMapItemPhoto> *coverPhoto;
@property (nonatomic, readonly) NSArray *coverPhotos;
@property (nonatomic, readonly) <GEOMapItemPhoto> *croppedPhoto;
@property (nonatomic, readonly) NSArray *croppedPhotos;

+ (id)businessAssetsWithPlaceData:(id)arg1;

- (void).cxx_destruct;
- (id)coverPhoto;
- (id)coverPhotos;
- (id)croppedPhoto;
- (id)croppedPhotos;
- (id)initWithBusinessAssets:(id)arg1;

@end
