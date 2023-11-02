
@interface GEOLogMsgStateDeviceSettings : PBCodable <NSCopying> {
    bool  _deviceDarkMode;
    struct { 
        unsigned int has_deviceDarkMode : 1; 
        unsigned int has_isAltAccountPairedDevice : 1; 
        unsigned int has_supportsAdvancedMap : 1; 
    }  _flags;
    bool  _isAltAccountPairedDevice;
    bool  _supportsAdvancedMap;
}

@property (nonatomic) bool deviceDarkMode;
@property (nonatomic) bool hasDeviceDarkMode;
@property (nonatomic) bool hasIsAltAccountPairedDevice;
@property (nonatomic) bool hasSupportsAdvancedMap;
@property (nonatomic) bool isAltAccountPairedDevice;
@property (nonatomic) bool supportsAdvancedMap;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)deviceDarkMode;
- (id)dictionaryRepresentation;
- (bool)hasDeviceDarkMode;
- (bool)hasIsAltAccountPairedDevice;
- (bool)hasSupportsAdvancedMap;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAltAccountPairedDevice;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceDarkMode:(bool)arg1;
- (void)setHasDeviceDarkMode:(bool)arg1;
- (void)setHasIsAltAccountPairedDevice:(bool)arg1;
- (void)setHasSupportsAdvancedMap:(bool)arg1;
- (void)setIsAltAccountPairedDevice:(bool)arg1;
- (void)setSupportsAdvancedMap:(bool)arg1;
- (bool)supportsAdvancedMap;
- (void)writeTo:(id)arg1;

@end
