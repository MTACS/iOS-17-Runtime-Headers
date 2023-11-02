
@interface HMPBServiceReference : PBCodable <NSCopying> {
    HMPBAccessoryReference * _accessoryReference;
    NSData * _uniqueIdentifier;
}

@property (nonatomic, retain) HMPBAccessoryReference *accessoryReference;
@property (nonatomic, readonly) bool hasAccessoryReference;
@property (nonatomic, readonly) bool hasUniqueIdentifier;
@property (nonatomic, retain) NSData *uniqueIdentifier;

+ (id)serviceReferenceWithData:(id)arg1;
+ (id)serviceReferenceWithService:(id)arg1;

- (void).cxx_destruct;
- (id)accessoryReference;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessoryReference;
- (bool)hasUniqueIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessoryReference:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end
