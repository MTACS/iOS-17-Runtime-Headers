
@interface VCImageRotationConverterBase : VCImageConverterBase {
    unsigned int  _rotationAngle;
    struct OpaqueVTPixelRotationSession { } * _rotationSession;
}

- (void)dealloc;
- (id)initWithRotationAngle:(unsigned int)arg1 formatType:(unsigned int)arg2;

@end
