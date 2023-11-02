
@protocol MTLArgumentCompat <NSObject>

@required

- (unsigned long long)access;
- (unsigned long long)arrayLength;
- (unsigned long long)bufferAlignment;
- (unsigned long long)bufferDataSize;
- (unsigned long long)bufferDataType;
- (MTLPointerType *)bufferPointerType;
- (MTLStructType *)bufferStructType;
- (unsigned long long)index;
- (bool)isActive;
- (bool)isDepthTexture;
- (NSString *)name;
- (unsigned long long)objectPayloadAlignment;
- (unsigned long long)objectPayloadDataSize;
- (unsigned long long)textureDataType;
- (unsigned long long)textureType;
- (unsigned long long)threadgroupMemoryAlignment;
- (unsigned long long)threadgroupMemoryDataSize;
- (long long)type;

@end
