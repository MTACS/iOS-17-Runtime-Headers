
@interface GEOLogMsgStateDeviceIdentifier : PBCodable <NSCopying> {
    bool  _deviceDarkMode;
    NSString * _deviceHwIdentifier;
    NSString * _deviceOsVersion;
    struct { 
        unsigned int has_deviceDarkMode : 1; 
        unsigned int has_isInternalInstall : 1; 
        unsigned int has_isInternalTool : 1; 
        unsigned int read_deviceHwIdentifier : 1; 
        unsigned int read_deviceOsVersion : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isInternalInstall;
    bool  _isInternalTool;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic) bool deviceDarkMode;
@property (nonatomic, retain) NSString *deviceHwIdentifier;
@property (nonatomic, retain) NSString *deviceOsVersion;
@property (nonatomic) bool hasDeviceDarkMode;
@property (nonatomic, readonly) bool hasDeviceHwIdentifier;
@property (nonatomic, readonly) bool hasDeviceOsVersion;
@property (nonatomic) bool hasIsInternalInstall;
@property (nonatomic) bool hasIsInternalTool;
@property (nonatomic) bool isInternalInstall;
@property (nonatomic) bool isInternalTool;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)deviceDarkMode;
- (id)deviceHwIdentifier;
- (id)deviceOsVersion;
- (id)dictionaryRepresentation;
- (bool)hasDeviceDarkMode;
- (bool)hasDeviceHwIdentifier;
- (bool)hasDeviceOsVersion;
- (bool)hasIsInternalInstall;
- (bool)hasIsInternalTool;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInternalInstall;
- (bool)isInternalTool;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceDarkMode:(bool)arg1;
- (void)setDeviceHwIdentifier:(id)arg1;
- (void)setDeviceOsVersion:(id)arg1;
- (void)setHasDeviceDarkMode:(bool)arg1;
- (void)setHasIsInternalInstall:(bool)arg1;
- (void)setHasIsInternalTool:(bool)arg1;
- (void)setIsInternalInstall:(bool)arg1;
- (void)setIsInternalTool:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
