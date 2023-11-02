
@interface DiskImageParamsRAM_XPC : DiskImageParamsRaw_XPC {
    NSString * _ramSizeStr;
}

@property (nonatomic, readonly, copy) NSString *ramSizeStr;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct __compressed_pair<DiskImage *, std::default_delete<DiskImage>> { struct DiskImage {} *x_1_1_1; } x1; })createSinkDiskImage;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)ramSizeStr;
- (void)setBlockSize:(unsigned long long)arg1;

@end
