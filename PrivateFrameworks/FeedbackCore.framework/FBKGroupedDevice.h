
@interface FBKGroupedDevice : NSObject <DEDDeviceFBKSupport, DEDDeviceLike, FBKDiffableObject> {
    NSMutableDictionary * _devices;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableDictionary *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long hash;
@property (readonly) Class superclass;

+ (id)FBKKnownDevices;
+ (id)currentDevicePlatform;
+ (id)currentGroupedDevice;
+ (id)deviceDefaults;
+ (id)inspectFBKPairing;
+ (id)sortedDevices:(id)arg1;

- (void).cxx_destruct;
- (void)_postDeviceChangeNotification;
- (void)_updateWithDevices:(id)arg1;
- (void)addDevice:(id)arg1;
- (id)anyDEDDevice;
- (id)bestStringForKey:(id)arg1;
- (id)build;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDetails;
- (id)dedIDSDevice;
- (id)dedSharingDevice;
- (id)description;
- (id)deviceClass;
- (id)deviceDataForSubmissionWithSession:(id)arg1;
- (id)deviceDefaults;
- (void)deviceListChanged:(id)arg1;
- (id)devices;
- (id)diffableHashWithContext:(id)arg1;
- (id)displayName;
- (id)displayType;
- (void)fetchIconImageDataForScale:(float)arg1 completionCompletion:(id /* block */)arg2;
- (bool)hasCapabilities:(id)arg1;
- (long long)hash;
- (id)hashingKey;
- (id)identifier;
- (id)imageData;
- (id)inferredPlatform;
- (id)initWithDevices:(id)arg1;
- (bool)isCurrentDevice;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDevice:(id)arg1;
- (bool)isFBKPaired;
- (bool)isLikeDEDDevice:(id)arg1;
- (bool)isReady;
- (bool)isVisibleToDED;
- (id)mostReliableDevice;
- (id)name;
- (bool)needsPairing;
- (void)pairToFBK;
- (id)platform;
- (id)productType;
- (id)publicLogDescription;
- (id)readyDevice;
- (void)removeFBKPairing;
- (id)serialize;
- (void)setDevices:(id)arg1;
- (id)shortDescription;
- (id)transportsForDisplay;
- (void)updateStoredCopyIfNeeded;

@end
