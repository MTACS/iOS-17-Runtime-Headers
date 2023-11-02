
@interface EXFrameworkScanner : NSOperation {
    NSMutableArray * __appleInternalExtensions;
    NSMutableDictionary * __combinedAppleInternalExtensionSDK;
    NSMutableDictionary * __combinedExtensionSDK;
    NSMutableArray * __extensions;
    NSURL * _sourceURL;
}

@property (retain) NSMutableArray *_appleInternalExtensions;
@property (retain) NSMutableDictionary *_combinedAppleInternalExtensionSDK;
@property (retain) NSMutableDictionary *_combinedExtensionSDK;
@property (retain) NSMutableArray *_extensions;
@property (readonly) NSArray *appleInternalExtensionPaths;
@property (readonly) NSDictionary *combinedAppleInternalExtensionSDK;
@property (readonly) NSDictionary *combinedExtensionSDK;
@property (readonly) NSArray *extensionPaths;
@property (readonly) NSURL *sourceURL;

+ (id)frameworkPaths;
+ (id)rootURL;

- (void).cxx_destruct;
- (id)_appleInternalExtensions;
- (id)_combinedAppleInternalExtensionSDK;
- (id)_combinedExtensionSDK;
- (id)_extensions;
- (id)appleInternalExtensionPaths;
- (id)combinedAppleInternalExtensionSDK;
- (id)combinedExtensionSDK;
- (void)enumerateAppexptAtURL:(id)arg1 block:(id /* block */)arg2;
- (void)enumerateBundlesWithPathExtension:(id)arg1 atURL:(id)arg2 block:(id /* block */)arg3;
- (void)enumerateFrameworksBundlesWithFrameworkURL:(id)arg1 block:(id /* block */)arg2;
- (id)extensionPaths;
- (id)initWithSourceURL:(id)arg1;
- (bool)isAppleInternalURL:(id)arg1;
- (bool)isCatalystSupportURL:(id)arg1;
- (void)main;
- (void)processExtensionSDK:(id)arg1 declaringURL:(id)arg2;
- (void)processExtensionSDKFromBundle:(struct __CFBundle { }*)arg1;
- (void)processExtensionSDKFromFile:(id)arg1;
- (void)processExtensionsFromBundle:(struct __CFBundle { }*)arg1;
- (void)processExtensionsInDirectory:(id)arg1;
- (void)set_appleInternalExtensions:(id)arg1;
- (void)set_combinedAppleInternalExtensionSDK:(id)arg1;
- (void)set_combinedExtensionSDK:(id)arg1;
- (void)set_extensions:(id)arg1;
- (id)sourceURL;

@end
