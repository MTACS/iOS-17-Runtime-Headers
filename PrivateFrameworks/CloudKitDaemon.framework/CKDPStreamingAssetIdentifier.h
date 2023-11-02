
@interface CKDPStreamingAssetIdentifier : PBCodable <NSCopying> {
    NSData * _fileSignature;
    NSString * _owner;
    NSData * _referenceSignature;
}

@property (nonatomic, retain) NSData *fileSignature;
@property (nonatomic, readonly) bool hasFileSignature;
@property (nonatomic, readonly) bool hasOwner;
@property (nonatomic, readonly) bool hasReferenceSignature;
@property (nonatomic, retain) NSString *owner;
@property (nonatomic, retain) NSData *referenceSignature;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fileSignature;
- (bool)hasFileSignature;
- (bool)hasOwner;
- (bool)hasReferenceSignature;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)owner;
- (bool)readFrom:(id)arg1;
- (id)referenceSignature;
- (void)setFileSignature:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setReferenceSignature:(id)arg1;
- (void)writeTo:(id)arg1;

@end
