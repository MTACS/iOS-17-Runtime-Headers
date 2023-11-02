
@interface CKDAssetID : NSObject <NSCopying> {
    NSData * _fileSignature;
    CKDPRecordIdentifier * _recordID;
    NSData * _referenceSignature;
    NSNumber * _size;
}

@property (nonatomic, readonly, copy) NSData *fileSignature;
@property (nonatomic, readonly, copy) CKDPRecordIdentifier *recordID;
@property (nonatomic, readonly, copy) NSData *referenceSignature;
@property (nonatomic, readonly, copy) NSNumber *size;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fileSignature;
- (unsigned long long)hash;
- (id)initWithRecordID:(id)arg1 fileSignature:(id)arg2 referenceSignature:(id)arg3 size:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)recordID;
- (id)referenceSignature;
- (id)size;

@end
