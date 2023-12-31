
@interface VUIVideosImageView : UIImageView {
    UIImage * _flatImage;
    UIImage * _highlightOrSelectedImage;
    bool  _selected;
}

@property (nonatomic, retain) UIImage *highlightOrSelectedImage;

+ (id)imageWithImage:(id)arg1 existingImageView:(id)arg2;

- (void).cxx_destruct;
- (void)_updateImage;
- (id)highlightOrSelectedImage;
- (void)setHighlightOrSelectedImage:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
