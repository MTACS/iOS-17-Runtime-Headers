
@interface DiskImageParamsXPC : NSObject <NSCoding, NSSecureCoding> {
    BackendXPC * _backendXPC;
    unsigned long long  _blockSize;
    BackendXPC * _cacheBackendXPC;
    NSURL * _cacheURL;
    NSUUID * _instanceID;
    DIShadowChain * _shadowChain;
}

@property (nonatomic, retain) BackendXPC *backendXPC;
@property (nonatomic) unsigned long long blockSize;
@property (nonatomic, retain) BackendXPC *cacheBackendXPC;
@property (nonatomic, copy) NSURL *cacheURL;
@property (nonatomic, copy) NSUUID *instanceID;
@property (nonatomic, readonly) bool isSparseFormat;
@property (nonatomic, readonly) bool isWritableFormat;
@property (nonatomic, readonly) unsigned long long numBlocks;
@property (nonatomic, retain) DIShadowChain *shadowChain;

+ (id)newWithURL:(id)arg1 fileOpenFlags:(int)arg2 error:(id*)arg3;
+ (id)newWithUnlockedBackendXPC:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;
+ (bool)validateSupportedFormatWithBackendXPC:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)allowOnDiskCacheWithSinkDiskImage:(const void*)arg1;
- (id)backendXPC;
- (unsigned long long)blockSize;
- (id)cacheBackendXPC;
- (id)cacheURL;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct __compressed_pair<DiskImage *, std::default_delete<DiskImage>> { struct DiskImage {} *x_1_1_1; } x1; })createDiskImageWithCache:(bool)arg1 shadowValidation:(bool)arg2;
- (struct shared_ptr<DiskImage> { struct DiskImage {} *x1; struct __shared_weak_count {} *x2; })createShadowDiskImageWithBackend:(struct shared_ptr<Backend> { struct Backend {} *x1; struct __shared_weak_count {} *x2; })arg1 sinkDiskImage:(const void*)arg2 cache_only:(bool)arg3;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct __compressed_pair<DiskImage *, std::default_delete<DiskImage>> { struct DiskImage {} *x_1_1_1; } x1; })createSinkDiskImage;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct unique_ptr<const info::DiskImageInfo, std::default_delete<const info::DiskImageInfo>> { struct __compressed_pair<const info::DiskImageInfo *, std::default_delete<const info::DiskImageInfo>> { struct DiskImageInfo {} *x_1_1_1; } x1; })getImageInfoWithExtra:(bool)arg1 error:(id*)arg2;
- (id)initWithBackendXPC:(id)arg1;
- (id)initWithBackendXPC:(id)arg1 blockSize:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (bool)isSparseFormat;
- (bool)isWritableFormat;
- (bool)lockBackendsWithError:(id*)arg1;
- (bool)makeNewImageEncryptedWithCertificate:(id)arg1 error:(id*)arg2;
- (bool)makeNewImageEncryptedWithPassphrase:(const char *)arg1 certificate:(id)arg2 error:(id*)arg3;
- (unsigned long long)numBlocks;
- (void)setBackendXPC:(id)arg1;
- (void)setBlockSize:(unsigned long long)arg1;
- (void)setCacheBackendXPC:(id)arg1;
- (void)setCacheURL:(id)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setShadowChain:(id)arg1;
- (int)setSizeWithDiskImage:(const void*)arg1 newSize:(unsigned long long)arg2;
- (id)shadowChain;

@end
