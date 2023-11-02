
@interface GEORPWatchAuxiliaryControl : PBCodable <NSCopying> {
    struct { 
        unsigned int read_hardwareIdentifier : 1; 
        unsigned int read_osBuild : 1; 
        unsigned int read_osVersion : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _hardwareIdentifier;
    NSString * _osBuild;
    NSString * _osVersion;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSString *hardwareIdentifier;
@property (nonatomic, readonly) bool hasHardwareIdentifier;
@property (nonatomic, readonly) bool hasOsBuild;
@property (nonatomic, readonly) bool hasOsVersion;
@property (nonatomic, retain) NSString *osBuild;
@property (nonatomic, retain) NSString *osVersion;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)hardwareIdentifier;
- (bool)hasHardwareIdentifier;
- (bool)hasOsBuild;
- (bool)hasOsVersion;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)osBuild;
- (id)osVersion;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHardwareIdentifier:(id)arg1;
- (void)setOsBuild:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)writeTo:(id)arg1;

@end
