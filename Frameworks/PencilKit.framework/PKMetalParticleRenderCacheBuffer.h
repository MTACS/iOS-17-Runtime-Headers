
@interface PKMetalParticleRenderCacheBuffer : NSObject {
    unsigned long long  _numParticles;
    unsigned long long  _numPoints;
    unsigned long long  _numVertices;
    PKMetalBuffer * _pkStrokePointBuffer;
    PKMetalBuffer * _pkUniformsBuffer;
    unsigned long long  _strokePointBufferOffset;
    unsigned long long  _uniformsBufferOffset;
}

- (void).cxx_destruct;

@end
