
@interface DYToolsPluginDirectoryProvider : DYPluginDirectoryProvider {
    bool  _includePrivatePlugins;
    NSString * _toolsPluginBundle;
    NSString * _toolsPrivatePluginBundle;
}

- (void)enumerateDirectories:(id /* block */)arg1;
- (id)init;
- (id)initWithDeveloperPath:(id)arg1 includePrivatePlugins:(bool)arg2;

@end
