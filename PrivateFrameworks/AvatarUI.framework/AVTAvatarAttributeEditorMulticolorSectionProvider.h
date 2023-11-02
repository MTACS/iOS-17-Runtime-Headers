
@interface AVTAvatarAttributeEditorMulticolorSectionProvider : NSObject <AVTAvatarAttributeEditorSectionProvider> {
    bool  _allowsRemoval;
    AVTAvatarAttributeEditorState * _editorState;
    NSString * _identifier;
    NSString * _localizedName;
    NSDictionary * _nestedPresetPickers;
    NSArray * _pickerItems;
    AVTAvatarAttributeEditorMulticolorPickerSection * _pickerSection;
    NSArray * _subpickerRemovalUpdaters;
    NSArray * _subpickers;
    NSArray * _subsections;
    AVTAvatarAttributeEditorSectionSupplementalPicker * _supplementalPicker;
}

@property (getter=allowsRemoval, nonatomic, readonly) bool allowsRemoval;
@property (nonatomic, readonly) AVTAvatarAttributeEditorState *editorState;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, retain) NSDictionary *nestedPresetPickers;
@property (nonatomic, retain) NSArray *pickerItems;
@property (nonatomic, retain) AVTAvatarAttributeEditorMulticolorPickerSection *pickerSection;
@property (nonatomic, readonly, copy) NSArray *sections;
@property (nonatomic, readonly) NSArray *subpickerRemovalUpdaters;
@property (nonatomic, retain) NSArray *subpickers;
@property (nonatomic, readonly) NSArray *subsections;
@property (nonatomic, retain) AVTAvatarAttributeEditorSectionSupplementalPicker *supplementalPicker;

- (void).cxx_destruct;
- (bool)allowsRemoval;
- (void)createPickerSectionIfNeeded;
- (id)editorState;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 subpickers:(id)arg3 nestedPresetPickers:(id)arg4 supplementalPicker:(id)arg5 pickerItems:(id)arg6 editorState:(id)arg7;
- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 subpickers:(id)arg3 subpickerRemovalUpdaters:(id)arg4 nestedPresetPickers:(id)arg5 supplementalPicker:(id)arg6 pickerItems:(id)arg7 editorState:(id)arg8;
- (id)initWithLocalizedName:(id)arg1 subpickers:(id)arg2 nestedPresetPickers:(id)arg3 supplementalPicker:(id)arg4 pickerItems:(id)arg5 editorState:(id)arg6;
- (id)localizedName;
- (id)nestedPresetPickers;
- (id)pickerItems;
- (id)pickerSection;
- (id)sections;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setNestedPresetPickers:(id)arg1;
- (void)setPickerItems:(id)arg1;
- (void)setPickerSection:(id)arg1;
- (void)setSubpickers:(id)arg1;
- (void)setSupplementalPicker:(id)arg1;
- (id)subpickerRemovalUpdaters;
- (id)subpickerSectionIdentifiers;
- (id)subpickers;
- (id)subsections;
- (id)supplementalPicker;

@end
