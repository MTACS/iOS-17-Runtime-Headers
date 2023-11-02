
@interface BLMediaItemUtils : NSObject

+ (void)addPersistHLSOfflinePlaybackKey:(id)arg1 forUri:(id)arg2 toItem:(id)arg3;
+ (unsigned long long)bitrateForItem:(id)arg1;
+ (void)clearPersistHLSOfflinePlaybackKeysFromItem:(id)arg1;
+ (id)hlsOfflinePlaybackKeysForItem:(id)arg1;
+ (void)removePersistHLSOfflinePlaybackKeyForUri:(id)arg1 fromItem:(id)arg2;
+ (void)setBitrate:(unsigned long long)arg1 forItem:(id)arg2;

@end
