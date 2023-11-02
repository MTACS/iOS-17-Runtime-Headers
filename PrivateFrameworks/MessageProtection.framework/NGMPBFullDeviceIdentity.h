
@interface NGMPBFullDeviceIdentity : PBCodable <NSCopying> {
    NSMutableArray * _prekeys;
    NGMPBP256Key * _signingKey;
}

@property (nonatomic, retain) NSMutableArray *prekeys;
@property (nonatomic, retain) NGMPBP256Key *signingKey;

+ (Class)prekeysType;

- (void).cxx_destruct;
- (void)addPrekeys:(id)arg1;
- (void)clearPrekeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)prekeys;
- (id)prekeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)prekeysCount;
- (bool)readFrom:(id)arg1;
- (void)setPrekeys:(id)arg1;
- (void)setSigningKey:(id)arg1;
- (id)signingKey;
- (void)writeTo:(id)arg1;

@end
