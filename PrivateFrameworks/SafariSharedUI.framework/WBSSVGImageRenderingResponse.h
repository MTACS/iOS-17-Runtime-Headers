
@interface WBSSVGImageRenderingResponse : WBSSiteMetadataResponse {
    UIImage * _image;
}

@property (nonatomic, readonly) UIImage *image;

- (void).cxx_destruct;
- (id)image;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 image:(id)arg2;

@end
