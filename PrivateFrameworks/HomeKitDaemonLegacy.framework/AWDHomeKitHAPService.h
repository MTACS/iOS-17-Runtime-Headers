
@interface AWDHomeKitHAPService : PBCodable <NSCopying> {
    NSString * _serviceType;
}

@property (nonatomic, readonly) bool hasServiceType;
@property (nonatomic, retain) NSString *serviceType;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasServiceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serviceType;
- (void)setServiceType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
