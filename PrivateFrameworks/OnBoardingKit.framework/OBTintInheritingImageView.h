
@interface OBTintInheritingImageView : UIImageView {
    UIImage * _originalImage;
}

@property (nonatomic, retain) UIImage *originalImage;

- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2 tintColor:(id)arg3;
- (id)originalImage;
- (void)setImage:(id)arg1;
- (void)setOriginalImage:(id)arg1;
- (void)tintColorDidChange;

@end
