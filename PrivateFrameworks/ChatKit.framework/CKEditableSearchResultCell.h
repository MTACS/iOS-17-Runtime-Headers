
@interface CKEditableSearchResultCell : UICollectionViewCell {
    bool  __ck_editing;
    UIImageView * _checkmarkView;
    UIImageView * _imageView;
    UIImageView * _selectionOverlay;
}

@property (getter=_ck_isEditing, setter=_ck_setEditing:, nonatomic) bool _ck_editing;
@property (nonatomic, retain) UIImageView *checkmarkView;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIImageView *selectionOverlay;

- (void).cxx_destruct;
- (bool)_ck_isEditing;
- (void)_ck_setEditing:(bool)arg1;
- (id)checkmarkView;
- (id)imageView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)selectionOverlay;
- (void)setCheckmarkView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionOverlay:(id)arg1;

@end
