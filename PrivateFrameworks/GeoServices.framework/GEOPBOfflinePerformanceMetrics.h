
@interface GEOPBOfflinePerformanceMetrics : PBCodable <NSCopying> {
    NSString * _dataVersion;
    NSString * _deviceModel;
    struct { 
        unsigned int read_dataVersion : 1; 
        unsigned int read_deviceModel : 1; 
        unsigned int read_offlineVersion : 1; 
        unsigned int read_osBuild : 1; 
        unsigned int read_serviceMetrics : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _offlineVersion;
    NSString * _osBuild;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _serviceMetrics;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
