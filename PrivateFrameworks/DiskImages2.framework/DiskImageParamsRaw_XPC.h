
@interface DiskImageParamsRaw_XPC : DiskImageParamsXPC

+ (bool)supportsSecureCoding;

- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct __compressed_pair<DiskImage *, std::default_delete<DiskImage>> { struct DiskImage {} *x_1_1_1; } x1; })createSinkDiskImage;
- (bool)isSparseFormat;
- (bool)isWritableFormat;
- (unsigned long long)numBlocks;

@end
