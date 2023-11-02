
@interface NSSAboutInfoRespMsg : PBCodable <NSCopying> {
    unsigned long long  _availableStorageInBytes;
    unsigned long long  _batteryCurrentCapacity;
    bool  _batteryIsCharging;
    struct { 
        unsigned int availableStorageInBytes : 1; 
        unsigned int batteryCurrentCapacity : 1; 
        unsigned int numberOfApps : 1; 
        unsigned int numberOfPhotos : 1; 
        unsigned int numberOfSongs : 1; 
        unsigned int purgeableSpace : 1; 
        unsigned int userDeletableSpace : 1; 
        unsigned int batteryIsCharging : 1; 
    }  _has;
    unsigned long long  _numberOfApps;
    unsigned long long  _numberOfPhotos;
    unsigned long long  _numberOfSongs;
    unsigned long long  _purgeableSpace;
    unsigned long long  _userDeletableSpace;
}

@property (nonatomic) unsigned long long availableStorageInBytes;
@property (nonatomic) unsigned long long batteryCurrentCapacity;
@property (nonatomic) bool batteryIsCharging;
@property (nonatomic) bool hasAvailableStorageInBytes;
@property (nonatomic) bool hasBatteryCurrentCapacity;
@property (nonatomic) bool hasBatteryIsCharging;
@property (nonatomic) bool hasNumberOfApps;
@property (nonatomic) bool hasNumberOfPhotos;
@property (nonatomic) bool hasNumberOfSongs;
@property (nonatomic) bool hasPurgeableSpace;
@property (nonatomic) bool hasUserDeletableSpace;
@property (nonatomic) unsigned long long numberOfApps;
@property (nonatomic) unsigned long long numberOfPhotos;
@property (nonatomic) unsigned long long numberOfSongs;
@property (nonatomic) unsigned long long purgeableSpace;
@property (nonatomic) unsigned long long userDeletableSpace;

- (unsigned long long)availableStorageInBytes;
- (unsigned long long)batteryCurrentCapacity;
- (bool)batteryIsCharging;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAvailableStorageInBytes;
- (bool)hasBatteryCurrentCapacity;
- (bool)hasBatteryIsCharging;
- (bool)hasNumberOfApps;
- (bool)hasNumberOfPhotos;
- (bool)hasNumberOfSongs;
- (bool)hasPurgeableSpace;
- (bool)hasUserDeletableSpace;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numberOfApps;
- (unsigned long long)numberOfPhotos;
- (unsigned long long)numberOfSongs;
- (unsigned long long)purgeableSpace;
- (bool)readFrom:(id)arg1;
- (void)setAvailableStorageInBytes:(unsigned long long)arg1;
- (void)setBatteryCurrentCapacity:(unsigned long long)arg1;
- (void)setBatteryIsCharging:(bool)arg1;
- (void)setHasAvailableStorageInBytes:(bool)arg1;
- (void)setHasBatteryCurrentCapacity:(bool)arg1;
- (void)setHasBatteryIsCharging:(bool)arg1;
- (void)setHasNumberOfApps:(bool)arg1;
- (void)setHasNumberOfPhotos:(bool)arg1;
- (void)setHasNumberOfSongs:(bool)arg1;
- (void)setHasPurgeableSpace:(bool)arg1;
- (void)setHasUserDeletableSpace:(bool)arg1;
- (void)setNumberOfApps:(unsigned long long)arg1;
- (void)setNumberOfPhotos:(unsigned long long)arg1;
- (void)setNumberOfSongs:(unsigned long long)arg1;
- (void)setPurgeableSpace:(unsigned long long)arg1;
- (void)setUserDeletableSpace:(unsigned long long)arg1;
- (unsigned long long)userDeletableSpace;
- (void)writeTo:(id)arg1;

@end
