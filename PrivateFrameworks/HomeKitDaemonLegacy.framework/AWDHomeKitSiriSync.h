
@interface AWDHomeKitSiriSync : PBCodable <NSCopying> {
    unsigned int  _currentConfigurationVersion;
    unsigned int  _duration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int currentConfigurationVersion : 1; 
        unsigned int duration : 1; 
        unsigned int lastSyncedConfigurationVersion : 1; 
        unsigned int serverConfigurationVersion : 1; 
    }  _has;
    unsigned int  _lastSyncedConfigurationVersion;
    NSMutableArray * _reasons;
    unsigned int  _serverConfigurationVersion;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int currentConfigurationVersion;
@property (nonatomic) unsigned int duration;
@property (nonatomic) bool hasCurrentConfigurationVersion;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasLastSyncedConfigurationVersion;
@property (nonatomic) bool hasServerConfigurationVersion;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int lastSyncedConfigurationVersion;
@property (nonatomic, retain) NSMutableArray *reasons;
@property (nonatomic) unsigned int serverConfigurationVersion;
@property (nonatomic) unsigned long long timestamp;

+ (Class)reasonsType;

- (void).cxx_destruct;
- (void)addReasons:(id)arg1;
- (void)clearReasons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentConfigurationVersion;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (bool)hasCurrentConfigurationVersion;
- (bool)hasDuration;
- (bool)hasLastSyncedConfigurationVersion;
- (bool)hasServerConfigurationVersion;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)lastSyncedConfigurationVersion;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reasons;
- (id)reasonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)reasonsCount;
- (unsigned int)serverConfigurationVersion;
- (void)setCurrentConfigurationVersion:(unsigned int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasCurrentConfigurationVersion:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasLastSyncedConfigurationVersion:(bool)arg1;
- (void)setHasServerConfigurationVersion:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLastSyncedConfigurationVersion:(unsigned int)arg1;
- (void)setReasons:(id)arg1;
- (void)setServerConfigurationVersion:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end