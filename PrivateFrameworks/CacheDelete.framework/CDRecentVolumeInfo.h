
@interface CDRecentVolumeInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bsdDisk;
    CacheDeleteVolume * _cdVolume;
    NSMutableDictionary * _diagnostics;
    NSNumber * _freespace;
    bool  _hasSnapshot;
    unsigned long long  _reserve;
    NSMutableDictionary * _services;
    NSDictionary * _thresholds;
    NSDate * _timestamp;
    NSString * _volume;
    long long  _volumeState;
}

@property (nonatomic, retain) NSString *bsdDisk;
@property (nonatomic, retain) CacheDeleteVolume *cdVolume;
@property (nonatomic, retain) NSMutableDictionary *diagnostics;
@property (retain) NSNumber *freespace;
@property bool hasSnapshot;
@property unsigned long long reserve;
@property (nonatomic, retain) NSMutableDictionary *services;
@property (nonatomic, retain) NSDictionary *thresholds;
@property (retain) NSDate *timestamp;
@property (nonatomic, retain) NSString *volume;
@property (nonatomic) long long volumeState;

+ (id)CDRecentVolumeInfo:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_recentInfoAtUrgency:(int)arg1 validateResults:(bool)arg2;
- (unsigned long long)_reserveForVolume;
- (bool)_validateWithSharedCacheDeleteForService:(id)arg1;
- (id)bsdDisk;
- (id)cdVolume;
- (id)copyInvalidsAtUrgency:(int)arg1 currentlyPushing:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createVolumeWithMountPoint:(id)arg1;
- (id)createVolumeWithPath:(id)arg1;
- (id)description;
- (id)diagnostics;
- (void)encodeWithCoder:(id)arg1;
- (id)freespace;
- (bool)hasSnapshot;
- (id)initWithCoder:(id)arg1;
- (id)initWithServices:(id)arg1 volumeName:(id)arg2;
- (id)initWithVolumeInfo:(id)arg1;
- (void)invalidate;
- (bool)isEmpty;
- (bool)isStale;
- (void)log;
- (id)recentInfoAtUrgency:(int)arg1;
- (void)removeServiceInfo:(id)arg1;
- (unsigned long long)reserve;
- (id)services;
- (void)setBsdDisk:(id)arg1;
- (void)setCdVolume:(id)arg1;
- (void)setDiagnostics:(id)arg1;
- (void)setFreespace:(id)arg1;
- (void)setHasSnapshot:(bool)arg1;
- (void)setReserve:(unsigned long long)arg1;
- (void)setServices:(id)arg1;
- (void)setThresholds:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setVolume:(id)arg1;
- (void)setVolumeState:(long long)arg1;
- (id)thresholds;
- (id)timestamp;
- (bool)updateServiceInfoAmount:(id)arg1 forService:(id)arg2 atUrgency:(int)arg3 withTimestamp:(double)arg4 nonPurgeableAmount:(id)arg5 deductFromCurrentAmount:(bool)arg6 info:(id)arg7;
- (bool)validateServiceInfo:(id)arg1 atUrgency:(int)arg2;
- (id)volume;
- (id)volumeServices;
- (long long)volumeState;

@end
