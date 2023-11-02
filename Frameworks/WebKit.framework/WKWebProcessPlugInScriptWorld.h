
@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleScriptWorld> { 
        struct type { 
            unsigned char __lx[32]; 
        } data; 
    }  _world;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly) void*_scriptWorld;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)normalWorld;
+ (id)world;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void*)_scriptWorld;
- (void)clearWrappers;
- (void)dealloc;
- (void)disableOverrideBuiltinsBehavior;
- (void)makeAllShadowRootsOpen;
- (id)name;

@end
