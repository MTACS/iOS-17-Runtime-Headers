
@interface GEOLogMsgStateApplicationIdentifier : PBCodable <NSCopying> {
    bool  _appDarkMode;
    NSString * _appIdentifier;
    NSString * _appMajorVersion;
    NSString * _appMinorVersion;
    int  _appType;
    struct { 
        unsigned int has_appType : 1; 
        unsigned int has_appDarkMode : 1; 
        unsigned int read_appIdentifier : 1; 
        unsigned int read_appMajorVersion : 1; 
        unsigned int read_appMinorVersion : 1; 
        unsigned int read_processName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _processName;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic) bool appDarkMode;
@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, retain) NSString *appMajorVersion;
@property (nonatomic, retain) NSString *appMinorVersion;
@property (nonatomic) int appType;
@property (nonatomic) bool hasAppDarkMode;
@property (nonatomic, readonly) bool hasAppIdentifier;
@property (nonatomic, readonly) bool hasAppMajorVersion;
@property (nonatomic, readonly) bool hasAppMinorVersion;
@property (nonatomic) bool hasAppType;
@property (nonatomic, readonly) bool hasProcessName;
@property (nonatomic, retain) NSString *processName;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAppType:(id)arg1;
- (bool)appDarkMode;
- (id)appIdentifier;
- (id)appMajorVersion;
- (id)appMinorVersion;
- (int)appType;
- (id)appTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppDarkMode;
- (bool)hasAppIdentifier;
- (bool)hasAppMajorVersion;
- (bool)hasAppMinorVersion;
- (bool)hasAppType;
- (bool)hasProcessName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)processName;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppDarkMode:(bool)arg1;
- (void)setAppIdentifier:(id)arg1;
- (void)setAppMajorVersion:(id)arg1;
- (void)setAppMinorVersion:(id)arg1;
- (void)setAppType:(int)arg1;
- (void)setHasAppDarkMode:(bool)arg1;
- (void)setHasAppType:(bool)arg1;
- (void)setProcessName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
