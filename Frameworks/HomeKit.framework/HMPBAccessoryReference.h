
@interface HMPBAccessoryReference : PBCodable <NSCopying> {
    HMPBHomeReference * _homeReference;
    NSData * _uniqueIdentifier;
}

@property (nonatomic, readonly) bool hasHomeReference;
@property (nonatomic, readonly) bool hasUniqueIdentifier;
@property (nonatomic, retain) HMPBHomeReference *homeReference;
@property (nonatomic, retain) NSData *uniqueIdentifier;

+ (id)accessoryReferenceWithAccessory:(id)arg1;
+ (id)accessoryReferenceWithData:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHomeReference;
- (bool)hasUniqueIdentifier;
- (unsigned long long)hash;
- (id)homeReference;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHomeReference:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end
