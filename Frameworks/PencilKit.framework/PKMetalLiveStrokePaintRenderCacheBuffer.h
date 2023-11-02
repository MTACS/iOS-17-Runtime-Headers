
@interface PKMetalLiveStrokePaintRenderCacheBuffer : NSObject {
    <MTLBuffer> * _liveStrokePointBuffer;
    unsigned long long  _liveStrokePointBufferOffset;
    unsigned long long  _numPoints;
    unsigned long long  _numVertices;
    <MTLBuffer> * _strokePointBuffer;
    unsigned long long  _strokePointBufferOffset;
}

- (void).cxx_destruct;
- (id)init;

@end
