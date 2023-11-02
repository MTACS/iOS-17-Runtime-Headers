
@interface PXPeopleStripCollectionViewCell : UICollectionViewCell {
    NSArray * _groupAvatarViews;
    NSArray * _people;
}

@property (nonatomic, retain) NSArray *groupAvatarViews;
@property (nonatomic, retain) NSArray *people;

- (void).cxx_destruct;
- (void)_layoutAvatarViewsInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)focusEffect;
- (id)groupAvatarViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)people;
- (void)prepareForReuse;
- (void)setGroupAvatarViews:(id)arg1;
- (void)setPeople:(id)arg1;

@end
