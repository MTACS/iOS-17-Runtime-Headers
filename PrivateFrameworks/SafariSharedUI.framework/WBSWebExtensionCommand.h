
@interface WBSWebExtensionCommand : NSObject {
    NSString * _commandDescription;
    NSString * _commandName;
    NSString * _extensionComposedIdentifier;
    UIKeyCommand * _keyCommand;
    NSArray * _modifiers;
    NSDictionary * _properties;
    NSString * _shortcut;
    NSString * _shortcutKey;
}

@property (nonatomic, readonly, copy) NSString *commandDescription;
@property (nonatomic, readonly, copy) NSString *commandName;
@property (nonatomic, readonly, copy) NSString *extensionComposedIdentifier;
@property (nonatomic, readonly) UIKeyCommand *keyCommand;
@property (nonatomic, readonly, copy) NSString *shortcut;

- (void).cxx_destruct;
- (void)_parseShortcut:(id)arg1;
- (id)commandDescription;
- (id)commandName;
- (id)description;
- (id)extensionComposedIdentifier;
- (id)initWithProperties:(id)arg1 extensionComposedIdentifier:(id)arg2 outErrorMessage:(id*)arg3;
- (id)keyCommand;
- (id)shortcut;

@end
