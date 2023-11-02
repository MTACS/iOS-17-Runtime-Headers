
@interface MTLAccelerationStructureAllocationDescriptor : NSObject <NSCopying> {
    bool  _forceResourceIndex;
    unsigned long long  _resourceIndex;
    unsigned long long  _storageMode;
}

@property (nonatomic) bool forceResourceIndex;
@property (nonatomic) unsigned long long resourceIndex;
@property (nonatomic) unsigned long long storageMode;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)forceResourceIndex;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)resourceIndex;
- (void)setForceResourceIndex:(bool)arg1;
- (void)setResourceIndex:(unsigned long long)arg1;
- (void)setStorageMode:(unsigned long long)arg1;
- (unsigned long long)storageMode;

@end
