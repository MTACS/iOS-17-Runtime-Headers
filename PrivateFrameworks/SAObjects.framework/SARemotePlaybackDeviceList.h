
@interface SARemotePlaybackDeviceList : SADomainObject <SABackgroundContextObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *remotePlaybackDevices;
@property (readonly) Class superclass;

+ (id)remotePlaybackDeviceList;
+ (id)remotePlaybackDeviceListWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)remotePlaybackDevices;
- (void)setRemotePlaybackDevices:(id)arg1;

@end
