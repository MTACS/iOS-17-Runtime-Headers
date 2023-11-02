
@interface GEORPUserCredentials : PBCodable <NSCopying> {
    struct { 
        unsigned int read_icloudUserMapsAuthToken : 1; 
        unsigned int read_icloudUserPersonId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _icloudUserMapsAuthToken;
    NSString * _icloudUserPersonId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, readonly) bool hasIcloudUserMapsAuthToken;
@property (nonatomic, readonly) bool hasIcloudUserPersonId;
@property (nonatomic, retain) NSString *icloudUserMapsAuthToken;
@property (nonatomic, retain) NSString *icloudUserPersonId;

+ (id)_credentialsForPrimaryICloudAccount;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIcloudUserMapsAuthToken;
- (bool)hasIcloudUserPersonId;
- (unsigned long long)hash;
- (id)icloudUserMapsAuthToken;
- (id)icloudUserPersonId;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIcloudUserMapsAuthToken:(id)arg1;
- (void)setIcloudUserPersonId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
