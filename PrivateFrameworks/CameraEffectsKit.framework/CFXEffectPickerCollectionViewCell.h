
@interface CFXEffectPickerCollectionViewCell : UICollectionViewCell {
    CFXEffect * _effect;
    NSString * _effectIdentifier;
    JFXImageView * _imageView;
}

@property (nonatomic, retain) CFXEffect *effect;
@property (nonatomic, retain) NSString *effectIdentifier;
@property (nonatomic, retain) JTImage *image;
@property (nonatomic, retain) JFXImageView *imageView;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)awakeFromNib;
- (void)configureCellAppearence;
- (id)effect;
- (id)effectIdentifier;
- (id)image;
- (id)imageView;
- (bool)isAccessibilityElement;
- (void)prepareForReuse;
- (void)setEffect:(id)arg1;
- (void)setEffectIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;

@end
