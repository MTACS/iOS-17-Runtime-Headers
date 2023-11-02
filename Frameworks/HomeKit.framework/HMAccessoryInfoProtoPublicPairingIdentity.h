
@interface HMAccessoryInfoProtoPublicPairingIdentity : PBCodable <NSCopying> {
    NSString * _identifier;
    NSData * _publicPairingKeyData;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPublicPairingKeyData;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSData *publicPairingKeyData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasPublicPairingKeyData;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)publicPairingKeyData;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPublicPairingKeyData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
