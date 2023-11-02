
@interface _WKInspectorDebuggableInfo : NSObject <NSCopying, WKObject> {
    struct ObjectStorage<API::DebuggableInfo> { 
        struct type { 
            unsigned char __lx[56]; 
        } data; 
    }  _debuggableInfo;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long debuggableType;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *targetBuildVersion;
@property (nonatomic) bool targetIsSimulator;
@property (nonatomic, copy) NSString *targetPlatformName;
@property (nonatomic, copy) NSString *targetProductVersion;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)debuggableType;
- (id)init;
- (void)setDebuggableType:(long long)arg1;
- (void)setTargetBuildVersion:(id)arg1;
- (void)setTargetIsSimulator:(bool)arg1;
- (void)setTargetPlatformName:(id)arg1;
- (void)setTargetProductVersion:(id)arg1;
- (id)targetBuildVersion;
- (bool)targetIsSimulator;
- (id)targetPlatformName;
- (id)targetProductVersion;

@end
