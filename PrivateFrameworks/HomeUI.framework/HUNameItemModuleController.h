
@interface HUNameItemModuleController : HUItemModuleController <HUIconPickerViewControllerDelegate, HUNameAndIconEditorCellDelegate> {
    bool  _nameFieldHasClearButton;
    HUNameItemModule * _nameModule;
    HFNamingComponents * _namingComponent;
    bool  _shouldUseAccessoryName;
    bool  _showIcon;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool nameFieldHasClearButton;
@property (nonatomic, retain) HUNameItemModule *nameModule;
@property (nonatomic, retain) HFNamingComponents *namingComponent;
@property (nonatomic) bool shouldUseAccessoryName;
@property (nonatomic) bool showIcon;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsCustomIconEditing;

- (void).cxx_destruct;
- (id)_builderName;
- (void)_cleanupTextFieldSetBuilderName;
- (void)_setBuilderName:(id)arg1;
- (void)cancelNameEdit;
- (Class)cellClassForItem:(id)arg1;
- (Class)collectionCellClassForItem:(id)arg1;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (void)iconPicker:(id)arg1 didPickIconDescriptor:(id)arg2;
- (void)iconPickerDidCancel:(id)arg1;
- (id)initWithModule:(id)arg1 host:(id)arg2;
- (void)nameAndIconEditorCellDidTapIcon:(id)arg1;
- (bool)nameFieldHasClearButton;
- (id)nameModule;
- (id)namingComponent;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (id)prepareForCommit;
- (void)setNameFieldHasClearButton:(bool)arg1;
- (void)setNameModule:(id)arg1;
- (void)setNamingComponent:(id)arg1;
- (void)setShouldUseAccessoryName:(bool)arg1;
- (void)setShowIcon:(bool)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (bool)shouldManageTextFieldForItem:(id)arg1;
- (bool)shouldUseAccessoryName;
- (bool)showIcon;
- (bool)supportsCustomIconEditing;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
