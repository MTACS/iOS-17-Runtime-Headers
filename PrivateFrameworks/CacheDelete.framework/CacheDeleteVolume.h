
@interface CacheDeleteVolume : NSObject {
    unsigned int  _block_size;
    NSString * _bsdName;
    int  _dev;
    NSString * _fsType;
    unsigned long long  _initialFreespace;
    bool  _isRoot;
    NSString * _mountPoint;
    NSDictionary * _thresholds;
}

@property (readonly) unsigned int block_size;
@property (nonatomic, readonly) NSString *bsdName;
@property (readonly) int dev;
@property (nonatomic, readonly) NSString *fsType;
@property (readonly) unsigned long long initialFreespace;
@property (readonly) bool isRoot;
@property (nonatomic, readonly) NSString *mountPoint;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSDictionary *thresholds;

+ (id)mountPointForUUID:(id)arg1;
+ (id)rootVolume;
+ (long long)stateForPath:(id)arg1;
+ (id)validateVolumeAtPath:(id)arg1;
+ (id)volumeWithMountpoint:(id)arg1;
+ (id)volumeWithPath:(id)arg1;
+ (id)volumeWithUUID:(id)arg1;

- (void).cxx_destruct;
- (id)FSEventsUUID;
- (bool)amountIsRational:(id)arg1;
- (unsigned long long)amountPurged;
- (unsigned int)block_size;
- (id)bsdName;
- (bool)containsPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)dev;
- (unsigned long long)effective_size;
- (unsigned long long)freespace;
- (bool)freespaceIsStale:(unsigned long long)arg1;
- (id)fsType;
- (unsigned long long)hash;
- (id)initWithPath:(id)arg1;
- (id)initWithVolume:(id)arg1;
- (unsigned long long)initialFreespace;
- (bool)isEqual:(id)arg1;
- (bool)isEqualTo:(id)arg1;
- (bool)isRoot;
- (bool)mayContainPurgeableAmount:(id)arg1 forService:(id)arg2;
- (id)mountPoint;
- (unsigned long long)size;
- (long long)state;
- (id)thresholds;
- (unsigned long long)used;
- (id)uuid;
- (bool)validate;

@end
