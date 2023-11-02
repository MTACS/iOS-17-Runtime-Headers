
@interface PXSharedLibraryRulePersonCell : UICollectionViewCell {
    UIImageView * _faceImageView;
    UIButton * _minusButton;
    UIImageView * _minusImageView;
    UILabel * _nameLabel;
    UIImageView * _plusImageView;
    SEL  _removeAction;
    id  _removeTarget;
    UILabel * _subtitleLabel;
}

@property (nonatomic, readonly) UIImageView *faceImageView;
@property (nonatomic, retain) PHPerson *imagePerson;
@property (nonatomic, readonly) UIButton *minusButton;
@property (nonatomic, readonly) UIImageView *minusImageView;
@property (nonatomic, readonly) UILabel *nameLabel;
@property (nonatomic, readonly) UIImageView *plusImageView;
@property (nonatomic) SEL removeAction;
@property (nonatomic) id removeTarget;
@property (nonatomic, readonly) UILabel *subtitleLabel;

- (void).cxx_destruct;
- (void)_updateMinusButton;
- (id)faceImageView;
- (id)imagePerson;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)minusButton;
- (id)minusImageView;
- (id)nameLabel;
- (id)plusImageView;
- (void)prepareForReuse;
- (void)remove:(id)arg1;
- (SEL)removeAction;
- (id)removeTarget;
- (void)setImagePerson:(id)arg1;
- (void)setRemoveAction:(SEL)arg1;
- (void)setRemoveTarget:(id)arg1;
- (id)subtitleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
