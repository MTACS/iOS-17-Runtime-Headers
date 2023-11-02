
@interface GEOURLInfo : PBCodable <NSCopying> {
    unsigned int  _alternativeMultipathTCPPort;
    struct { 
        unsigned int has_alternativeMultipathTCPPort : 1; 
        unsigned int has_supportsMultipathTCP : 1; 
        unsigned int has_useAuthProxy : 1; 
    }  _flags;
    bool  _supportsMultipathTCP;
    PBUnknownFields * _unknownFields;
    NSString * _url;
    bool  _useAuthProxy;
}

@property (nonatomic) unsigned int alternativeMultipathTCPPort;
@property (nonatomic) bool hasAlternativeMultipathTCPPort;
@property (nonatomic) bool hasSupportsMultipathTCP;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic) bool hasUseAuthProxy;
@property (nonatomic, readonly) NSURL *nsURL;
@property (nonatomic) bool supportsMultipathTCP;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *url;
@property (nonatomic) bool useAuthProxy;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)alternativeMultipathTCPPort;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlternativeMultipathTCPPort;
- (bool)hasSupportsMultipathTCP;
- (bool)hasUrl;
- (bool)hasUseAuthProxy;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)nsURL;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlternativeMultipathTCPPort:(unsigned int)arg1;
- (void)setHasAlternativeMultipathTCPPort:(bool)arg1;
- (void)setHasSupportsMultipathTCP:(bool)arg1;
- (void)setHasUseAuthProxy:(bool)arg1;
- (void)setSupportsMultipathTCP:(bool)arg1;
- (void)setUrl:(id)arg1;
- (void)setUseAuthProxy:(bool)arg1;
- (bool)supportsMultipathTCP;
- (id)unknownFields;
- (id)url;
- (bool)useAuthProxy;
- (void)writeTo:(id)arg1;

@end
