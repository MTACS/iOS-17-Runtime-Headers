
@interface MPCPlayerPathCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMutableDictionary * _endpointInvalidationObservers;
    NSMutableDictionary * _endpointObservers;
    NSMutableDictionary * _playerPathObservers;
    NSMutableDictionary * _playerPathResolutions;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, readonly) NSMutableDictionary *endpointInvalidationObservers;
@property (nonatomic, readonly) NSMutableDictionary *endpointObservers;
@property (nonatomic, readonly) NSMutableDictionary *playerPathObservers;
@property (nonatomic, readonly) NSMutableDictionary *playerPathResolutions;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_init;
- (void)_onQueue_clearObserversForPlayerPath:(id)arg1;
- (void)_onQueue_registerForEndpointChangeWithUnresolvedPlayerPath:(id)arg1 routeResolvedPlayerPath:(id)arg2;
- (void)_onQueue_registerForEndpointInvalidationsWithUnresolvedPlayerPath:(id)arg1 routeResolvedPlayerPath:(id)arg2;
- (void)_onQueue_registerForInvalidationWithUnresolvedPlayerPath:(id)arg1 invalidationPlayerPath:(void*)arg2;
- (id)accessQueue;
- (id)calloutQueue;
- (void)dealloc;
- (id)endpointInvalidationObservers;
- (id)endpointObservers;
- (id)observationTokenDescriptionForPlayerPath:(id)arg1;
- (id)playerPathObservers;
- (id)playerPathResolutions;
- (id)resolvedPlayerPathForPlayerPath:(id)arg1;

@end
