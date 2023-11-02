
@interface DYStandardPluginDirectoryProvider : DYPluginDirectoryProvider {
    NSBundle * _bundle;
    bool  _includeBundleDirectory;
    bool  _includeDeveloperDirectory;
}

+ (id)_developerDirectory;

- (void)dealloc;
- (void)enumerateDirectories:(id /* block */)arg1;
- (id)init;
- (id)initWithBundle:(id)arg1 includeDeveloperDirectory:(bool)arg2 includeBundleDirectory:(bool)arg3;

@end
