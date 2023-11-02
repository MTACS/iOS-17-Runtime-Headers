
@interface AVTAvatarAttributeEditorColorSection : NSObject <AVTAvatarAttributeEditorColorSection> {
    bool  _alwaysShowExtended;
    AVTAvatarColorVariationStore * _colorVariationStore;
    NSArray * _extendedItems;
    NSString * _identifier;
    unsigned long long  _intendedDestination;
    NSString * _localizedName;
    AVTAvatarAttributeEditorSectionOptions * _options;
    NSArray * _primaryItems;
    <AVTAvatarAttributeEditorSectionSupplementalPicker> * _supplementalPicker;
}

@property (nonatomic, readonly) bool alwaysShowExtended;
@property (nonatomic, readonly) AVTAvatarColorVariationStore *colorVariationStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *extendedItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) unsigned long long intendedDestination;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic, readonly) AVTAvatarAttributeEditorSectionOptions *options;
@property (nonatomic, readonly, copy) NSArray *primaryItems;
@property (nonatomic, readonly, copy) NSArray *sectionItems;
@property (nonatomic, readonly, copy) NSArray *sections;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } separatorInsets;
@property (readonly) Class superclass;
@property (nonatomic, retain) <AVTAvatarAttributeEditorSectionSupplementalPicker> *supplementalPicker;

- (void).cxx_destruct;
- (bool)alwaysShowExtended;
- (id)colorVariationStore;
- (id)copyWithoutTitle;
- (id)description;
- (id)extendedItems;
- (id)identifier;
- (id)initWithPrimaryItems:(id)arg1 extendedItems:(id)arg2 colorVariationStore:(id)arg3 localizedName:(id)arg4 identifier:(id)arg5 intendedDestination:(unsigned long long)arg6 alwaysShowExtended:(bool)arg7 options:(id)arg8;
- (unsigned long long)intendedDestination;
- (id)localizedName;
- (id)options;
- (id)primaryItems;
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
