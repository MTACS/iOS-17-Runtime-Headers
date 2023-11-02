
@protocol MTLBufferBinding <MTLBinding>

@required

- (unsigned long long)bufferAlignment;
- (unsigned long long)bufferDataSize;
- (unsigned long long)bufferDataType;
- (MTLPointerType *)bufferPointerType;
- (MTLStructType *)bufferStructType;

@end
