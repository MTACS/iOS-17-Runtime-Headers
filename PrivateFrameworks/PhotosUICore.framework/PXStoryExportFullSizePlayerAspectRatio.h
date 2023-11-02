
@interface PXStoryExportFullSizePlayerAspectRatio : PXStoryExportAspectRatio {
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (id)adjustedForOrientation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;

@end
