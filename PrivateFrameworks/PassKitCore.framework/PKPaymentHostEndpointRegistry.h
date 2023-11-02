
@interface PKPaymentHostEndpointRegistry : NSObject {
    NSMutableDictionary * _hostIdentifierToEndpointMap;
    NSMutableDictionary * _processIdentifierToHostIdentifiersMap;
    NSObject<OS_dispatch_queue> * _registrySerialQueue;
}

- (void).cxx_destruct;
- (void)addListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 processIdentifier:(int)arg3;
- (id)debugDescription;
- (id)init;
- (void)removeListenerEndpointsForProcessIdentifier:(int)arg1;
- (id)takeListenerEndpointForHostIdentifier:(id)arg1;

@end
