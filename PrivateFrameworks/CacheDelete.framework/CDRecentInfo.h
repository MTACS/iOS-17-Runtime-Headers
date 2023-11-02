
@interface CDRecentInfo : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet * _invalidVolumes;
    NSMutableSet * _pushingServices;
    NSNumber * _version;
    NSMutableDictionary * _volumes;
}

@property (nonatomic, retain) NSMutableSet *invalidVolumes;
@property (nonatomic, retain) NSMutableSet *pushingServices;
@property (nonatomic, retain) NSNumber *version;
@property (nonatomic, retain) NSMutableDictionary *volumes;

+ (id)fetchAllowedClassesSet;
+ (id)recentInfoForVolumes:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createNewRecentVolumeInfo;
- (id)_createNewRecentVolumeInfoWithName:(id)arg1;
- (id)_recentInfoForVolume:(id)arg1 atUrgency:(int)arg2 validateResults:(bool)arg3;
- (id)bsdDiskForVolume:(id)arg1;
- (id)copyInvalidsForVolume:(id)arg1 atUrgency:(int)arg2;
- (id)copyPushingServices;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasInvalids;
- (bool)hasSnapshotForVolume:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecentInfo:(id)arg1;
- (id)initWithVolumes:(id)arg1;
- (id)invalidVolumes;
- (void)invalidateForVolume:(id)arg1;
- (bool)isEmpty;
- (bool)isInvalidForVolume:(id)arg1;
- (bool)isStale;
- (bool)isStaleForVolume:(id)arg1;
- (void)log;
- (id)pushingServices;
- (id)recentInfoForVolume:(id)arg1 atUrgency:(int)arg2;
- (long long)recentStateForVolume:(id)arg1;
- (void)removeServiceInfo:(id)arg1;
- (void)removeServiceInfo:(id)arg1 forVolume:(id)arg2;
- (id)servicesForVolume:(id)arg1;
- (void)setInvalidVolumes:(id)arg1;
- (void)setPushingServices:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setVolumes:(id)arg1;
- (id)thresholdsForVolume:(id)arg1;
- (bool)updateRecentState:(long long)arg1 forVolume:(id)arg2;
- (bool)updateServiceInfoAmount:(id)arg1 forService:(id)arg2 onVolume:(id)arg3 atUrgency:(int)arg4 withTimestamp:(double)arg5 nonPurgeableAmount:(id)arg6 deductFromCurrentAmount:(bool)arg7 info:(id)arg8;
- (bool)validateForVolume:(id)arg1 andService:(id)arg2 atUrgency:(int)arg3;
- (id)version;
- (id)volumes;

@end
