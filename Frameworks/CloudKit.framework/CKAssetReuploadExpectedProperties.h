
@interface CKAssetReuploadExpectedProperties : NSObject <NSCopying, NSSecureCoding> {
    NSData * _assetKey;
    NSData * _fileSignature;
    NSData * _referenceSignature;
}

@property (nonatomic, readonly, copy) NSData *assetKey;
@property (nonatomic, readonly, copy) NSData *fileSignature;
@property (nonatomic, readonly, copy) NSData *referenceSignature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)assetKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileSignature;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileSignature:(id)arg1 referenceSignature:(id)arg2 assetKey:(id)arg3;
- (id)referenceSignature;

@end
