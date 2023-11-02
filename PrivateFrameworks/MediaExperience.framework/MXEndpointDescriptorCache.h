
@interface MXEndpointDescriptorCache : NSObject {
    struct __CFArray { } * _availableEndpointsInfo;
    struct OpaqueFigReentrantMutex { } * _cacheMutex;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    struct __CFArray { } * _registeredEndpointManagers;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)sharedInstance;

- (void)_availableEndpointsDidChangeForEndpointManager:(struct OpaqueFigEndpointManager { }*)arg1 atDate:(id)arg2;
- (struct __CFArray { }*)_copyMatchingEndpointsForManagerType:(struct __CFString { }*)arg1 predicateMatchFunction:(int (*)arg2 inEndpointPredicateRefCon:(void*)arg3;
- (void)_endpointDescriptionDidChangeForEndpoint:(struct OpaqueFigEndpoint { }*)arg1;
- (struct OpaqueFigReentrantMutex { }*)_getCacheMutex;
- (id)_getWorkQueue;
- (struct __CFArray { }*)copyAvailableEndpointsForManager:(struct OpaqueFigEndpointManager { }*)arg1;
- (struct __CFArray { }*)copyAvailableRouteDescriptorsForManager:(struct OpaqueFigEndpointManager { }*)arg1;
- (struct OpaqueFigEndpoint { }*)copyEndpointFromRouteDescriptor:(struct __CFDictionary { }*)arg1 routingContextUUID:(struct __CFString { }*)arg2;
- (struct OpaqueFigEndpoint { }*)copyEndpointWithDeviceID:(struct __CFString { }*)arg1 isStreamID:(bool)arg2 managerType:(struct __CFString { }*)arg3 routingContextUUID:(struct __CFString { }*)arg4;
- (struct __CFArray { }*)copyRegisteredEndpointMangers;
- (struct __CFDictionary { }*)copyRouteDescriptorForEndpoint:(struct OpaqueFigEndpoint { }*)arg1;
- (struct __CFArray { }*)copyRouteDescriptorsForEndpoints:(struct __CFArray { }*)arg1;
- (void)dealloc;
- (struct OpaqueFigEndpointManager { }*)getEndpointManagerForType:(struct __CFString { }*)arg1;
- (id)init;
- (void)registerEndpointManagerForCaching:(struct OpaqueFigEndpointManager { }*)arg1;

@end
