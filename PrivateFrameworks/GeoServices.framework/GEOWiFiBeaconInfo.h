
@interface GEOWiFiBeaconInfo : PBCodable <NSCopying> {
    NSData * _beaconInfo;
    struct { 
        unsigned int read_beaconInfo : 1; 
        unsigned int read_wpsConfigMethods : 1; 
        unsigned int read_wpsDeviceNameData : 1; 
        unsigned int read_wpsDeviceNameElement : 1; 
        unsigned int read_wpsManufacturerElement : 1; 
        unsigned int read_wpsModelName : 1; 
        unsigned int read_wpsModelNumber : 1; 
        unsigned int read_wpsPrimaryDeviceTypeCategory : 1; 
        unsigned int read_wpsPrimaryDeviceTypeSubCategory : 1; 
        unsigned int read_wpsResponseType : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _wpsConfigMethods;
    NSString * _wpsDeviceNameData;
    NSString * _wpsDeviceNameElement;
    NSString * _wpsManufacturerElement;
    NSString * _wpsModelName;
    NSString * _wpsModelNumber;
    NSString * _wpsPrimaryDeviceTypeCategory;
    NSString * _wpsPrimaryDeviceTypeSubCategory;
    NSString * _wpsResponseType;
}

@property (nonatomic, retain) NSData *beaconInfo;
@property (nonatomic, readonly) bool hasBeaconInfo;
@property (nonatomic, readonly) bool hasWpsConfigMethods;
@property (nonatomic, readonly) bool hasWpsDeviceNameData;
@property (nonatomic, readonly) bool hasWpsDeviceNameElement;
@property (nonatomic, readonly) bool hasWpsManufacturerElement;
@property (nonatomic, readonly) bool hasWpsModelName;
@property (nonatomic, readonly) bool hasWpsModelNumber;
@property (nonatomic, readonly) bool hasWpsPrimaryDeviceTypeCategory;
@property (nonatomic, readonly) bool hasWpsPrimaryDeviceTypeSubCategory;
@property (nonatomic, readonly) bool hasWpsResponseType;
@property (nonatomic, retain) NSString *wpsConfigMethods;
@property (nonatomic, retain) NSString *wpsDeviceNameData;
@property (nonatomic, retain) NSString *wpsDeviceNameElement;
@property (nonatomic, retain) NSString *wpsManufacturerElement;
@property (nonatomic, retain) NSString *wpsModelName;
@property (nonatomic, retain) NSString *wpsModelNumber;
@property (nonatomic, retain) NSString *wpsPrimaryDeviceTypeCategory;
@property (nonatomic, retain) NSString *wpsPrimaryDeviceTypeSubCategory;
@property (nonatomic, retain) NSString *wpsResponseType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)beaconInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBeaconInfo;
- (bool)hasWpsConfigMethods;
- (bool)hasWpsDeviceNameData;
- (bool)hasWpsDeviceNameElement;
- (bool)hasWpsManufacturerElement;
- (bool)hasWpsModelName;
- (bool)hasWpsModelNumber;
- (bool)hasWpsPrimaryDeviceTypeCategory;
- (bool)hasWpsPrimaryDeviceTypeSubCategory;
- (bool)hasWpsResponseType;
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
- (void)setBeaconInfo:(id)arg1;
- (void)setWpsConfigMethods:(id)arg1;
- (void)setWpsDeviceNameData:(id)arg1;
- (void)setWpsDeviceNameElement:(id)arg1;
- (void)setWpsManufacturerElement:(id)arg1;
- (void)setWpsModelName:(id)arg1;
- (void)setWpsModelNumber:(id)arg1;
- (void)setWpsPrimaryDeviceTypeCategory:(id)arg1;
- (void)setWpsPrimaryDeviceTypeSubCategory:(id)arg1;
- (void)setWpsResponseType:(id)arg1;
- (id)wpsConfigMethods;
- (id)wpsDeviceNameData;
- (id)wpsDeviceNameElement;
- (id)wpsManufacturerElement;
- (id)wpsModelName;
- (id)wpsModelNumber;
- (id)wpsPrimaryDeviceTypeCategory;
- (id)wpsPrimaryDeviceTypeSubCategory;
- (id)wpsResponseType;
- (void)writeTo:(id)arg1;

@end
