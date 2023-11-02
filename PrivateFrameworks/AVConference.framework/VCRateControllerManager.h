
@interface VCRateControllerManager : VCObject {
    VCRateSharingGroup * _defaultSharingGroup;
    NSMutableDictionary * _sharingGroup;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _sharingGroupMutex;
}

+ (id)sharedInstance;

- (void)cleanupRateControllerSharingGroupWithConnection:(id)arg1 usePolicy:(unsigned int)arg2;
- (void)dealloc;
- (id)getRateControllerSharingGroupWithConnection:(id)arg1 usePolicy:(unsigned int)arg2;
- (id)init;
- (id)prepareEndPointKeyFromConnection:(id)arg1;

@end
