
@interface AVTAvatarAttributeEditorSectionSupplementalPickerItem : NSObject <AVTAvatarAttributeEditorSectionSupplementalPickerItem, AVTAvatarAttributeEditorSectionSupplementalPickerItemInternal> {
    id /* block */  _avatarUpdater;
    id /* block */  _editorUpdater;
    NSString * _localizedDescription;
    NSString * _localizedName;
    bool  _selected;
}

@property (nonatomic, readonly, copy) id /* block */ avatarUpdater;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) id /* block */ editorUpdater;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)avatarUpdater;
- (id /* block */)editorUpdater;
- (id)initWithLocalizedName:(id)arg1 localizedDescription:(id)arg2 avatarUpdater:(id /* block */)arg3 editorUpdater:(id /* block */)arg4 selected:(bool)arg5;
- (bool)isSelected;
- (id)localizedDescription;
- (id)localizedName;
- (void)setSelected:(bool)arg1;

@end
