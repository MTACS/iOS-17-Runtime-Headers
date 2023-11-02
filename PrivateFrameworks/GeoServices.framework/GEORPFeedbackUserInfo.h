
@interface GEORPFeedbackUserInfo : PBCodable <NSCopying> {
    GEORPAppAttestInfo * _anonUserInfo;
    NSData * _devicePushToken;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_anonUserInfo : 1; 
        unsigned int read_devicePushToken : 1; 
        unsigned int read_preferredEmail : 1; 
        unsigned int read_rolloverInfo : 1; 
        unsigned int read_tdmUserInfo : 1; 
        unsigned int read_ugcUserId : 1; 
        unsigned int read_userCredentials : 1; 
        unsigned int read_userEmail : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _preferredEmail;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPAppAttestInfo * _rolloverInfo;
    GEORPTdmInfo * _tdmUserInfo;
    NSString * _ugcUserId;
    PBUnknownFields * _unknownFields;
    GEORPUserCredentials * _userCredentials;
    NSString * _userEmail;
}

@property (nonatomic, retain) GEORPAppAttestInfo *anonUserInfo;
@property (nonatomic, retain) NSData *devicePushToken;
@property (nonatomic, readonly) bool hasAnonUserInfo;
@property (nonatomic, readonly) bool hasDevicePushToken;
@property (nonatomic, readonly) bool hasPreferredEmail;
@property (nonatomic, readonly) bool hasRolloverInfo;
@property (nonatomic, readonly) bool hasTdmUserInfo;
@property (nonatomic, readonly) bool hasUgcUserId;
@property (nonatomic, readonly) bool hasUserCredentials;
@property (nonatomic, readonly) bool hasUserEmail;
@property (nonatomic, retain) NSString *preferredEmail;
@property (nonatomic, retain) GEORPAppAttestInfo *rolloverInfo;
@property (nonatomic, retain) GEORPTdmInfo *tdmUserInfo;
@property (nonatomic, retain) NSString *ugcUserId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEORPUserCredentials *userCredentials;
@property (nonatomic, retain) NSString *userEmail;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)anonUserInfo;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)devicePushToken;
- (id)dictionaryRepresentation;
- (bool)hasAnonUserInfo;
- (bool)hasDevicePushToken;
- (bool)hasPreferredEmail;
- (bool)hasRolloverInfo;
- (bool)hasTdmUserInfo;
- (bool)hasUgcUserId;
- (bool)hasUserCredentials;
- (bool)hasUserEmail;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)preferredEmail;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)rolloverInfo;
- (void)setAnonUserInfo:(id)arg1;
- (void)setDevicePushToken:(id)arg1;
- (void)setPreferredEmail:(id)arg1;
- (void)setRolloverInfo:(id)arg1;
- (void)setTdmUserInfo:(id)arg1;
- (void)setUgcUserId:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (void)setUserEmail:(id)arg1;
- (id)tdmUserInfo;
- (id)ugcUserId;
- (id)unknownFields;
- (id)userCredentials;
- (id)userEmail;
- (void)writeTo:(id)arg1;

@end
