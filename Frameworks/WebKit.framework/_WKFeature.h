
@interface _WKFeature : NSObject <WKObject> {
    struct ObjectStorage<API::Feature> { 
        struct type { 
            unsigned char __lx[48]; 
        } data; 
    }  _wrappedFeature;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) unsigned long long category;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool defaultValue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *details;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long status;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (unsigned long long)category;
- (void)dealloc;
- (bool)defaultValue;
- (id)description;
- (id)details;
- (bool)isHidden;
- (bool)isKindOfClass:(Class)arg1;
- (id)key;
- (id)name;
- (unsigned long long)status;

@end
