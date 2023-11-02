
@interface HMPBCharacteristicReference : PBCodable <NSCopying> {
    HMPBServiceReference * _serviceReference;
    NSData * _uniqueIdentifier;
}

@property (nonatomic, readonly) bool hasServiceReference;
@property (nonatomic, readonly) bool hasUniqueIdentifier;
@property (nonatomic, retain) HMPBServiceReference *serviceReference;
@property (nonatomic, retain) NSData *uniqueIdentifier;

+ (id)characteristicReferenceWithCharacteristic:(id)arg1;
+ (id)characteristicReferenceWithData:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasServiceReference;
- (bool)hasUniqueIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serviceReference;
- (void)setServiceReference:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end
