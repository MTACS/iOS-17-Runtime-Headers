
@interface DYMTLTileMemoryExtractor : NSObject {
    bool  _aliasImplicitImageBlock;
    bool  _aliasImplicitImageBlockColor;
    unsigned long long  _aliasImplicitImageBlockColorIndex;
    NSDictionary * _dataTypeToChannelCount;
    NSDictionary * _dataTypeToImageBlockTypeStringMap;
    NSDictionary * _dataTypeToTextureComponentTypeStringMap;
    NSDictionary * _dataTypeToTextureTypeForInvalidPixelFormatMap;
    <MTLDeviceSPI> * _device;
    unsigned long long  _fragmentMemberIndex;
    struct vector<DYMTLImageBlockArgument *, std::allocator<DYMTLImageBlockArgument *>> { 
        struct DYMTLImageBlockArgument {} **__begin_; 
        struct DYMTLImageBlockArgument {} **__end_; 
        struct __compressed_pair<DYMTLImageBlockArgument **, std::allocator<DYMTLImageBlockArgument *>> { 
            struct DYMTLImageBlockArgument {} **__value_; 
        } __end_cap_; 
    }  _imageBlockArgumentsFromFragment;
    struct vector<DYMTLImageBlockArgument *, std::allocator<DYMTLImageBlockArgument *>> { 
        struct DYMTLImageBlockArgument {} **__begin_; 
        struct DYMTLImageBlockArgument {} **__end_; 
        struct __compressed_pair<DYMTLImageBlockArgument **, std::allocator<DYMTLImageBlockArgument *>> { 
            struct DYMTLImageBlockArgument {} **__value_; 
        } __end_cap_; 
    }  _imageBlockArgumentsFromTile;
    NSString * _imageBlockSignature;
    unsigned long long  _imageBlockStatus;
    NSDictionary * _pixelFormatToDataTypeStringMap;
    <DYMTLStatefulRenderCommandEncoder> * _renderEncoder;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _textureSize;
    unsigned long long  _threadgroupStatus;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _tileSize;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createDataTypeToStringDictionary;
- (id)_generateFunctionFromImageBlockMember:(struct DYMTLImageBlockMember { id x1; id x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; }*)arg1 WithIndex:(unsigned long long)arg2;
- (id)_generateImageBlockShaderStringWithMember:(struct DYMTLImageBlockMember { id x1; id x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; }*)arg1 index:(unsigned long long)arg2;
- (id)_generateImageBlockStructMember:(struct DYMTLImageBlockMember { id x1; id x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; }*)arg1 WithCurrentName:(id)arg2 WithIndent:(unsigned long long)arg3;
- (id)_generateIndentString:(unsigned long long)arg1;
- (id)_generateKernelFunctionFromString:(id)arg1 funcName:(id)arg2;
- (id)_generateStringForWritingDataToTexture:(unsigned long long)arg1;
- (id)_generateTextureFromImageBlockMember:(struct DYMTLImageBlockMember { id x1; id x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; }*)arg1;
- (id)_generateThreadgroupShaderStringWithThreadgroupIndex:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (id)_generateTileRenderPipelineStateWithTileFunction:(id)arg1 renderPassDescriptor:(id)arg2 renderPipelineState:(id)arg3;
- (void)_processArgument:(id)arg1 WithImageBlockVector:(void*)arg2;
- (id)_processArrayType:(id)arg1 WithProcessedArgument:(void*)arg2 WithMemberName:(id)arg3 WithCurrentName:(id)arg4 WithIndent:(unsigned long long)arg5;
- (id)_processStructMember:(id)arg1 WithProcessedArgument:(void*)arg2 WithMemberName:(id)arg3 WithIndent:(unsigned long long)arg4;
- (id)_processStructType:(id)arg1 WithProcessedArgument:(void*)arg2 WithMemberName:(id)arg3 WithIndent:(unsigned long long)arg4;
- (bool)encodeImageBlockDataReturn:(id)arg1 isDrawCall:(bool)arg2;
- (bool)getImageBlockStatus;
- (bool)getThreadgroupStatus;
- (void)harvestImageBlockData:(void*)arg1;
- (id)harvestThreadgroupAtIndex:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (id)initWithRenderEncoder:(id)arg1 metalDevice:(id)arg2 tileSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 texSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4;
- (bool)isArgumentExplicitImageBlock:(id)arg1;
- (void)processReflection:(id)arg1 isDrawCall:(bool)arg2;

@end
