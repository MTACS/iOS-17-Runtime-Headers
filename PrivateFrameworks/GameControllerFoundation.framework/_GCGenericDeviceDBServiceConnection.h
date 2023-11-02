
@interface _GCGenericDeviceDBServiceConnection : GCConfigXPCServiceServiceConnection <_GCGenericDeviceDBService>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serviceProtocol;

- (id)hasModelForDevice:(id)arg1;
- (id)preparedModelForDevice:(id)arg1;

@end
