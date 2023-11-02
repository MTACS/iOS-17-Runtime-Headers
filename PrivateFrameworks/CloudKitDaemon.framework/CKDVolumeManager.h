
@interface CKDVolumeManager : NSObject

+ (void)_rebuildVolumes;
+ (id)deviceIDForVolumeUUID:(id)arg1;
+ (void)initialize;
+ (id)volumeForDeviceID:(id)arg1;
+ (id)volumeForVolumeUUID:(id)arg1;
+ (id)volumeUUIDForDeviceID:(id)arg1;

@end
