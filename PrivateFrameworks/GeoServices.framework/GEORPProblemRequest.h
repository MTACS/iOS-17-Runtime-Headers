
@interface GEORPProblemRequest : PBRequest <NSCopying> {
    GEOPDAnalyticMetadata * _analyticMetadata;
    GEORPClientCapabilities * _clientCapabilities;
    GEOPDClientMetadata * _clientMetadata;
    GEORPDebugSettings * _debugSettings;
    NSData * _devicePushToken;
    struct { 
        unsigned int read_analyticMetadata : 1; 
        unsigned int read_clientCapabilities : 1; 
        unsigned int read_clientMetadata : 1; 
        unsigned int read_debugSettings : 1; 
        unsigned int read_devicePushToken : 1; 
        unsigned int read_inputLanguage : 1; 
        unsigned int read_problemUuid : 1; 
        unsigned int read_problem : 1; 
        unsigned int read_userCredentials : 1; 
        unsigned int read_userEmail : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _inputLanguage;
    GEORPProblem * _problem;
    NSString * _problemUuid;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPUserCredentials * _userCredentials;
    NSString * _userEmail;
}

@property (nonatomic, retain) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, retain) GEORPClientCapabilities *clientCapabilities;
@property (nonatomic, retain) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, retain) GEORPDebugSettings *debugSettings;
@property (nonatomic, retain) NSData *devicePushToken;
@property (nonatomic, readonly) bool hasAnalyticMetadata;
@property (nonatomic, readonly) bool hasClientCapabilities;
@property (nonatomic, readonly) bool hasClientMetadata;
@property (nonatomic, readonly) bool hasDebugSettings;
@property (nonatomic, readonly) bool hasDevicePushToken;
@property (nonatomic, readonly) bool hasInputLanguage;
@property (nonatomic, readonly) bool hasProblem;
@property (nonatomic, readonly) bool hasProblemUuid;
@property (nonatomic, readonly) bool hasUserCredentials;
@property (nonatomic, readonly) bool hasUserEmail;
@property (nonatomic, retain) NSString *inputLanguage;
@property (nonatomic, retain) GEORPProblem *problem;
@property (nonatomic, retain) NSString *problemUuid;
@property (nonatomic, retain) GEORPUserCredentials *userCredentials;
@property (nonatomic, retain) NSString *userEmail;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)analyticMetadata;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (id)clientCapabilities;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugSettings;
- (id)description;
- (id)devicePushToken;
- (id)dictionaryRepresentation;
- (bool)hasAnalyticMetadata;
- (bool)hasClientCapabilities;
- (bool)hasClientMetadata;
- (bool)hasDebugSettings;
- (bool)hasDevicePushToken;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasInputLanguage;
- (bool)hasProblem;
- (bool)hasProblemUuid;
- (bool)hasUserCredentials;
- (bool)hasUserEmail;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)inputLanguage;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)problem;
- (id)problemUuid;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAnalyticMetadata:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setClientMetadata:(id)arg1;
- (void)setDebugSettings:(id)arg1;
- (void)setDevicePushToken:(id)arg1;
- (void)setInputLanguage:(id)arg1;
- (void)setProblem:(id)arg1;
- (void)setProblemUuid:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (void)setUserEmail:(id)arg1;
- (id)userCredentials;
- (id)userEmail;
- (void)writeTo:(id)arg1;

@end
