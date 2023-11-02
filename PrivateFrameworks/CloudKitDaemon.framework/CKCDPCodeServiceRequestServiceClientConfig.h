
@interface CKCDPCodeServiceRequestServiceClientConfig : PBCodable <NSCopying> {
    struct { 
        unsigned int port : 1; 
    }  _has;
    NSString * _host;
    unsigned int  _port;
}

@property (nonatomic, readonly) bool hasHost;
@property (nonatomic) bool hasPort;
@property (nonatomic, retain) NSString *host;
@property (nonatomic) unsigned int port;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHost;
- (bool)hasPort;
- (unsigned long long)hash;
- (id)host;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)port;
- (bool)readFrom:(id)arg1;
- (void)setHasPort:(bool)arg1;
- (void)setHost:(id)arg1;
- (void)setPort:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
