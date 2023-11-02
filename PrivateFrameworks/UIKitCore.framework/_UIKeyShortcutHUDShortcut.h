
@interface _UIKeyShortcutHUDShortcut : _UIKeyShortcutHUDMenuElement <NSSecureCoding> {
    UICommandAlternate * _alternateForBaseShortcut;
    NSMutableDictionary * _alternatesMap;
    _UIKeyShortcutHUDShortcut * _baseShortcutForAlternate;
    UIKeyCommand * _discoverabilityUIKeyCommand;
    NSMutableArray * _displayableAlternates;
    id  _originalTarget;
    NSString * _overrideTitle;
}

@property (nonatomic) UICommandAlternate *alternateForBaseShortcut;
@property (nonatomic, readonly) NSMutableDictionary *alternatesMap;
@property (nonatomic, readonly) unsigned long long attributes;
@property (nonatomic) _UIKeyShortcutHUDShortcut *baseShortcutForAlternate;
@property (nonatomic, readonly) NSString *discoverabilityTitle;
@property (nonatomic, retain) UIKeyCommand *discoverabilityUIKeyCommand;
@property (nonatomic, readonly) NSMutableArray *displayableAlternates;
@property (nonatomic, readonly) NSString *hudTitle;
@property (nonatomic, readonly) NSString *input;
@property (nonatomic, readonly) bool isPasteShortcut;
@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic) id originalTarget;
@property (nonatomic, readonly) NSArray *shortcutAlternates;
@property (nonatomic, readonly) UIKeyCommand *uiKeyCommand;

+ (id)shortcutWithUIKeyCommand:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_acceptMenuVisit:(id /* block */)arg1 shortcutVisit:(id /* block */)arg2;
- (bool)_isEquivalentToPasteAndMatchStyleShortcut;
- (bool)_isEquivalentToPasteShortcut;
- (void)_updateOverrideTitle;
- (id)alternateForBaseShortcut;
- (id)alternatesMap;
- (unsigned long long)attributes;
- (id)baseShortcutForAlternate;
- (id)discoverabilityTitle;
- (id)discoverabilityUIKeyCommand;
- (id)displayableAlternates;
- (void)encodeWithCoder:(id)arg1;
- (id)hudTitle;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (bool)isPasteShortcut;
- (long long)modifierFlags;
- (id)originalTarget;
- (void)setAlternateForBaseShortcut:(id)arg1;
- (void)setBaseShortcutForAlternate:(id)arg1;
- (void)setDiscoverabilityUIKeyCommand:(id)arg1;
- (void)setOriginalTarget:(id)arg1;
- (id)shortcutAlternates;
- (id)shortcutToDisplayForModifierFlags:(long long)arg1;
- (id)uiKeyCommand;

@end
