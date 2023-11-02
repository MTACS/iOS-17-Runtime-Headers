
@interface Tiling : FRCMetalBase {
    <MTLComputePipelineState> * _assembleKernel;
    <MTLComputePipelineState> * _assembleTwoTileKernel;
    <MTLCommandQueue> * _commandQueue;
    <MTLDeviceSPI> * _device;
    <MTLLibrary> * _mtlLibrary;
    unsigned int  _tileOverlap;
    <MTLBuffer> * _tileParameters;
}

- (void).cxx_destruct;
- (void)assemble2TilesToCommandBuffer:(id)arg1 from:(id*)arg2 to:(id)arg3 tileInfo:(struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg4;
- (void)assemble3TilesToCommandBuffer:(id)arg1 from:(id*)arg2 to:(id)arg3 tileInfo:(struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg4;
- (void)assembleTiles:(struct __CVBuffer {}**)arg1 to:(struct __CVBuffer { }*)arg2 tileInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg3 numTiles:(long long)arg4;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)createTileInfoArrayForFrameWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 numTiles:(unsigned long long)arg3;
- (void)dealloc;
- (void)encodeTileBufferToCommandBuffer:(id)arg1 from:(struct __CVBuffer { }*)arg2 to:(struct __CVBuffer {}**)arg3 channels:(long long)arg4 tileInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg5 numTiles:(long long)arg6;
- (void)encodeTilingToCommandBuffer:(id)arg1 from:(id)arg2 to:(id)arg3 verticalOffset:(unsigned long long)arg4 sourceHeight:(unsigned long long)arg5;
- (id)initWithDevice:(id)arg1 commmandQueue:(id)arg2;

@end
