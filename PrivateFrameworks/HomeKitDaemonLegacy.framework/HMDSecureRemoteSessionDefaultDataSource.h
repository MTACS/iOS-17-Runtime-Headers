
@interface HMDSecureRemoteSessionDefaultDataSource : NSObject <HMDSecureRemoteSessionDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createSecureStreamWithPeerDevice:(id)arg1 clientMode:(bool)arg2 sessionID:(id)arg3;

@end
