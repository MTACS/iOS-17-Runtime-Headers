
@interface WKContentWorld : NSObject <WKObject> {
    struct ObjectStorage<API::ContentWorld> { 
        struct type { 
            unsigned char __lx[40]; 
        } data; 
    }  _contentWorld;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly, copy) _WKUserContentWorld *_userContentWorld;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)defaultClientWorld;
+ (id)pageWorld;
+ (id)worldWithName:(id)arg1;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)_userContentWorld;
- (void)dealloc;
- (id)name;

@end
