
@interface GEORPProblemOptInRequest : PBRequest <NSCopying> {
    NSData * _devicePushToken;
    bool  _didOptIn;
    struct { 
        unsigned int has_didOptIn : 1; 
        unsigned int read_devicePushToken : 1; 
        unsigned int read_problemId : 1; 
        unsigned int read_userCredentials : 1; 
        unsigned int read_userEmail : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _problemId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPUserCredentials * _userCredentials;
    NSString * _userEmail;
}

@property (nonatomic, retain) NSData *devicePushToken;
@property (nonatomic) bool didOptIn;
@property (nonatomic, readonly) bool hasDevicePushToken;
@property (nonatomic) bool hasDidOptIn;
@property (nonatomic, readonly) bool hasProblemId;
@property (nonatomic, readonly) bool hasUserCredentials;
@property (nonatomic, readonly) bool hasUserEmail;
@property (nonatomic, retain) NSString *problemId;
@property (nonatomic, retain) GEORPUserCredentials *userCredentials;
@property (nonatomic, retain) NSString *userEmail;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)devicePushToken;
- (id)dictionaryRepresentation;
- (bool)didOptIn;
- (bool)hasDevicePushToken;
- (bool)hasDidOptIn;
- (bool)hasProblemId;
- (bool)hasUserCredentials;
- (bool)hasUserEmail;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithSubmissionID:(id)arg1 allowContactBackAtEmailAddress:(id)arg2 traits:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)problemId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setDevicePushToken:(id)arg1;
- (void)setDidOptIn:(bool)arg1;
- (void)setHasDidOptIn:(bool)arg1;
- (void)setProblemId:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (void)setUserEmail:(id)arg1;
- (id)userCredentials;
- (id)userEmail;
- (void)writeTo:(id)arg1;

@end
