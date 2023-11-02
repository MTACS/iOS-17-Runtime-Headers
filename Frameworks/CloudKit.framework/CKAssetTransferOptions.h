
@interface CKAssetTransferOptions : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _shouldFetchAssetContent;
    NSNumber * _shouldFetchAssetContentInMemory;
    NSNumber * _sparseAware;
    NSNumber * _useMMCSEncryptionV2;
}

@property (copy) NSNumber *shouldFetchAssetContent;
@property (copy) NSNumber *shouldFetchAssetContentInMemory;
@property (copy) NSNumber *sparseAware;
@property (copy) NSNumber *useMMCSEncryptionV2;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShouldFetchAssetContent:(id)arg1;
- (void)setShouldFetchAssetContentInMemory:(id)arg1;
- (void)setSparseAware:(id)arg1;
- (void)setUseMMCSEncryptionV2:(id)arg1;
- (id)shouldFetchAssetContent;
- (id)shouldFetchAssetContentInMemory;
- (id)sparseAware;
- (id)useMMCSEncryptionV2;

@end
