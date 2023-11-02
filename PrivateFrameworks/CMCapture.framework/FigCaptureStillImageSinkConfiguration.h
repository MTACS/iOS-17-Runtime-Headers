
@interface FigCaptureStillImageSinkConfiguration : FigCaptureSinkConfiguration {
    bool  _quadraHighResCaptureEnabled;
    bool  _zeroShutterLagEnabled;
}

@property (nonatomic) bool quadraHighResCaptureEnabled;
@property (nonatomic) bool zeroShutterLagEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)quadraHighResCaptureEnabled;
- (void)setQuadraHighResCaptureEnabled:(bool)arg1;
- (void)setZeroShutterLagEnabled:(bool)arg1;
- (int)sinkType;
- (bool)zeroShutterLagEnabled;

@end
