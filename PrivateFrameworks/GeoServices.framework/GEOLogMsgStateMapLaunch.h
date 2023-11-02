
@interface GEOLogMsgStateMapLaunch : PBCodable <NSCopying> {
    struct { 
        unsigned int has_launchActionInternal : 1; 
        unsigned int has_launchAction : 1; 
        unsigned int has_isHandoff : 1; 
        unsigned int read_launchUri : 1; 
        unsigned int read_referringWebsite : 1; 
        unsigned int read_sourceAppId : 1; 
        unsigned int read_sourceHandoffDevice : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isHandoff;
    int  _launchAction;
    int  _launchActionInternal;
    NSString * _launchUri;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _referringWebsite;
    NSString * _sourceAppId;
    NSString * _sourceHandoffDevice;
}

@property (nonatomic) bool hasIsHandoff;
@property (nonatomic) bool hasLaunchAction;
@property (nonatomic) bool hasLaunchActionInternal;
@property (nonatomic, readonly) bool hasLaunchUri;
@property (nonatomic, readonly) bool hasReferringWebsite;
@property (nonatomic, readonly) bool hasSourceAppId;
@property (nonatomic, readonly) bool hasSourceHandoffDevice;
@property (nonatomic) bool isHandoff;
@property (nonatomic) int launchAction;
@property (nonatomic) int launchActionInternal;
@property (nonatomic, retain) NSString *launchUri;
@property (nonatomic, retain) NSString *referringWebsite;
@property (nonatomic, retain) NSString *sourceAppId;
@property (nonatomic, retain) NSString *sourceHandoffDevice;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsLaunchAction:(id)arg1;
- (int)StringAsLaunchActionInternal:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsHandoff;
- (bool)hasLaunchAction;
- (bool)hasLaunchActionInternal;
- (bool)hasLaunchUri;
- (bool)hasReferringWebsite;
- (bool)hasSourceAppId;
- (bool)hasSourceHandoffDevice;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHandoff;
- (id)jsonRepresentation;
- (int)launchAction;
- (id)launchActionAsString:(int)arg1;
- (int)launchActionInternal;
- (id)launchActionInternalAsString:(int)arg1;
- (id)launchUri;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)referringWebsite;
- (void)setHasIsHandoff:(bool)arg1;
- (void)setHasLaunchAction:(bool)arg1;
- (void)setHasLaunchActionInternal:(bool)arg1;
- (void)setIsHandoff:(bool)arg1;
- (void)setLaunchAction:(int)arg1;
- (void)setLaunchActionInternal:(int)arg1;
- (void)setLaunchUri:(id)arg1;
- (void)setReferringWebsite:(id)arg1;
- (void)setSourceAppId:(id)arg1;
- (void)setSourceHandoffDevice:(id)arg1;
- (id)sourceAppId;
- (id)sourceHandoffDevice;
- (void)writeTo:(id)arg1;

@end
