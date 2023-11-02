
@interface _WKCustomHeaderFields : NSObject <WKObject> {
    struct ObjectStorage<API::CustomHeaderFields> { 
        struct type { 
            unsigned char __lx[48]; 
        } data; 
    }  _fields;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *fields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *thirdPartyDomains;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)dealloc;
- (id)fields;
- (id)init;
- (void)setFields:(id)arg1;
- (void)setThirdPartyDomains:(id)arg1;
- (id)thirdPartyDomains;

@end
