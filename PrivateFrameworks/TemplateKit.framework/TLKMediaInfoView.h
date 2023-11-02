
@interface TLKMediaInfoView : TLKView {
    NSArray * _contents;
    TLKContentsContainerView * _contentsContainer;
    TLKImage * _image;
    TLKImageView * _imageView;
}

@property (nonatomic, retain) NSArray *contents;
@property (nonatomic, retain) TLKContentsContainerView *contentsContainer;
@property (nonatomic, retain) TLKImage *image;
@property (nonatomic, retain) TLKImageView *imageView;

- (void).cxx_destruct;
- (id)contents;
- (id)contentsContainer;
- (id)detailLabelStrings;
- (id)image;
- (id)imageView;
- (bool)imageViewIsHidden;
- (void)observedPropertiesChanged;
- (void)setContents:(id)arg1;
- (void)setContentsContainer:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (id)setupContentView;
- (id)titleLabelStrings;

@end
