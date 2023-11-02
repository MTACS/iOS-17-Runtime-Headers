
@interface CKAttachmentSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell> {
    CKSearchAvatarSupplementryView * _avatarView;
    UIDateLabel * _dateLabel;
    NSString * _resultIdentifier;
    bool  _suppressAvatars;
    UILabel * _titleLabel;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  marginInsets;
}

@property (getter=_ck_isEditing, setter=_ck_setEditing:, nonatomic) bool _ck_editing;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } avatarOffsetLTR;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } avatarOffsetRTL;
@property (nonatomic, retain) CKSearchAvatarSupplementryView *avatarView;
@property (nonatomic, retain) UIDateLabel *dateLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double editModeHorizontalOffset;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressAvatars;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_thumbnailGenerated:(id)arg1;
- (struct CGPoint { double x1; double x2; })avatarOffsetLTR;
- (struct CGPoint { double x1; double x2; })avatarOffsetRTL;
- (id)avatarView;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (id)dateLabel;
- (double)editModeHorizontalOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)refreshForSearchTextIfNeeded:(id)arg1;
- (id)resultIdentifier;
- (void)setAvatarView:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setResultIdentifier:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSuppressAvatars:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (bool)suppressAvatars;
- (id)titleLabel;

@end
