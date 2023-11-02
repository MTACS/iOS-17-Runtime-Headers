
@interface MTLIndirectConstantArgument : MTLBindingInternal {
    unsigned short  _alignment;
    unsigned long long  _aluType;
    unsigned short  _dataSize;
    unsigned short  _dataType;
    unsigned long long  _pixelFormat;
}

- (unsigned long long)bufferALUType;
- (unsigned long long)bufferPixelFormat;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)indirectConstantAlignment;
- (unsigned long long)indirectConstantDataSize;
- (unsigned long long)indirectConstantDataType;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(bool)arg4 locationIndex:(unsigned long long)arg5 dataType:(unsigned long long)arg6 pixelFormat:(unsigned long long)arg7 aluType:(unsigned long long)arg8 dataSize:(unsigned long long)arg9 alignment:(unsigned long long)arg10;
- (bool)isEqual:(id)arg1;

@end
