
@interface ISIconFactory : ISIcon

+ (id)_iconForURL:(id)arg1;
+ (id)_iconForURL:(id)arg1 options:(unsigned long long)arg2;

- (id)_init;
- (id)initWithApplicationBundleIdentifier:(id)arg1;
- (id)initWithApplicationExtensionBundleIdentifier:(id)arg1;
- (id)initWithApplicationIdentity:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleURL:(id)arg1 fileExtension:(id)arg2;
- (id)initWithBundleURL:(id)arg1 type:(id)arg2;
- (id)initWithFileExtension:(id)arg1;
- (id)initWithImages:(id)arg1;
- (id)initWithMIMEType:(id)arg1;
- (id)initWithModelCode:(id)arg1;
- (id)initWithResourceProxy:(id)arg1;
- (id)initWithSymbolName:(id)arg1;
- (id)initWithSymbolName:(id)arg1 configuration:(id)arg2;
- (id)initWithType:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2;

@end
