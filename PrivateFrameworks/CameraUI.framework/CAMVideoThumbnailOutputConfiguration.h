
@interface CAMVideoThumbnailOutputConfiguration : NSObject {
    NSArray * _filters;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
}

@property (nonatomic, readonly) NSArray *filters;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbnailSize;

- (void).cxx_destruct;
- (id)filters;
- (id)initWithMode:(long long)arg1;
- (id)initWithThumbnailSize:(struct CGSize { double x1; double x2; })arg1 filters:(id)arg2;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
