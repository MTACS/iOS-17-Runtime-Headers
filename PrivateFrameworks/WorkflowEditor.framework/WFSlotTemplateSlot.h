
@interface WFSlotTemplateSlot : NSObject <NSCopying, WFSlotTemplateContent> {
    NSAttributedString * _contentAttributedString;
    bool  _enabled;
    WFSlotIdentifier * _identifier;
    bool  _invalid;
    NSString * _languageCode;
    NSString * _localizedName;
    NSString * _localizedPlaceholder;
    bool  _preferContextMenu;
    bool  _prefersNoWrapping;
    bool  _standaloneTextAttachment;
    long long  _userInputInsertionIndex;
}

@property (nonatomic, copy) NSAttributedString *contentAttributedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) WFSlotIdentifier *identifier;
@property (getter=isInvalid, nonatomic) bool invalid;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic, copy) NSString *localizedPlaceholder;
@property (getter=isPopulated, nonatomic, readonly) bool populated;
@property (nonatomic) bool preferContextMenu;
@property (nonatomic) bool prefersNoWrapping;
@property (nonatomic) bool standaloneTextAttachment;
@property (readonly) Class superclass;
@property (nonatomic) long long userInputInsertionIndex;

+ (id)addingSlotWithKey:(id)arg1;
+ (id)slotWithLocalizedName:(id)arg1 localizedPlaceholder:(id)arg2 key:(id)arg3;
+ (id)slotWithLocalizedName:(id)arg1 localizedPlaceholder:(id)arg2 languageCode:(id)arg3 key:(id)arg4;

- (void).cxx_destruct;
- (id)contentAttributedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithLocalizedName:(id)arg1 localizedPlaceholder:(id)arg2 languageCode:(id)arg3 identifier:(id)arg4;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isInvalid;
- (bool)isPopulated;
- (id)languageCode;
- (id)localizedName;
- (id)localizedPlaceholder;
- (void)populateWithAttributedString:(id)arg1;
- (void)populateWithIcon:(id)arg1 string:(id)arg2;
- (void)populateWithString:(id)arg1;
- (void)populateWithVariable:(id)arg1;
- (void)populateWithVariableString:(id)arg1 askVariableName:(id)arg2;
- (bool)preferContextMenu;
- (bool)prefersNoWrapping;
- (void)setContentAttributedString:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInvalid:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setLocalizedPlaceholder:(id)arg1;
- (void)setPreferContextMenu:(bool)arg1;
- (void)setPrefersNoWrapping:(bool)arg1;
- (void)setStandaloneTextAttachment:(bool)arg1;
- (void)setUserInputInsertionIndex:(long long)arg1;
- (bool)standaloneTextAttachment;
- (long long)userInputInsertionIndex;

@end
