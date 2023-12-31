
@interface PXPeopleDetailSettingsCollectionViewCell : UICollectionViewCell {
    UIView * _actionIndicatorView;
    UIImageView * _avatarView;
    bool  _isFavorite;
    NSString * _name;
    UILabel * _nameLabel;
    unsigned long long  _photoQuantity;
    UILabel * _quantityLabel;
    NSNumberFormatter * _quantityNumberFormatter;
    UIView * _selectionView;
    double  _textAlpha;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unitRect;
}

@property (getter=isActionIndicatorHidden, nonatomic) bool actionIndicatorHidden;
@property (nonatomic, retain) UIView *actionIndicatorView;
@property (nonatomic, readonly) UIImageView *avatarView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool isFavorite;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic) unsigned long long photoQuantity;
@property (nonatomic, retain) UILabel *quantityLabel;
@property (nonatomic, retain) UIView *selectionView;
@property (nonatomic) double textAlpha;

+ (double)preferredHeightForWidth:(double)arg1 forAvatarPercentage:(double)arg2 withSizeClass:(long long)arg3 isFavorite:(bool)arg4;

- (void).cxx_destruct;
- (id)_placeHolderColor;
- (long long)_preferredSizeClass;
- (void)_updateType;
- (id)actionIndicatorView;
- (double)avatarCenterYOffset;
- (id)avatarView;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isActionIndicatorHidden;
- (bool)isFavorite;
- (void)layoutSubviews;
- (id)name;
- (id)nameLabel;
- (unsigned long long)photoQuantity;
- (void)prepareForReuse;
- (id)quantityLabel;
- (id)selectionView;
- (void)setActionIndicatorHidden:(bool)arg1;
- (void)setActionIndicatorView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 normalizedFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setIsFavorite:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPhotoQuantity:(unsigned long long)arg1;
- (void)setQuantityLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionView:(id)arg1;
- (void)setTextAlpha:(double)arg1;
- (double)textAlpha;
- (void)traitCollectionDidChange:(id)arg1;

@end
