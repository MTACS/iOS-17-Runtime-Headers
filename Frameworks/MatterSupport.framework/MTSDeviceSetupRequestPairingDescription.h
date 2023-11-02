
@interface MTSDeviceSetupRequestPairingDescription : NSObject {
    NSNumber * _nodeID;
    NSData * _rootPublicKey;
}

@property (readonly, copy) NSNumber *nodeID;
@property (readonly, copy) NSData *rootPublicKey;

- (void).cxx_destruct;
- (id)initWithRootPublicKey:(id)arg1 nodeID:(id)arg2;
- (id)nodeID;
- (id)rootPublicKey;

@end
