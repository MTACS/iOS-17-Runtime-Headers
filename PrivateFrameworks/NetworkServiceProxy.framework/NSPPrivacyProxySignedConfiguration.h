
@interface NSPPrivacyProxySignedConfiguration : PBCodable <NSCopying> {
    int  _algorithm;
    NSMutableArray * _certificates;
    NSPPrivacyProxyConfiguration * _configuration;
    struct { 
        unsigned int algorithm : 1; 
    }  _has;
    NSData * _signature;
}

@property (nonatomic) int algorithm;
@property (nonatomic, retain) NSMutableArray *certificates;
@property (nonatomic, retain) NSPPrivacyProxyConfiguration *configuration;
@property (nonatomic) bool hasAlgorithm;
@property (nonatomic, retain) NSData *signature;

+ (Class)certificatesType;

- (void).cxx_destruct;
- (int)StringAsAlgorithm:(id)arg1;
- (void)addCertificates:(id)arg1;
- (int)algorithm;
- (id)algorithmAsString:(int)arg1;
- (id)certificates;
- (id)certificatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)certificatesCount;
- (void)clearCertificates;
- (id)configuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlgorithm;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlgorithm:(int)arg1;
- (void)setCertificates:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setHasAlgorithm:(bool)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;
- (void)writeTo:(id)arg1;

@end
