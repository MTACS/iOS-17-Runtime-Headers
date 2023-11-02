
@interface CKSearchAvatarSupplementryView : UICollectionReusableView <CKSearchResultSupplementryCell> {
    CKSpotlightQueryResult * _associatedResult;
    CKAvatarView * _avatarView;
    CNContact * _contact;
    unsigned long long  _parentContentType;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  marginInsets;
}

@property (nonatomic, retain) CKSpotlightQueryResult *associatedResult;
@property (nonatomic, retain) CKAvatarView *avatarView;
@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic) unsigned long long parentContentType;
@property (readonly) Class superclass;

+ (double)desiredZPosition;
+ (id)reuseIdentifier;
+ (id)supplementaryViewType;

- (void).cxx_destruct;
- (void)_parentPreviewDidChange:(id)arg1;
- (void)_updateVisibilityIfNeeded;
- (id)associatedResult;
- (id)avatarView;
- (id)contact;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (unsigned long long)parentContentType;
- (void)prepareForReuse;
- (void)setAssociatedResult:(id)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setParentContentType:(unsigned long long)arg1;

@end
