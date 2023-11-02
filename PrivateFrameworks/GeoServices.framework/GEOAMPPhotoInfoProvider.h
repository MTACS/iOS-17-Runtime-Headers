
@interface GEOAMPPhotoInfoProvider : NSObject <GEOPhotoInfoProvider> {
    AMSMediaArtwork * _artwork;
    GEOPDPhotoContent * _templatePhotoContent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bestPhotoForSize:(struct CGSize { double x1; double x2; })arg1 options:(id)arg2;
- (int)designatedURLType;
- (id)initWithPhotoContent:(id)arg1;
- (id)largestPhoto;
- (double)sizeRatio;

@end
