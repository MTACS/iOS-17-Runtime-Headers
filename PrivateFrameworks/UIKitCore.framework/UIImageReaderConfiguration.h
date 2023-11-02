
@interface UIImageReaderConfiguration : NSObject <NSCopying> {
    struct { 
        unsigned int prefersHighDynamicRange : 1; 
        unsigned int preparesImagesForDisplay : 1; 
        unsigned int generatesThumbnails : 1; 
    }  _flags;
    double  _pixelsPerInch;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredThumbnailSize;
}

@property (nonatomic) double pixelsPerInch;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredThumbnailSize;
@property (nonatomic) bool prefersHighDynamicRange;
@property (nonatomic) bool preparesImagesForDisplay;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (double)pixelsPerInch;
- (struct CGSize { double x1; double x2; })preferredThumbnailSize;
- (bool)prefersHighDynamicRange;
- (bool)preparesImagesForDisplay;
- (void)setPixelsPerInch:(double)arg1;
- (void)setPreferredThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPrefersHighDynamicRange:(bool)arg1;
- (void)setPreparesImagesForDisplay:(bool)arg1;

@end
