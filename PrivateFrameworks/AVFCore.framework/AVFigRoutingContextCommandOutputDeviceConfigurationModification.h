
@interface AVFigRoutingContextCommandOutputDeviceConfigurationModification : NSObject <AVOutputDeviceConfigurationModification> {
    struct __CFDictionary { } * _payload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct __CFDictionary { }*routingContextCommandPayload;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)addPeerToHomeGroup:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removePeerWithIDFromHomeGroup:(id)arg1;
- (struct __CFDictionary { }*)routingContextCommandPayload;
- (void)setDeviceName:(id)arg1;
- (void)setDevicePassword:(id)arg1;
- (void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:(bool)arg1;
- (void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;

@end
