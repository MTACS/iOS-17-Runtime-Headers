
@interface WKSecurityOrigin : NSObject <WKObject> {
    struct ObjectStorage<API::SecurityOrigin> { 
        struct type { 
            unsigned char __lx[48]; 
        } data; 
    }  _securityOrigin;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *host;
@property (nonatomic, readonly) long long port;
@property (nonatomic, readonly, copy) NSString *protocol;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)dealloc;
- (id)description;
- (id)host;
- (bool)isSameSiteAsOrigin:(id)arg1;
- (bool)isSameSiteAsURL:(id)arg1;
- (long long)port;
- (id)protocol;

@end
