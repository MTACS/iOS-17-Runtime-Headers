
@interface CKAcknowledgmentIconCollectionReusableView : UICollectionReusableView {
    UIImageView * _glyphImageView;
}

@property (nonatomic, retain) UIImageView *glyphImageView;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (void).cxx_destruct;
- (void)configureWithAcknowledgmentTally:(id)arg1;
- (id)glyphImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setGlyphImageView:(id)arg1;

@end
