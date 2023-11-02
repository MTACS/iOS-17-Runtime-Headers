
@interface DMTSharingBackedRemoteSetupBroadcastingProvider : NSObject <DMTRemoteSetupBroadcastingProvider>

@property (nonatomic, readonly) NSObject<DMTRemoteSetupBroadcasting> *broadcaster;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)broadcaster;

@end
