
@interface GEOSpatialLookupBatchRequest : PBRequest <NSCopying> {
    NSString * _deviceCountryCode;
    NSString * _deviceSku;
    struct { 
        unsigned int read_deviceCountryCode : 1; 
        unsigned int read_deviceSku : 1; 
        unsigned int read_requests : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _requests;
}

@property (nonatomic, retain) NSString *deviceCountryCode;
@property (nonatomic, retain) NSString *deviceSku;
@property (nonatomic, readonly) bool hasDeviceCountryCode;
@property (nonatomic, readonly) bool hasDeviceSku;
@property (nonatomic, retain) NSMutableArray *requests;

+ (bool)isValid:(id)arg1;
+ (Class)requestType;

- (void).cxx_destruct;
- (void)addRequest:(id)arg1;
- (void)clearRequests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceCountryCode;
- (id)deviceSku;
- (id)dictionaryRepresentation;
- (bool)hasDeviceCountryCode;
- (bool)hasDeviceSku;
- (bool)hasGreenTeaWithValue:(bool)arg1;
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
- (id)requestAtIndex:(unsigned long long)arg1;
- (unsigned int)requestTypeCode;
- (id)requests;
- (unsigned long long)requestsCount;
- (Class)responseClass;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDeviceSku:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)writeTo:(id)arg1;

@end
