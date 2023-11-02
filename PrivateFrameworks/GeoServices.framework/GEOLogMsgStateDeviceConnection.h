
@interface GEOLogMsgStateDeviceConnection : PBCodable <NSCopying> {
    int  _cellularDataState;
    NSString * _deviceCarrierName;
    NSString * _deviceCountryCode;
    int  _deviceNetworkConnectivity;
    struct { 
        unsigned int has_cellularDataState : 1; 
        unsigned int has_deviceNetworkConnectivity : 1; 
        unsigned int read_deviceCarrierName : 1; 
        unsigned int read_deviceCountryCode : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic) int cellularDataState;
@property (nonatomic, retain) NSString *deviceCarrierName;
@property (nonatomic, retain) NSString *deviceCountryCode;
@property (nonatomic) int deviceNetworkConnectivity;
@property (nonatomic) bool hasCellularDataState;
@property (nonatomic, readonly) bool hasDeviceCarrierName;
@property (nonatomic, readonly) bool hasDeviceCountryCode;
@property (nonatomic) bool hasDeviceNetworkConnectivity;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsCellularDataState:(id)arg1;
- (int)StringAsDeviceNetworkConnectivity:(id)arg1;
- (int)cellularDataState;
- (id)cellularDataStateAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceCarrierName;
- (id)deviceCountryCode;
- (int)deviceNetworkConnectivity;
- (id)deviceNetworkConnectivityAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasCellularDataState;
- (bool)hasDeviceCarrierName;
- (bool)hasDeviceCountryCode;
- (bool)hasDeviceNetworkConnectivity;
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
- (void)setCellularDataState:(int)arg1;
- (void)setDeviceCarrierName:(id)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDeviceNetworkConnectivity:(int)arg1;
- (void)setHasCellularDataState:(bool)arg1;
- (void)setHasDeviceNetworkConnectivity:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
