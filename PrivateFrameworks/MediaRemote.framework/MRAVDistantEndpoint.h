
@interface MRAVDistantEndpoint : MRAVEndpoint <NSSecureCoding> {
    bool  _canModifyGroupMembership;
    long long  _connectionType;
    MRDistantExternalDevice * _distantExternalDevice;
    MRAVDistantOutputDevice * _distantGroupLeader;
    NSArray * _distantOutputDevices;
    NSArray * _distantPersonalOutputDevices;
    NSXPCListenerEndpoint * _externalDeviceListenerEndpoint;
    NSObject<OS_dispatch_queue> * _externalDeviceQueue;
    NSString * _localizedName;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) MRDistantExternalDevice *distantExternalDevice;
@property (nonatomic, retain) MRAVDistantOutputDevice *distantGroupLeader;
@property (nonatomic, copy) NSArray *distantOutputDevices;
@property (nonatomic, copy) NSArray *distantPersonalOutputDevices;
@property (nonatomic, retain) NSXPCListenerEndpoint *externalDeviceListenerEndpoint;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *externalDeviceQueue;

+ (id)externalDeviceFactory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_externalOutputContext;
- (void)_handleConnectionStateDidChangeNotification:(id)arg1;
- (bool)canModifyGroupMembership;
- (long long)connectionType;
- (void)dealloc;
- (id)debugDescription;
- (id)designatedGroupLeader;
- (id)distantExternalDevice;
- (id)distantGroupLeader;
- (id)distantOutputDevices;
- (id)distantPersonalOutputDevices;
- (void)encodeWithCoder:(id)arg1;
- (id)externalDevice;
- (id)externalDeviceListenerEndpoint;
- (id)externalDeviceQueue;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (bool)isConnected;
- (bool)isProxyGroupPlayer;
- (id)localizedName;
- (id)outputDevices;
- (id)personalOutputDevices;
- (void)setDistantExternalDevice:(id)arg1;
- (void)setDistantGroupLeader:(id)arg1;
- (void)setDistantOutputDevices:(id)arg1;
- (void)setDistantPersonalOutputDevices:(id)arg1;
- (void)setExternalDeviceListenerEndpoint:(id)arg1;
- (void)setExternalDeviceQueue:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;

@end
