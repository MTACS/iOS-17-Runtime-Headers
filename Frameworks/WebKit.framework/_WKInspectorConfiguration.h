
@interface _WKInspectorConfiguration : NSObject <NSCopying, WKObject> {
    struct ObjectStorage<API::InspectorConfiguration> { 
        struct type { 
            unsigned char __lx[40]; 
        } data; 
    }  _configuration;
    NSString * _groupIdentifier;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WKProcessPool *processPool;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)applyToWebViewConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)groupIdentifier;
- (id)init;
- (id)processPool;
- (void)setGroupIdentifier:(id)arg1;
- (void)setProcessPool:(id)arg1;
- (void)setURLSchemeHandler:(id)arg1 forURLScheme:(id)arg2;

@end
