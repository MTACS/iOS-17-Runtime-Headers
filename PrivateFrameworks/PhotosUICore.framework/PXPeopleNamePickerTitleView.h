
@interface PXPeopleNamePickerTitleView : UIView <PXPhotoLibraryUIChangeObserver> {
    PXPeopleScalableAvatarView * _avatarView;
    PHFace * _face;
    NSMutableArray * _fetchResults;
    NSString * _localizedName;
    UITextField * _nameField;
    UIFont * _nameFont;
    PHPerson * _person;
    NSString * _placeholder;
    UIFont * _placeholderFont;
}

@property (nonatomic, readonly) PXPeopleScalableAvatarView *avatarView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PHFace *face;
@property (nonatomic, readonly) NSMutableArray *fetchResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic, readonly) UITextField *nameField;
@property (nonatomic, retain) UIFont *nameFont;
@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, retain) UIFont *placeholderFont;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateFieldPlaceholder;
- (void)_updateFieldText;
- (id)avatarView;
- (void)dealloc;
- (id)face;
- (id)fetchResults;
- (void)finishEditing;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 face:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 person:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 person:(id)arg2 face:(id)arg3;
- (id)localizedName;
- (id)nameField;
- (id)nameFont;
- (id)person;
- (id)placeholder;
- (id)placeholderFont;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)resetImages;
- (void)setLocalizedName:(id)arg1;
- (void)setNameFont:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPlaceholderFont:(id)arg1;

@end
