
@interface CKConversationAvatarSearchResultCell : UICollectionViewCell <CKSearchResultCell, CNAvatarViewDelegate> {
    CKAvatarView * _avatarView;
    bool  _ck_editing;
    CKConversation * _conversation;
    CKLabel * _nameLabel;
    NSString * _resultIdentifier;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  marginInsets;
}

@property (getter=_ck_isEditing, setter=_ck_setEditing:, nonatomic) bool _ck_editing;
@property (nonatomic, retain) CKAvatarView *avatarView;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic, retain) CKLabel *nameLabel;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (readonly) Class superclass;

+ (long long)_titleIconImageTypeForConversation:(id)arg1;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (bool)_ck_isEditing;
- (void)_ck_setEditing:(bool)arg1;
- (void)_configureAvatarViewForConversation:(id)arg1;
- (void)_configureNameLabelForConversation:(id)arg1 searchText:(id)arg2;
- (id)avatarView;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (id)conversation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (id)nameLabel;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)refreshForSearchTextIfNeeded:(id)arg1;
- (id)resultIdentifier;
- (void)setAvatarView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNameLabel:(id)arg1;
- (void)setResultIdentifier:(id)arg1;

@end
