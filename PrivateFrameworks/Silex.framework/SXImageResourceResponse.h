
@interface SXImageResourceResponse : SXResourceResponse {
    UIImage * _image;
    unsigned long long  _imageQuality;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic) unsigned long long imageQuality;

- (void).cxx_destruct;
- (id)image;
- (unsigned long long)imageQuality;
- (void)setImage:(id)arg1;
- (void)setImageQuality:(unsigned long long)arg1;

@end
