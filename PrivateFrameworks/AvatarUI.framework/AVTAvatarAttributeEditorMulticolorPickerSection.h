
@interface AVTAvatarAttributeEditorMulticolorPickerSection : NSObject <AVTAvatarAttributeEditorSection> {
    NSString * _identifier;
    unsigned long long  _intendedDestination;
    NSArray * _items;
    NSString * _localizedName;
    AVTAvatarAttributeEditorSectionOptions * _options;
    NSArray * _sectionItems;
    <AVTAvatarAttributeEditorSectionSupplementalPicker> * _supplementalPicker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) unsigned long long intendedDestination;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic, readonly) AVTAvatarAttributeEditorSectionOptions *options;
@property (nonatomic, readonly, copy) NSArray *sectionItems;
@property (nonatomic, readonly, copy) NSArray *sections;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } separatorInsets;
@property (readonly) Class superclass;
@property (nonatomic, retain) <AVTAvatarAttributeEditorSectionSupplementalPicker> *supplementalPicker;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 items:(id)arg3;
- (unsigned long long)intendedDestination;
- (id)items;
- (id)localizedName;
- (id)options;
- (id)sectionItems;
- (id)sections;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInsets;
- (void)setIntendedDestination:(unsigned long long)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setSupplementalPicker:(id)arg1;
- (bool)shouldDisplaySeparatorBeforeSection:(id)arg1;
- (bool)shouldDisplayTitle;
- (id)supplementalPicker;

@end
