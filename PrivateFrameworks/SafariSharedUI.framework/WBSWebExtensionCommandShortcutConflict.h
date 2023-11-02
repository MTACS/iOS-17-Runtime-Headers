
@interface WBSWebExtensionCommandShortcutConflict : NSObject {
    NSString * _extensionDisplayName;
    NSString * _extensionDisplayShortName;
    NSString * _shortcut;
}

@property (nonatomic, readonly, copy) NSString *extensionDisplayName;
@property (nonatomic, readonly, copy) NSString *extensionDisplayShortName;
@property (nonatomic, readonly, copy) NSString *shortcut;

- (void).cxx_destruct;
- (id)description;
- (id)extensionDisplayName;
- (id)extensionDisplayShortName;
- (id)initWithShortcut:(id)arg1 extensionDisplayName:(id)arg2 extensionDisplayShortName:(id)arg3;
- (id)shortcut;

@end
