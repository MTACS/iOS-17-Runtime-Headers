
@interface _WKWebAuthenticationAssertionResponse : NSObject <WKObject> {
    struct ObjectStorage<API::WebAuthenticationAssertionResponse> { 
        struct type { 
            unsigned char __lx[24]; 
        } data; 
    }  _response;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly, copy) NSString *accessGroup;
@property (nonatomic, readonly, copy) NSData *credentialID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *group;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool synchronizable;
@property (nonatomic, readonly, copy) NSData *userHandle;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)accessGroup;
- (id)credentialID;
- (void)dealloc;
- (id)displayName;
- (id)group;
- (id)name;
- (void)setLAContext:(id)arg1;
- (bool)synchronizable;
- (id)userHandle;

@end
