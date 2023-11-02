
@interface ADWorldToImageProjection : NSObject {
    struct WorldToImageProjection { int (**x1)(); } * _projection;
}

- (void)dealloc;
- (id)initWithPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 calibration:(id)arg2;
- (void)projectPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned int)arg2;

@end
