
@interface ARNormalTechnique : ARTechnique {
    struct __CVPixelBufferPool { } * _normalPixelBufferPool;
    struct CV3DNormalEstimationSession { } * _session;
}

- (void)dealloc;
- (id)init;
- (id)processData:(id)arg1;

@end
