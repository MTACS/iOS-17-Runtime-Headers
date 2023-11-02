
@interface BSCFBundle : NSObject {
    struct __CFBundle { } * _cfBundle;
}

- (id)bundleIdentifier;
- (id)bundlePath;
- (struct __CFBundle { }*)cfBundle;
- (void)dealloc;
- (id)description;
- (id)executablePath;
- (id)infoDictionary;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)localizedInfoDictionary;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;

@end
