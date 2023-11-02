
@interface DiskImageParamsUDIF_XPC : DiskImageParamsXPC {
    struct unique_ptr<udif::header, std::default_delete<udif::header>> { 
        struct __compressed_pair<udif::header *, std::default_delete<udif::header>> { 
            struct header {} *__value_; 
        } __ptr_; 
    }  _header;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)blockSize;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct __compressed_pair<DiskImage *, std::default_delete<DiskImage>> { struct DiskImage {} *x_1_1_1; } x1; })createSinkDiskImage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBackendXPC:(id)arg1 header:(struct unique_ptr<udif::header, std::default_delete<udif::header>> { struct __compressed_pair<udif::header *, std::default_delete<udif::header>> { struct header {} *x_1_1_1; } x1; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (bool)isWritableFormat;
- (unsigned long long)numBlocks;

@end
