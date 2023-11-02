
@interface DiskImageParamsLocked_XPC : DiskImageParamsXPC

- (struct unique_ptr<const info::DiskImageInfo, std::default_delete<const info::DiskImageInfo>> { struct __compressed_pair<const info::DiskImageInfo *, std::default_delete<const info::DiskImageInfo>> { struct DiskImageInfo {} *x_1_1_1; } x1; })getImageInfoWithExtra:(bool)arg1 error:(id*)arg2;
- (id)initWithBackendXPC:(id)arg1;
- (id)newWithPassphrase:(const char *)arg1 error:(id*)arg2;

@end
