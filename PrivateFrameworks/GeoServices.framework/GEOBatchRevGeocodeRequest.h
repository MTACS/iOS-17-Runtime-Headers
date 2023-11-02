
@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _additionalPlaceTypes;
    NSString * _deviceCountryCode;
    NSString * _deviceSku;
    NSString * _displayRegion;
    struct { 
        unsigned int read_additionalPlaceTypes : 1; 
        unsigned int read_deviceCountryCode : 1; 
        unsigned int read_deviceSku : 1; 
        unsigned int read_displayRegion : 1; 
        unsigned int read_locations : 1; 
        unsigned int read_serviceTags : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _locations;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _serviceTags;
}

@property (nonatomic, readonly) int*additionalPlaceTypes;
@property (nonatomic, readonly) unsigned long long additionalPlaceTypesCount;
@property (nonatomic, retain) NSString *deviceCountryCode;
@property (nonatomic, retain) NSString *deviceSku;
@property (nonatomic, retain) NSString *displayRegion;
@property (nonatomic, readonly) bool hasDeviceCountryCode;
@property (nonatomic, readonly) bool hasDeviceSku;
@property (nonatomic, readonly) bool hasDisplayRegion;
@property (nonatomic, retain) NSMutableArray *locations;
@property (nonatomic, retain) NSMutableArray *serviceTags;

+ (bool)isValid:(id)arg1;
+ (Class)locationType;
+ (Class)serviceTagType;

- (void).cxx_destruct;
- (int)StringAsAdditionalPlaceTypes:(id)arg1;
- (void)addAdditionalPlaceType:(int)arg1;
- (void)addLocation:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (int)additionalPlaceTypeAtIndex:(unsigned long long)arg1;
- (int*)additionalPlaceTypes;
- (id)additionalPlaceTypesAsString:(int)arg1;
- (unsigned long long)additionalPlaceTypesCount;
- (void)clearAdditionalPlaceTypes;
- (void)clearLocations;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearServiceTags;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceCountryCode;
- (id)deviceSku;
- (id)dictionaryRepresentation;
- (id)displayRegion;
- (bool)hasDeviceCountryCode;
- (bool)hasDeviceSku;
- (bool)hasDisplayRegion;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)locationAtIndex:(unsigned long long)arg1;
- (id)locations;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (id)serviceTags;
- (unsigned long long)serviceTagsCount;
- (void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDeviceSku:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)writeTo:(id)arg1;

@end
