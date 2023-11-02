
@interface AppCache : NSObject {
    NSMutableSet * _bundleRecords;
    CacheDeleteVolume * _cdVol;
    NSURL * _dataContainerURL;
    NSString * _identifier;
    bool  _isDataseparated;
    bool  _isPlaceholder;
    bool  _isPlugin;
    NSNumber * _lastKnownCacheSize;
    NSNumber * _lastKnownFreespace;
    NSNumber * _lastKnownGroupCacheSize;
    NSNumber * _lastKnownTmpSize;
    NSDate * _lastUsed;
    NSString * _personaUniqueString;
    TestTelemetry * _telemetry;
    double  _timestamp;
    NSURL * _userManagedAssetsURL;
}

@property (nonatomic, retain) NSMutableSet *bundleRecords;
@property (nonatomic, readonly) CacheDeleteVolume *cdVol;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (nonatomic, retain) NSString *identifier;
@property (readonly) bool isDataseparated;
@property (readonly) bool isPlaceholder;
@property (readonly) bool isPlugin;
@property (nonatomic, retain) NSNumber *lastKnownCacheSize;
@property (nonatomic, retain) NSNumber *lastKnownFreespace;
@property (nonatomic, retain) NSNumber *lastKnownGroupCacheSize;
@property (nonatomic, retain) NSNumber *lastKnownTmpSize;
@property (nonatomic, retain) NSDate *lastUsed;
@property (nonatomic, readonly) NSString *personaUniqueString;
@property (nonatomic, retain) TestTelemetry *telemetry;
@property double timestamp;
@property (nonatomic, readonly) NSURL *userManagedAssetsURL;

+ (id)appCacheWithRecords:(id)arg1 identifier:(id)arg2 dataContainerURL:(id)arg3 personaUniqueString:(id)arg4 isDataseparated:(bool)arg5 isPlaceholder:(bool)arg6 isPlugin:(bool)arg7 telemetry:(id)arg8;
+ (void)enumerateAppCachesOnVolume:(id)arg1 telemetry:(id)arg2 block:(id /* block */)arg3;
+ (void)enumerateWithContainerQuery:(id)arg1 container_class:(unsigned long long)arg2 telemetry:(id)arg3 block:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)addBundleRecord:(id)arg1;
- (void)addBundleRecords:(id)arg1;
- (id)bundleRecords;
- (id)cachePath;
- (unsigned long long)caches:(bool)arg1 purge:(bool)arg2;
- (id)cdVol;
- (unsigned long long)clearCaches:(bool)arg1;
- (id)dataContainerURL;
- (id)description;
- (unsigned long long)groupCache:(bool)arg1;
- (id)identifier;
- (id)initWithBundleRecords:(id)arg1 identifier:(id)arg2 dataContainerURL:(id)arg3 personaUniqueString:(id)arg4 isDataseparated:(bool)arg5 isPlaceholder:(bool)arg6 isPlugin:(bool)arg7 telemetry:(id)arg8;
- (void)invalidate;
- (bool)isDataseparated;
- (bool)isPlaceholder;
- (bool)isPlugin;
- (id)lastKnownCacheSize;
- (id)lastKnownFreespace;
- (id)lastKnownGroupCacheSize;
- (id)lastKnownTmpSize;
- (id)lastUsed;
- (bool)moveCacheAside:(id)arg1;
- (id)personaUniqueString;
- (void)setBundleRecords:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastKnownCacheSize:(id)arg1;
- (void)setLastKnownFreespace:(id)arg1;
- (void)setLastKnownGroupCacheSize:(id)arg1;
- (void)setLastKnownTmpSize:(id)arg1;
- (void)setLastUsed:(id)arg1;
- (void)setTelemetry:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)telemetry;
- (long long)three_days_ago;
- (double)timestamp;
- (unsigned long long)tmp:(bool)arg1 purge:(bool)arg2 all:(bool)arg3;
- (id)tmpPath;
- (int)urgency;
- (id)userManagedAssetsURL;
- (bool)validate;

@end
