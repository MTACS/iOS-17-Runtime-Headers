
@protocol NUStorageFactory <NSObject>

@required

- (<NUPurgeableStorage> *)newStorageWithSize:(struct { long long x1; long long x2; })arg1 format:(NUPixelFormat *)arg2;
- (void)returnStorage:(id <NUPurgeableStorage>)arg1;

@end
