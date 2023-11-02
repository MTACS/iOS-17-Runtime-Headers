
@interface _NTKCGalleryCollectionCell : UICollectionViewCell {
    UIImage * _calloutImage;
    NSString * _calloutName;
    UIStackView * _contentStack;
    NTKCFaceContainerView * _faceContainerView;
    UIFontMetrics * _fontMetrics;
    UILabel * _nameLabel;
}

@property (nonatomic) bool active;
@property (nonatomic, retain) UIImage *calloutImage;
@property (nonatomic, copy) NSString *calloutName;
@property (nonatomic, retain) NTKCFaceContainerView *faceContainerView;
@property (nonatomic, retain) UIView *faceView;
@property (nonatomic, retain) UIFontMetrics *fontMetrics;

+ (id)agaveReuseIdentifier;
+ (id)aloeReuseIdentifier;
+ (id)classicReuseIdentifier;
+ (id)luxoReuseIdentifier;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_highlight;
- (bool)active;
- (id)calloutImage;
- (id)calloutName;
- (void)dealloc;
- (id)faceContainerView;
- (id)faceView;
- (id)fontMetrics;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setActive:(bool)arg1;
- (void)setCalloutImage:(id)arg1;
- (void)setCalloutName:(id)arg1;
- (void)setFaceContainerView:(id)arg1;
- (void)setFaceView:(id)arg1;
- (void)setFontMetrics:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
