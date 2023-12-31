
@interface FigCaptureVideoThumbnailSinkConfiguration : FigCaptureSinkConfiguration {
    NSArray * _filters;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
}

@property (nonatomic, copy) NSArray *filters;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)filters;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (int)sinkType;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
