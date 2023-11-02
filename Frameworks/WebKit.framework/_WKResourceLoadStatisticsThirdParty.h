
@interface _WKResourceLoadStatisticsThirdParty : NSObject <WKObject> {
    struct ObjectStorage<API::ResourceLoadStatisticsThirdParty> { 
        struct type { 
            unsigned char __lx[40]; 
        } data; 
    }  _thirdParty;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *thirdPartyDomain;
@property (nonatomic, readonly) NSArray *underFirstParties;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)dealloc;
- (id)thirdPartyDomain;
- (id)underFirstParties;

@end
