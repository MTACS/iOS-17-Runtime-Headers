
@interface SFWebExtensionButtonConfiguration : NSObject {
    unsigned long long  _activeExtensionCount;
    bool  _alwaysShowMultipleExtensionsButton;
    NSArray * _buttons;
    SFWebExtensionsController * _webExtensionsController;
}

@property (nonatomic, readonly) unsigned long long activeExtensionCount;
@property (nonatomic, readonly) bool alwaysShowMultipleExtensionsButton;
@property (nonatomic, readonly) NSArray *buttons;
@property (nonatomic, readonly) SFWebExtensionsController *webExtensionsController;

- (void).cxx_destruct;
- (unsigned long long)activeExtensionCount;
- (bool)alwaysShowMultipleExtensionsButton;
- (id)buttons;
- (id)initWithActiveExtensionCount:(unsigned long long)arg1 alwaysShowMultipleExtensionsButton:(bool)arg2 buttons:(id)arg3 extensionsController:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)webExtensionsController;

@end
