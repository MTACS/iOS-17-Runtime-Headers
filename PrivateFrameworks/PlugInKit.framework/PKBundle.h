
@interface PKBundle : NSObject {
    NSObject<OS_xpc_object> * __bundle;
    NSString * _supportPath;
}

@property (retain) NSObject<OS_xpc_object> *_bundle;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *executablePath;
@property (readonly) NSDictionary *infoDictionary;
@property (readonly) NSString *path;
@property (readonly) NSString *plugInsPath;
@property (readonly) NSString *supportPath;
@property (readonly) NSURL *url;

- (void).cxx_destruct;
- (id)_bundle;
- (id)bundleDirectory:(id)arg1;
- (id)bundleIdentifier;
- (id)executablePath;
- (id)infoDictionary;
- (id)initForMainBundle;
- (id)initWithExecutablePath:(id)arg1;
- (id)initWithExecutableURL:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithXPCBundle:(id)arg1;
- (id)path;
- (id)plugInsPath;
- (void)set_bundle:(id)arg1;
- (id)stringProperty:(int)arg1;
- (id)supportPath;
- (id)url;

@end
