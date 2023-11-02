
@interface CLPCellOutOfServiceInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int hasWifiFallback : 1; 
        unsigned int uniqueCount : 1; 
    }  _has;
    bool  _hasWifiFallback;
    CLPLocation * _location;
    NSString * _serviceProviderName;
    bool  _uniqueCount;
}

@property (nonatomic) bool hasHasWifiFallback;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasServiceProviderName;
@property (nonatomic) bool hasUniqueCount;
@property (nonatomic) bool hasWifiFallback;
@property (nonatomic, retain) CLPLocation *location;
@property (nonatomic, retain) NSString *serviceProviderName;
@property (nonatomic) bool uniqueCount;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHasWifiFallback;
- (bool)hasLocation;
- (bool)hasServiceProviderName;
- (bool)hasUniqueCount;
- (bool)hasWifiFallback;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serviceProviderName;
- (void)setHasHasWifiFallback:(bool)arg1;
- (void)setHasUniqueCount:(bool)arg1;
- (void)setHasWifiFallback:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setServiceProviderName:(id)arg1;
- (void)setUniqueCount:(bool)arg1;
- (bool)uniqueCount;
- (void)writeTo:(id)arg1;

@end
