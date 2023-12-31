
@interface WBSSVGImageRenderingRequest : WBSSiteMetadataRequest

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) NSString *svgContent;
@property (nonatomic, readonly) NSArray *urls;

- (id)_imageSizeValueWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithSVGContent:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;
- (id)initWithURL:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithURLs:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)svgContent;
- (id)urls;

@end
