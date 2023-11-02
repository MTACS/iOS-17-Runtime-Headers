
@interface _UIKeyShortcutHUDModel : NSObject <NSSecureCoding> {
    NSMapTable * _appKeyCommandToModelKeyCommandMap;
    NSMapTable * _displayableAppKeyCommandToModelShortcutMap;
    NSMutableSet * _equivalentKeyCommandsInPriorityAlreadyEnumerated;
    struct __GSKeyboard { } * _gsKeyboard;
    _UIKeyShortcutHUDMenu * _menu;
    NSMutableDictionary * _modelKeyCommandToAppKeyCommandMap;
    NSMapTable * _modelKeyCommandToModelShortcutMap;
    NSMutableSet * _modelKeyCommands;
    NSMutableSet * _performableAppKeyCommands;
    _UIMenuLeafValidation * _validation;
}

@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly) _UIKeyShortcutHUDMenu *menu;
@property (nonatomic, retain) NSMutableDictionary *modelKeyCommandToAppKeyCommandMap;
@property (nonatomic, retain) NSMapTable *modelKeyCommandToModelShortcutMap;
@property (nonatomic, retain) NSMutableSet *modelKeyCommands;

+ (id)modelForCurrentMenu;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addShortcutsFromHUDMenu:(id)arg1 toShortcutsArray:(id)arg2;
- (void)_buildMenu;
- (void)_enumerateKeyCommandsInMenu:(id)arg1 block:(id /* block */)arg2;
- (id)_finalizedHUDMenuFromValidatedHUDMenu:(id)arg1;
- (bool)_isKeyCommandPerformable:(id)arg1 outTarget:(out id*)arg2;
- (id)_menuByOmittingNonKeyCommandsInMenu:(id)arg1;
- (id)_responderBasedKeyCommandsStartingAtResponder:(id)arg1;
- (id)_sanitizedMainMenu;
- (void)_validateBaseKeyCommand:(id)arg1 usingAlternate:(id)arg2;
- (void)_validateKeyCommandAndAlternates:(id)arg1;
- (id)_validatedHUDMenuFromUIMenu:(id)arg1;
- (id)appKeyCommandForSelectedKeyCommand:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (id)menu;
- (id)menuWithAlternatesForModifierFlags:(long long)arg1;
- (id)modelKeyCommandToAppKeyCommandMap;
- (id)modelKeyCommandToModelShortcutMap;
- (id)modelKeyCommands;
- (id)modelKeyCommandsExcludingHUDCommands:(id)arg1;
- (id)modelShortcutForModelKeyCommand:(id)arg1;
- (id)originalTargetForSelectedKeyCommand:(id)arg1;
- (id)searchMenuWithSearchText:(id)arg1 maxSearchResultEntries:(unsigned long long)arg2;
- (void)setModelKeyCommandToAppKeyCommandMap:(id)arg1;
- (void)setModelKeyCommandToModelShortcutMap:(id)arg1;
- (void)setModelKeyCommands:(id)arg1;

@end
