
@interface MTLBufferBindingInternal : MTLBindingInternal <MTLBufferBinding> {
    unsigned short  _alignment;
    unsigned long long  _aluType;
    unsigned int  _dataSize;
    unsigned int  _dataType;
    unsigned long long  _pixelFormat;
    unsigned int  _vertexDescriptorBuffer;
}

@property (readonly) unsigned long long access;
@property (getter=isArgument, readonly) bool argument;
@property (readonly) unsigned long long bufferAlignment;
@property (readonly) unsigned long long bufferDataSize;
@property (readonly) unsigned long long bufferDataType;
@property (readonly) MTLPointerType *bufferPointerType;
@property (readonly) MTLStructType *bufferStructType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long index;
@property (readonly) NSString *name;
@property (readonly) Class superclass;
@property (readonly) long long type;
@property (getter=isUsed, readonly) bool used;

- (unsigned long long)bufferALUType;
- (unsigned long long)bufferAlignment;
- (unsigned long long)bufferDataSize;
- (unsigned long long)bufferDataType;
- (id)bufferIndirectArgumentType;
- (unsigned long long)bufferPixelFormat;
- (id)bufferPointerType;
- (id)bufferStructType;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(bool)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 pixelFormat:(unsigned long long)arg8 aluType:(unsigned long long)arg9 isConstantBuffer:(bool)arg10 dataSize:(unsigned long long)arg11 alignment:(unsigned long long)arg12;
- (bool)isEqual:(id)arg1;
- (bool)isVertexDescriptorBuffer;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setDataSize:(unsigned long long)arg1;
- (void)setStructType:(id)arg1;
- (void)setStructType:(id)arg1 doRetain:(bool)arg2;
- (void)setVertexDescriptorBuffer:(bool)arg1;
- (id)structType;

@end
