
@interface PKMetalPaintRenderCacheBuffer : NSObject {
    unsigned long long  _numPoints;
    unsigned long long  _numVertices;
    PKMetalBuffer * _pkStrokePointBuffer;
    PKMetalBuffer * _pkUniformsBuffer;
    unsigned long long  _strokePointBufferOffset;
    unsigned long long  _uniformsBufferOffset;
}

- (void).cxx_destruct;
- (id)init;

@end
