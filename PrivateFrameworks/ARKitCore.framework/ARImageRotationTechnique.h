
@interface ARImageRotationTechnique : ARTechnique {
    struct __CVPixelBufferPool { } * _bufferPool;
    long long  _mirrorMode;
    long long  _rotationAngle;
    struct OpaqueVTPixelRotationSession { } * _vtPixelRotationSession;
}

@property (nonatomic, readonly) long long mirrorMode;
@property (nonatomic, readonly) long long rotationAngle;

- (id)_fullDescription;
- (int)_rotateAccelerate:(struct __CVBuffer { }*)arg1 pOutputBuffer:(struct __CVBuffer {}**)arg2;
- (void)dealloc;
- (id)initWithRotation:(long long)arg1 mirror:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)mirrorMode;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (long long)rotationAngle;

@end
