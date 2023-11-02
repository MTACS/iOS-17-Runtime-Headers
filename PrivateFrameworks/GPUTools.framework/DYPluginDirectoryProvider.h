
@interface DYPluginDirectoryProvider : NSObject {
    NSURL * _developerDirectory;
}

- (void)enumerateDirectories:(id /* block */)arg1;
- (id)getPlatformDirectoriesWithBundleName:(id)arg1;
- (id)init;

@end
