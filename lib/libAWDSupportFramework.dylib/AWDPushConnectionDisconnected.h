
@interface AWDPushConnectionDisconnected : PBCodable <NSCopying> {
    unsigned int  _connectionType;
    unsigned int  _error;
    int  _genericError;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int error : 1; 
        unsigned int genericError : 1; 
        unsigned int linkQuality : 1; 
        unsigned int sslError : 1; 
    }  _has;
    int  _linkQuality;
    unsigned int  _sslError;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int error;
@property (nonatomic) int genericError;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasGenericError;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasLinkQuality;
@property (nonatomic) bool hasSslError;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned int sslError;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)error;
- (int)genericError;
- (id)guid;
- (bool)hasConnectionType;
- (bool)hasError;
- (bool)hasGenericError;
- (bool)hasGuid;
- (bool)hasLinkQuality;
- (bool)hasSslError;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setError:(unsigned int)arg1;
- (void)setGenericError:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasGenericError:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasSslError:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setSslError:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)sslError;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end