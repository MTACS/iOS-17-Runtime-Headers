
@interface _WKResourceLoadStatisticsFirstParty : NSObject <WKObject> {
    struct ObjectStorage<API::ResourceLoadStatisticsFirstParty> { 
        struct type { 
            unsigned char __lx[40]; 
        } data; 
    }  _firstParty;
    bool  _thirdPartyStorageAccessGranted;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *firstPartyDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool thirdPartyStorageAccessGranted;
@property (nonatomic, readonly) double timeLastUpdated;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)dealloc;
- (id)firstPartyDomain;
- (bool)storageAccess;
- (bool)thirdPartyStorageAccessGranted;
- (double)timeLastUpdated;

@end
