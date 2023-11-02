
@interface SFAvatarStackView : UIView {
    long long  _alignment;
    double  _avatarDiameter;
    NSMutableDictionary * _avatarViewControllersByParticipantIdentifier;
    NSMutableDictionary * _contactsByParticipantIdentifer;
    UILabel * _overflowLabel;
    UIView * _overflowView;
    NSArray * _shareParticipants;
    double  _spacing;
    NSArray * _visibleParticipantIdentifiers;
}

@property (nonatomic) long long alignment;
@property (nonatomic) double avatarDiameter;
@property (nonatomic, copy) NSArray *shareParticipants;
@property (nonatomic) double spacing;

+ (id)randomContactIdentifiers;

- (void).cxx_destruct;
- (id)_avatarViewControllerForParticipantIdentifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectForContentWidth:(double)arg1 viewWith:(double)arg2;
- (void)_layOutIndexes:(id)arg1 ofParticipantIdentifiers:(id)arg2 targetWidth:(id)arg3;
- (void)_loadOverflowView;
- (id)_overflowLabel;
- (id)_overflowView;
- (void)_removeViewsForIndexes:(id)arg1 ofParticipantIdentifiers:(id)arg2;
- (void)_setIndexes:(id)arg1 ofParticipantIdentifiers:(id)arg2 transitioning:(bool)arg3 completion:(id /* block */)arg4;
- (void)_setVisibleParticipantIdentifiers:(id)arg1;
- (void)_updateVisibleParticipants;
- (id)_viewForParticipantIdentifier:(id)arg1;
- (double)_widthForParticipantCount:(long long)arg1;
- (long long)alignment;
- (double)avatarDiameter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setAlignment:(long long)arg1;
- (void)setAvatarDiameter:(double)arg1;
- (void)setShareParticipants:(id)arg1;
- (void)setSpacing:(double)arg1;
- (id)shareParticipants;
- (struct CGSize { double x1; double x2; })sizeForParticipantCount:(long long)arg1;
- (double)spacing;

@end
