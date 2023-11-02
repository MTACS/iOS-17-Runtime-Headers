
@interface PXPeopleCollectionViewCell : UICollectionViewCell <PXPeopleBadgeViewDelegate> {
    UIImageView * _avatarView;
    PXPeopleBadgeView * _badgeView;
    bool  _favorite;
    UIView * _highlightOverlayView;
    NSString * _name;
    UILabel * _nameLabel;
    <PXPeopleCollectionViewCellDelegate> * _peopleCellDelegate;
    bool  _ppt_fullImageLoaded;
    unsigned long long  _selectionStyle;
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
    NSUUID * _uuid;
}

@property (nonatomic, readonly) UIImageView *avatarView;
@property (nonatomic, readonly) PXPeopleBadgeView *badgeView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFavorite, nonatomic) bool favorite;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *highlightOverlayView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic) <PXPeopleCollectionViewCellDelegate> *peopleCellDelegate;
@property (nonatomic) bool ppt_fullImageLoaded;
@property (nonatomic) unsigned long long selectionStyle;
@property (readonly) Class superclass;
@property (nonatomic) double textAlpha;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_computeCircumferenceMultipliersForAngle:(double)arg1;
- (void)_updateBadgeViewState;
- (void)_updateFocusRingForced:(bool)arg1;
- (void)_updateSelection;
- (void)_updateTitleAndFavoriteBadgeForLayoutChange;
- (id)avatarView;
- (id)badgeView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)favoriteTappedForBadgeView:(id)arg1;
- (id)focusEffect;
- (id)highlightOverlayView;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFavorite;
- (void)layoutSubviews;
- (id)name;
- (id)nameLabel;
- (id)peopleCellDelegate;
- (bool)ppt_fullImageLoaded;
- (void)prepareForReuse;
- (unsigned long long)selectionStyle;
- (void)setFavorite:(bool)arg1;
- (void)setHighlightOverlayView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 normalizedFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setName:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPeopleCellDelegate:(id)arg1;
- (void)setPpt_fullImageLoaded:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionStyle:(unsigned long long)arg1;
- (void)setTextAlpha:(double)arg1;
- (double)textAlpha;
- (void)toggleFavorite:(id)arg1;
- (void)unfavoriteTappedForBadgeView:(id)arg1;
- (id)uuid;

@end
