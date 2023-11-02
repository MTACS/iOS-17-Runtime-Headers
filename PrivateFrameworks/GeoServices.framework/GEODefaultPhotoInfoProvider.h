
@interface GEODefaultPhotoInfoProvider : NSObject <GEOPhotoInfoProvider> {
    NSArray * _sortedPhotoInfos;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sortedPhotoInfoFromPhotoVersions:(id)arg1;

- (void).cxx_destruct;
- (id)bestPhotoForSize:(struct CGSize { double x1; double x2; })arg1 options:(id)arg2;
- (int)designatedURLType;
- (id)initWithPhotoContent:(id)arg1;
- (id)largestPhoto;
- (double)sizeRatio;

@end
