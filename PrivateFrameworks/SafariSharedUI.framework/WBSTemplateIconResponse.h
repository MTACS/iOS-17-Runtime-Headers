
@interface WBSTemplateIconResponse : WBSSiteMetadataResponse {
    UIImage * _highlightedImage;
    UIImage * _image;
    bool  _monogram;
    UIColor * _themeColor;
}

@property (nonatomic, readonly) UIImage *highlightedImage;
@property (nonatomic, readonly) UIImage *image;
@property (getter=isMonogram, nonatomic, readonly) bool monogram;
@property (nonatomic, readonly) UIColor *themeColor;

+ (id)responseWithURL:(id)arg1 image:(id)arg2 highlightedImage:(id)arg3 themeColor:(id)arg4 isMonogram:(bool)arg5;

- (void).cxx_destruct;
- (id)highlightedImage;
- (id)image;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 image:(id)arg2 highlightedImage:(id)arg3 themeColor:(id)arg4 isMonogram:(bool)arg5;
- (bool)isMonogram;
- (id)themeColor;

@end
