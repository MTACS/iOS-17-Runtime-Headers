
@interface MTLHeapDescriptor : NSObject <NSCopying> {
    long long  _sparsePageSize;
}

@property (nonatomic) unsigned long long cpuCacheMode;
@property (nonatomic) unsigned long long hazardTrackingMode;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) unsigned long long size;
@property (nonatomic) long long sparsePageSize;
@property (nonatomic) unsigned long long storageMode;
@property (nonatomic) long long type;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setSparsePageSize:(long long)arg1;
- (long long)sparsePageSize;

@end
