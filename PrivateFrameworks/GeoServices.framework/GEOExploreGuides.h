
@interface GEOExploreGuides : NSObject {
    GEOPDExploreGuides * _pdExploreGuides;
}

@property (nonatomic, readonly) GEOGuideLocation *guideLocation;

- (void).cxx_destruct;
- (id)guideLocation;
- (id)imageDownloadUrlFromTemplateUrl:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)imageURLForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithExploreGuides:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
