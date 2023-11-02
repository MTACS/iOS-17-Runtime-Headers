
@interface GEOMapItemStorageUserValues : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_name : 1; 
        unsigned int read_phoneNumber : 1; 
        unsigned int read_timeZoneData : 1; 
        unsigned int read_timeZoneName : 1; 
        unsigned int read_url : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _name;
    NSString * _phoneNumber;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSData * _timeZoneData;
    NSString * _timeZoneName;
    PBUnknownFields * _unknownFields;
    NSString * _url;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasPhoneNumber;
@property (nonatomic, readonly) bool hasTimeZoneData;
@property (nonatomic, readonly) bool hasTimeZoneName;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) NSData *timeZoneData;
@property (nonatomic, retain) NSString *timeZoneName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *url;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasPhoneNumber;
- (bool)hasTimeZoneData;
- (bool)hasTimeZoneName;
- (bool)hasUrl;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)phoneNumber;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setTimeZoneData:(id)arg1;
- (void)setTimeZoneName:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)timeZoneData;
- (id)timeZoneName;
- (id)unknownFields;
- (id)url;
- (void)writeTo:(id)arg1;

@end
