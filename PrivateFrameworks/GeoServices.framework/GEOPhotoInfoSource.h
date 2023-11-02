
@interface GEOPhotoInfoSource : NSObject <GEOPhotoInfoSource> {
    GEOAMPPhotoInfoProvider * _ampPhotoInfoProvider;
    GEODefaultPhotoInfoProvider * _defaultPhotoInfoProvider;
    NSArray * _originalPhotoContent;
}

@property (nonatomic, readonly) NSArray *allPhotoInfoProviders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOPhotoInfoProvider> *principalPhotoInfoProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allPhotoInfoProviders;
- (id)bestPhotoForSize:(struct CGSize { double x1; double x2; })arg1 options:(id)arg2;
- (id)initWithPhotoContent:(id)arg1;
- (id)largestPhoto;
- (id)principalPhotoInfoProvider;
- (double)sizeRatio;

@end
