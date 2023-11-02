
@interface MTLBuiltInMeshArgument : MTLBindingInternal {
    unsigned short  _builtInDataType;
    unsigned short  _builtInType;
    unsigned short  _meshPrimitiveCount;
    MTLStructTypeInternal * _meshPrimitiveStruct;
    unsigned short  _meshTopologyType;
    unsigned short  _meshVertexCount;
    MTLStructTypeInternal * _meshVertexStruct;
}

- (unsigned long long)builtInDataType;
- (unsigned long long)builtInType;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 active:(bool)arg4 index:(unsigned long long)arg5 dataType:(unsigned long long)arg6 builtInType:(unsigned long long)arg7 meshVertexStructType:(id)arg8 meshPrimitiveStructType:(id)arg9 meshVertexCount:(unsigned short)arg10 meshPrimitiveCount:(unsigned short)arg11 meshTopologyType:(unsigned long long)arg12;
- (bool)isEqual:(id)arg1;
- (unsigned long long)meshPrimitiveCount;
- (id)meshPrimitiveStruct;
- (unsigned long long)meshTopologyType;
- (unsigned long long)meshVertexCount;
- (id)meshVertexStruct;

@end
