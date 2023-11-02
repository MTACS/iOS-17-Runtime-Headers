
@interface AVTAvatarAttributeEditorMulticolorPickerSectionItem : NSObject <AVTAvatarAttributeEditorSectionItem, AVTAvatarEditorStateUpdating, AVTAvatarUpdating> {
    id /* block */  _avatarUpdater;
    AVTAvatarAttributeEditorSectionColorItem * _colorItem;
    id /* block */  _editorStateUpdater;
    NSString * _identifier;
    bool  _isPlaceholder;
    bool  _isRemovable;
    NSString * _localizedName;
    id /* block */  _removalUpdater;
    bool  _selected;
    AVTAvatarColorVariationStore * _variationStore;
}

@property (nonatomic, readonly, copy) id /* block */ avatarUpdater;
@property (nonatomic, readonly) AVTAvatarAttributeEditorSectionColorItem *colorItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) id /* block */ editorStateUpdater;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly) bool isRemovable;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) id /* block */ removalUpdater;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AVTAvatarColorVariationStore *variationStore;

- (void).cxx_destruct;
- (id /* block */)avatarUpdater;
- (id)colorItem;
- (id /* block */)editorStateUpdater;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 isPlaceholder:(bool)arg3 isRemovable:(bool)arg4 colorItem:(id)arg5 variationStore:(id)arg6 avatarUpdater:(id /* block */)arg7 editorStateUpdater:(id /* block */)arg8 removalUpdater:(id /* block */)arg9;
- (bool)isPlaceholder;
- (bool)isRemovable;
- (bool)isSelected;
- (id)localizedName;
- (id /* block */)removalUpdater;
- (void)setSelected:(bool)arg1;
- (id)variationStore;

@end
