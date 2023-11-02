
@interface VUIFamilyMemberCell : VUIListCollectionViewCell <VUIFamilyMemberDelegate> {
    VUISeparatorView * _bottomSeparatorView;
    VUIVideosImageView * _chevronImageView;
    VUIFamilyMember * _familyMember;
    _TVImageView * _familyMemberImageView;
    TVImageLayout * _monogramImageLayout;
    _TVMonogramView * _monogramView;
    VUILabel * _nameLabel;
}

@property (nonatomic, retain) VUISeparatorView *bottomSeparatorView;
@property (nonatomic, retain) VUIVideosImageView *chevronImageView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIFamilyMember *familyMember;
@property (nonatomic, retain) _TVImageView *familyMemberImageView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TVImageLayout *monogramImageLayout;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } monogramSize;
@property (nonatomic, retain) _TVMonogramView *monogramView;
@property (nonatomic, retain) VUILabel *nameLabel;
@property (readonly) Class superclass;

+ (id)_monogramViewForFamilyMemberCell:(id)arg1;
+ (void)configureVUIFamilyMemberCell:(id)arg1 withFamilyMember:(id)arg2 metricsOnly:(bool)arg3;
+ (double)maxMonogramHeight;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_iOS_layoutSubviewsWithSize:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (id)bottomSeparatorView;
- (id)chevronImageView;
- (void)configureMonogramImageLayoutForWindowWidth:(double)arg1;
- (id)familyMember;
- (void)familyMember:(id)arg1 photoRequestDidCompleteWithImage:(id)arg2;
- (id)familyMemberImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)monogramImageLayout;
- (struct CGSize { double x1; double x2; })monogramSize;
- (id)monogramView;
- (id)nameLabel;
- (void)prepareForReuse;
- (void)setBottomSeparatorView:(id)arg1;
- (void)setChevronImageView:(id)arg1;
- (void)setFamilyMember:(id)arg1;
- (void)setFamilyMemberImageView:(id)arg1;
- (void)setMonogramImageLayout:(id)arg1;
- (void)setMonogramView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
