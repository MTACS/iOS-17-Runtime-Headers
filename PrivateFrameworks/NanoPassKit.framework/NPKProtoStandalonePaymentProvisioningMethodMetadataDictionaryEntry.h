
@interface NPKProtoStandalonePaymentProvisioningMethodMetadataDictionaryEntry : PBCodable <NSCopying> {
    NPKProtoStandalonePaymentProvisioningMethodMetadata * _metadata;
    NSString * _type;
}

@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, retain) NPKProtoStandalonePaymentProvisioningMethodMetadata *metadata;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMetadata;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)writeTo:(id)arg1;

@end
