
@interface GCMouse : NSObject <GCDevice, GCDeviceLegacy, NSSecureCoding> {
    GCController * _proxyController;
}

@property (getter=areAllHIDDevicesConnected, nonatomic) bool allHIDDevicesConnected;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *debugName;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceHash;
@property (getter=isForwarded, nonatomic) bool forwarded;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *hidServices;
@property (nonatomic, readonly) GCMouseLiveInput *liveInput;
@property (nonatomic, readonly) GCMouseInput *mouseInput;
@property (nonatomic, retain) NSString *physicalDeviceUniqueID;
@property (nonatomic, readonly) GCPhysicalInputProfile *physicalInputProfile;
@property (nonatomic, readonly) NSString *productCategory;
@property (nonatomic, retain) GCPhysicalInputProfile<GCNamedProfile> *profile;
@property (nonatomic, readonly) GCController *proxyController;
@property (nonatomic, retain) GCController *proxyController;
@property (getter=isPublished, nonatomic) bool published;
@property (nonatomic, readonly) unsigned int service;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSString *vendorName;

+ (id)current;
+ (id)mice;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_legacy_description;
- (void)_legacy_handleEvent:(struct __IOHIDEvent { }*)arg1;
- (bool)_legacy_isAttachedToDevice;
- (bool)_legacy_isEqualToController:(id)arg1;
- (id)_legacy_physicalInputProfile;
- (id)_legacy_physicalInputProfileName;
- (long long)_legacy_playerIndex;
- (id)_legacy_productCategory;
- (void)_legacy_setPlayerIndex:(long long)arg1;
- (id)_legacy_vendorName;
- (void)addServiceRef:(id)arg1;
- (void)addServiceRefsWithDevice:(id)arg1;
- (bool)areAllHIDDevicesConnected;
- (void)clearServiceRef;
- (void*)createInputBufferForDevice:(struct __IOHIDDevice { }*)arg1 withSize:(unsigned long long)arg2;
- (id)debugDescription;
- (id)debugName;
- (id)description;
- (unsigned long long)deviceHash;
- (void)encodeWithCoder:(id)arg1;
- (id)handlerQueue;
- (bool)hasServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (id)hidServices;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (bool)isATVRemote;
- (bool)isForwarded;
- (bool)isPublished;
- (id)liveInput;
- (id)mouseInput;
- (id)physicalDeviceUniqueID;
- (id)physicalInputProfile;
- (id)productCategory;
- (id)profile;
- (id)proxyController;
- (void)removeServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (unsigned int)sampleRate;
- (unsigned int)service;
- (void)setAllHIDDevicesConnected:(bool)arg1;
- (void)setDebugName:(id)arg1;
- (void)setForwarded:(bool)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setPhysicalDeviceUniqueID:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setProxyController:(id)arg1;
- (void)setPublished:(bool)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setVendorName:(id)arg1;
- (id)uniqueIdentifier;
- (id)vendorName;

@end
