
@interface GEOLogMsgStateDeviceLocale : PBCodable <NSCopying> {
    NSString * _deviceInputLocale;
    NSString * _deviceOutputLocale;
    NSString * _deviceSettingsLocale;
    struct { 
        unsigned int read_deviceInputLocale : 1; 
        unsigned int read_deviceOutputLocale : 1; 
        unsigned int read_deviceSettingsLocale : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSString *deviceInputLocale;
@property (nonatomic, retain) NSString *deviceOutputLocale;
@property (nonatomic, retain) NSString *deviceSettingsLocale;
@property (nonatomic, readonly) bool hasDeviceInputLocale;
@property (nonatomic, readonly) bool hasDeviceOutputLocale;
@property (nonatomic, readonly) bool hasDeviceSettingsLocale;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceInputLocale;
- (id)deviceOutputLocale;
- (id)deviceSettingsLocale;
- (id)dictionaryRepresentation;
- (bool)hasDeviceInputLocale;
- (bool)hasDeviceOutputLocale;
- (bool)hasDeviceSettingsLocale;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceInputLocale:(id)arg1;
- (void)setDeviceOutputLocale:(id)arg1;
- (void)setDeviceSettingsLocale:(id)arg1;
- (void)writeTo:(id)arg1;

@end
