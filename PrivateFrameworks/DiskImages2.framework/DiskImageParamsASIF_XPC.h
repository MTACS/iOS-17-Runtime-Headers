
@interface DiskImageParamsASIF_XPC : DiskImageParamsXPC {
    struct unique_ptr<di_asif::header, std::default_delete<di_asif::header>> { 
        struct __compressed_pair<di_asif::header *, std::default_delete<di_asif::header>> { 
            struct header {} *__value_; 
        } __ptr_; 
    }  _header;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct __compressed_pair<DiskImage *, std::default_delete<DiskImage>> { struct DiskImage {} *x_1_1_1; } x1; })createSinkDiskImage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBackendXPC:(id)arg1 header:(struct unique_ptr<di_asif::header, std::default_delete<di_asif::header>> { struct __compressed_pair<di_asif::header *, std::default_delete<di_asif::header>> { struct header {} *x_1_1_1; } x1; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (bool)isSparseFormat;
- (bool)isWritableFormat;
- (unsigned long long)numBlocks;
- (int)setSizeWithDiskImage:(const void*)arg1 newSize:(unsigned long long)arg2;

@end
