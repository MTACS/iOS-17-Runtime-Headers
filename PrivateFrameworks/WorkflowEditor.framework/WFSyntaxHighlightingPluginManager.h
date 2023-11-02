
@interface WFSyntaxHighlightingPluginManager : NSObject {
    JSManagedValue * _colorScheme;
    JSContext * _context;
    JSManagedValue * _highlightingPlugin;
    unsigned long long  _maxChangedLine;
    unsigned long long  _minimumChangedLine;
    unsigned long long  _syntaxHighlightingAppearance;
    unsigned long long  _syntaxHighlightingType;
    JSManagedValue * _syntaxPlugin;
    NSMutableArray * _tokenLines;
}

@property (nonatomic, readonly) UIColor *defaultBackgroundColor;
@property (nonatomic, readonly) UIColor *defaultForegroundColor;
@property (nonatomic) unsigned long long syntaxHighlightingAppearance;
@property (nonatomic) unsigned long long syntaxHighlightingType;

- (void).cxx_destruct;
- (id)configurationFilesForAppearance:(unsigned long long)arg1;
- (void)dealloc;
- (id)defaultBackgroundColor;
- (id)defaultForegroundColor;
- (void)didAddLineAtIndex:(unsigned long long)arg1;
- (bool)didChangeLine:(unsigned long long)arg1 string:(id)arg2;
- (void)didRemoveLineAtIndex:(unsigned long long)arg1;
- (void)discardManagedReferencesForLineNumber:(unsigned long long)arg1;
- (void)highlightAllTokensWithCallback:(id /* block */)arg1;
- (id)init;
- (void)loadColorSchemePlugin;
- (void)loadHighlightingPlugin;
- (id)loadPluginUsingConfigWithModuleName:(id)arg1 module:(id)arg2;
- (void)loadPlugins;
- (void)loadSyntaxPlugin;
- (void)reloadPlugins;
- (void)setSyntaxHighlightingAppearance:(unsigned long long)arg1;
- (void)setSyntaxHighlightingType:(unsigned long long)arg1;
- (unsigned long long)syntaxHighlightingAppearance;
- (unsigned long long)syntaxHighlightingType;
- (void)unloadPlugins;

@end
