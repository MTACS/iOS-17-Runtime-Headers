
@interface AVFigRoutingContextCommandOutputDeviceConfiguration : NSObject <AVOutputDeviceConfigurationRetrieval> {
    struct __CFDictionary { } * _response;
}

@property (nonatomic, readonly) bool automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *devicePassword;
@property (nonatomic, readonly) NSData *devicePublicKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool onlyAllowsConnectionsFromPeersInHomeGroup;
@property (nonatomic, readonly) NSArray *peersInHomeGroup;
@property (readonly) Class superclass;

+ (void)initialize;

- (bool)automaticallyAllowsConnectionsFromPeersInHomeGroup;
- (void)dealloc;
- (id)deviceID;
- (id)deviceName;
- (id)devicePassword;
- (id)devicePublicKey;
- (id)init;
- (id)initWithRoutingContextComandResponse:(struct __CFDictionary { }*)arg1;
- (bool)onlyAllowsConnectionsFromPeersInHomeGroup;
- (id)peersInHomeGroup;

@end
